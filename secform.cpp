#include "secform.h"
#include "ui_secform.h"
#include "SHA256.h"
#include <QFileDialog>


SecForm::SecForm(QWidget *parent) : QWidget(parent), ui(new Ui::SecForm)
{
    ui->setupUi(this);
}

SecForm::~SecForm(){    delete ui;  }

void SecForm::on_b_generate_clicked()
{
    std::string source_text = (ui->text_source->toPlainText()).toStdString();

    SHA256 sha;
    sha.update(source_text);
    unsigned char* checksum = sha.digest();

    ui->text_result->setPlainText(QString::fromStdString(SHA256::toString(checksum)));
}


void SecForm::on_b_clear_clicked()
{
    ui->text_source->clear();
}


void SecForm::on_b_fromfile_clicked()
{
    QFile file(QFileDialog::getOpenFileName(this));

    if(file.open(QIODevice::ReadOnly))
        ui->text_source->setPlainText(file.readAll());

    file.close();
}

void SecForm::on_b_savetofile_clicked()
{
    QString filename(QFileDialog::getSaveFileName(this));
    QFile file(filename);

    if(file.open(QIODevice::WriteOnly))
    {
        QDataStream out(&file);
        out << ui->text_result->toPlainText();
    }

    file.close();
}

void SecForm::on_b_exit_clicked()
{
    close();
}

