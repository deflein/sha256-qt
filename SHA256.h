#ifndef SHA256_H
#define SHA256_H

#include <string>
#include <array>

class SHA256 {

public:
	SHA256();

    void update(const unsigned char * data, size_t length);
    void update(const std::string &data);
    unsigned char * digest();
    static std::string toString(const unsigned char * digest);

private:


    std::array<unsigned int, 64> round_constants;

    static unsigned int rotr(unsigned int x, unsigned int n);
    static unsigned int choose(unsigned int e, unsigned int f, unsigned int g);
    static unsigned int majority(unsigned int a, unsigned int b, unsigned int c);
    static unsigned int sig0(unsigned int x);
    static unsigned int sig1(unsigned int x);

    void revert(unsigned char * hash);
	void transform();
    void pad();

    unsigned int _blocklen;

    unsigned long long _bitlen;
    unsigned int _state[8];
    unsigned char _data[64];
};

#endif
