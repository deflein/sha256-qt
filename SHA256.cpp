#include "SHA256.h"
#include <cstring>
#include <sstream>
#include <iomanip>

SHA256::SHA256(): _blocklen(0), _bitlen(0)
{
    _state[0] = 0x6a09e667;
    _state[1] = 0xbb67ae85;
    _state[2] = 0x3c6ef372;
    _state[3] = 0xa54ff53a;
    _state[4] = 0x510e527f;
    _state[5] = 0x9b05688c;
    _state[6] = 0x1f83d9ab;
    _state[7] = 0x5be0cd19;

    round_constants =
    {
        0x428a2f98,0x71374491,0xb5c0fbcf,0xe9b5dba5,
        0x3956c25b,0x59f111f1,0x923f82a4,0xab1c5ed5,
        0xd807aa98,0x12835b01,0x243185be,0x550c7dc3,
        0x72be5d74,0x80deb1fe,0x9bdc06a7,0xc19bf174,
        0xe49b69c1,0xefbe4786,0x0fc19dc6,0x240ca1cc,
        0x2de92c6f,0x4a7484aa,0x5cb0a9dc,0x76f988da,
        0x983e5152,0xa831c66d,0xb00327c8,0xbf597fc7,
        0xc6e00bf3,0xd5a79147,0x06ca6351,0x14292967,
        0x27b70a85,0x2e1b2138,0x4d2c6dfc,0x53380d13,
        0x650a7354,0x766a0abb,0x81c2c92e,0x92722c85,
        0xa2bfe8a1,0xa81a664b,0xc24b8b70,0xc76c51a3,
        0xd192e819,0xd6990624,0xf40e3585,0x106aa070,
        0x19a4c116,0x1e376c08,0x2748774c,0x34b0bcb5,
        0x391c0cb3,0x4ed8aa4a,0x5b9cca4f,0x682e6ff3,
        0x748f82ee,0x78a5636f,0x84c87814,0x8cc70208,
        0x90befffa,0xa4506ceb,0xbef9a3f7,0xc67178f2
    };
}

void SHA256::update(const unsigned char* data, size_t length)
{
    for (size_t i = 0 ; i < length ; i++)
    {
        _data[_blocklen++] = data[i];

        if (_blocklen == 64)
        {
            _bitlen += 512;
            _blocklen = 0;
        }
	}
}

void SHA256::update(const std::string &data)
{
    update(reinterpret_cast<const unsigned char* > (data.c_str()), data.size());
}

unsigned char * SHA256::digest()
{
    unsigned char * hash = new unsigned char[32];

	pad();
    revert(hash);

	return hash;
}

unsigned int SHA256::rotr(unsigned int x, unsigned int n)
{
    unsigned int temp1 = x >> n;
    unsigned int temp2 = x << (32 - n);

    return temp1 | temp2;
}

unsigned int SHA256::choose(unsigned int e, unsigned int f, unsigned int g)
{
    unsigned int temp1 = e & f;
    unsigned int temp2 = ~e & g;

    return temp1 xor temp2;
}

unsigned int SHA256::majority(unsigned int a, unsigned int b, unsigned int c)
{
    unsigned int temp1 = a & (b | c);
    unsigned int temp2 = b & c;

    return temp1 | temp2;
}

//Low registry function : sigma0 (input 32bit)
//return ROTR7(X) xor ROTR18(X) xor RIGHTSHIFT3(X)
unsigned int SHA256::sig0(unsigned int x)
{
    unsigned int temp1 = rotr(x, 7);
    unsigned int temp2 = rotr(x, 18);
    unsigned int temp3 = x >> 3;

    return temp1 xor temp2 xor temp3;
}

//Low registry function : sigma1 (input 32bit)
//return ROTR17(X) xor ROTR19(X) xor RIGHTSHIFT10(X)
unsigned int SHA256::sig1(unsigned int x)
{
    unsigned int temp1 = rotr(x, 17);
    unsigned int temp2 = rotr(x, 19);
    unsigned int temp3 = x >> 10;

    return temp1 xor temp2 xor temp3;
}

void SHA256::transform()
{
    unsigned int maj, S0, ch, S1, sum, newA, newE, m[64];
    unsigned int state[8];

    for (size_t i = 0, j = 0; i < 16; i++, j += 4)

        m[i] = (_data[j] << 24)     |
               (_data[j + 1] << 16) |
               (_data[j + 2] << 8)  |
               (_data[j + 3]);

    for (size_t k = 16 ; k < 64; k++)
        m[k] = sig1(m[k - 2]) + m[k - 7] + sig0(m[k - 15]) + m[k - 16];

    for(size_t i = 0 ; i < 8 ; i++)
        state[i] = _state[i];

    for (size_t i = 0; i < 64; i++)
    {
        S0 = rotr(state[0],  2) xor
             rotr(state[0], 13) xor
             rotr(state[0], 22);

        maj  = majority(state[0], state[1], state[2]);

        ch = choose(state[4], state[5], state[6]);
        S1 = rotr(state[4],  6) xor
             rotr(state[4], 11) xor
             rotr(state[4], 25);

        sum  = m[i] + round_constants[i] + state[7] + ch + S1;

        newA = S0 + maj + sum;
        newE = state[3] + sum;

		state[7] = state[6];
		state[6] = state[5];
		state[5] = state[4];
		state[3] = state[2];
		state[2] = state[1];
		state[1] = state[0];

        state[4] = newE;
		state[0] = newA;
	}

    for(size_t i = 0 ; i < 8 ; i++)
        _state[i] += state[i];
}

void SHA256::pad()
{
    unsigned long int i = _blocklen;
    unsigned char end = 56;

    _data[i++] = 0x80;

    while (i < end)
       _data[i++] = 0x00;

    if(_blocklen >= 56)
    {
		transform();
        memset(_data, 0, 56);
	}

    _bitlen   += _blocklen * 8;
    _data[63]  = _bitlen;
    _data[62]  = _bitlen >> 8;
    _data[61]  = _bitlen >> 16;
    _data[60]  = _bitlen >> 24;
    _data[59]  = _bitlen >> 32;
    _data[58]  = _bitlen >> 40;
    _data[57]  = _bitlen >> 48;
    _data[56]  = _bitlen >> 56;

    transform();
}

void SHA256::revert(unsigned char * hash)
{
    for (size_t i = 0 ; i < 4 ; i++)
        for(size_t j = 0 ; j < 8 ; j++)
            hash[i + (j * 4)] = (_state[j] >> (24 - i * 8)) & 0x000000ff;
}

std::string SHA256::toString(const unsigned char* digest)
{
    std::stringstream s;
    s << std::setfill('0') << std::hex;

    for(size_t i = 0 ; i < 32 ; i++)
    {
        s << std::setw(2) << (unsigned int)digest[i];
    }

    return s.str();
}
