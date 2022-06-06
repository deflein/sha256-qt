/********************************************************************************
** Form generated from reading UI file 'secform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECFORM_H
#define UI_SECFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecForm
{
public:
    QGroupBox *result;
    QPlainTextEdit *text_result;
    QPushButton *b_savetofile;
    QPushButton *b_exit;
    QGroupBox *source_text;
    QPlainTextEdit *text_source;
    QPushButton *b_generate;
    QPushButton *b_fromfile;
    QPushButton *b_clear;

    void setupUi(QWidget *SecForm)
    {
        if (SecForm->objectName().isEmpty())
            SecForm->setObjectName(QString::fromUtf8("SecForm"));
        SecForm->resize(450, 330);
        SecForm->setStyleSheet(QString::fromUtf8(""));
        result = new QGroupBox(SecForm);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(10, 190, 431, 131));
        result->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        result->setFlat(false);
        text_result = new QPlainTextEdit(result);
        text_result->setObjectName(QString::fromUtf8("text_result"));
        text_result->setGeometry(QRect(120, 20, 301, 101));
        text_result->setStyleSheet(QString::fromUtf8(""));
        text_result->setReadOnly(true);
        b_savetofile = new QPushButton(result);
        b_savetofile->setObjectName(QString::fromUtf8("b_savetofile"));
        b_savetofile->setGeometry(QRect(10, 30, 101, 31));
        b_savetofile->setStyleSheet(QString::fromUtf8(""));
        b_exit = new QPushButton(result);
        b_exit->setObjectName(QString::fromUtf8("b_exit"));
        b_exit->setGeometry(QRect(10, 80, 101, 31));
        b_exit->setStyleSheet(QString::fromUtf8(""));
        source_text = new QGroupBox(SecForm);
        source_text->setObjectName(QString::fromUtf8("source_text"));
        source_text->setGeometry(QRect(10, 0, 431, 191));
        source_text->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        text_source = new QPlainTextEdit(source_text);
        text_source->setObjectName(QString::fromUtf8("text_source"));
        text_source->setGeometry(QRect(120, 20, 301, 161));
        text_source->setStyleSheet(QString::fromUtf8("border-color: black;"));
        b_generate = new QPushButton(source_text);
        b_generate->setObjectName(QString::fromUtf8("b_generate"));
        b_generate->setGeometry(QRect(10, 130, 101, 31));
        b_generate->setStyleSheet(QString::fromUtf8(""));
        b_fromfile = new QPushButton(source_text);
        b_fromfile->setObjectName(QString::fromUtf8("b_fromfile"));
        b_fromfile->setGeometry(QRect(10, 50, 101, 31));
        b_fromfile->setStyleSheet(QString::fromUtf8(""));
        b_clear = new QPushButton(source_text);
        b_clear->setObjectName(QString::fromUtf8("b_clear"));
        b_clear->setGeometry(QRect(10, 90, 101, 31));
        b_clear->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(SecForm);

        QMetaObject::connectSlotsByName(SecForm);
    } // setupUi

    void retranslateUi(QWidget *SecForm)
    {
        SecForm->setWindowTitle(QCoreApplication::translate("SecForm", "SHA-256", nullptr));
        result->setTitle(QCoreApplication::translate("SecForm", "Result", nullptr));
        b_savetofile->setText(QCoreApplication::translate("SecForm", "Save to file", nullptr));
        b_exit->setText(QCoreApplication::translate("SecForm", "Exit", nullptr));
        source_text->setTitle(QCoreApplication::translate("SecForm", "Source text", nullptr));
        b_generate->setText(QCoreApplication::translate("SecForm", "Generate hash", nullptr));
        b_fromfile->setText(QCoreApplication::translate("SecForm", "From file", nullptr));
        b_clear->setText(QCoreApplication::translate("SecForm", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecForm: public Ui_SecForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECFORM_H
