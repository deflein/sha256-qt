/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame_2;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QFrame *frame_3;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QLabel *label_9;
    QLabel *label_17;
    QWidget *tab;
    QFrame *frame;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLabel *label_username;
    QLabel *label_pass;
    QPushButton *pushButton_login;
    QLabel *label_3;
    QLabel *label_result;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(406, 409);
        MainWindow->setStyleSheet(QString::fromUtf8("*{\n"
"}\n"
"\n"
"QFrame\n"
"{\n"
"background: white;\n"
"border-radius: 1px;\n"
"}\n"
"\n"
"#frame_2\n"
"{\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"border:none ;\n"
"color: black;\n"
"border-bottom: 1px solid orange;\n"
"\n"
"background: transparent;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"font-size: 13px;\n"
"color:  black;\n"
"}\n"
"\n"
"#label_3\n"
"{\n"
"font-size: 20px;\n"
"color: #256aff;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"border-radius: 1px;\n"
"font-size: 16px;\n"
"font-color: white;\n"
"}\n"
"\n"
"\n"
"QTabBar::tab \n"
"{\n"
"	background-color: white;\n"
"	border-top-left-radius: 0px;\n"
"	border-top-right-radius: 0px;\n"
"\n"
"	min-width: 8ex;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
" {\n"
"	color: white;\n"
"	background-color: black;\n"
"}\n"
"\n"
"QTabBar::tab:!selected\n"
" {\n"
"	margin-top: 0px;\n"
"	background: #c6c6c6;\n"
"	color: black\n"
"}\n"
"\n"
"QTabWidget::tab-bar \n"
"{\n"
"    alignment: center;\n"
"}\n"
"#label_7\n"
"{\n"
"font-size: 20px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(-10, -10, 430, 430));
        frame_2->setStyleSheet(QString::fromUtf8(""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        tabWidget = new QTabWidget(frame_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(50, 40, 321, 331));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        frame_3 = new QFrame(tab_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 321, 301));
        frame_3->setStyleSheet(QString::fromUtf8(""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        lineEdit_3 = new QLineEdit(frame_3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(50, 120, 221, 22));
        lineEdit_3->setEchoMode(QLineEdit::Password);
        lineEdit_4 = new QLineEdit(frame_3);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(50, 70, 221, 22));
        lineEdit_4->setStyleSheet(QString::fromUtf8(""));
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 50, 211, 16));
        QFont font;
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8(""));
        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 100, 211, 16));
        label_6->setFont(font);
        pushButton_2 = new QPushButton(frame_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 212, 261, 41));
        QFont font1;
        font1.setBold(false);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("background:  orange;\n"
"color: white;"));
        pushButton_2->setCheckable(true);
        pushButton_2->setFlat(false);
        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 10, 321, 31));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: black;\n"
""));
        label_7->setAlignment(Qt::AlignCenter);
        lineEdit_5 = new QLineEdit(frame_3);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(50, 168, 221, 22));
        lineEdit_5->setEchoMode(QLineEdit::Password);
        label_9 = new QLabel(frame_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(50, 148, 211, 16));
        label_9->setFont(font);
        label_17 = new QLabel(frame_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(0, 269, 321, 31));
        label_17->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        frame = new QFrame(tab);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 321, 301));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(44, 140, 231, 22));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(43, 80, 221, 22));
        lineEdit->setStyleSheet(QString::fromUtf8(""));
        label_username = new QLabel(frame);
        label_username->setObjectName(QString::fromUtf8("label_username"));
        label_username->setGeometry(QRect(43, 60, 101, 16));
        label_username->setFont(font);
        label_username->setStyleSheet(QString::fromUtf8(""));
        label_pass = new QLabel(frame);
        label_pass->setObjectName(QString::fromUtf8("label_pass"));
        label_pass->setGeometry(QRect(45, 120, 101, 16));
        label_pass->setFont(font);
        pushButton_login = new QPushButton(frame);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setGeometry(QRect(30, 193, 261, 41));
        pushButton_login->setFont(font1);
        pushButton_login->setStyleSheet(QString::fromUtf8("background:  orange;\n"
"color: white;"));
        pushButton_login->setCheckable(true);
        pushButton_login->setFlat(false);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 10, 321, 31));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: black;"));
        label_3->setAlignment(Qt::AlignCenter);
        label_result = new QLabel(frame);
        label_result->setObjectName(QString::fromUtf8("label_result"));
        label_result->setGeometry(QRect(0, 250, 321, 31));
        label_result->setStyleSheet(QString::fromUtf8("color: orange;"));
        label_result->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Login", nullptr));
        lineEdit_3->setText(QString());
        lineEdit_3->setPlaceholderText(QString());
        lineEdit_4->setText(QString());
        lineEdit_4->setPlaceholderText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Enter username:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Enter password:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        lineEdit_5->setText(QString());
        lineEdit_5->setPlaceholderText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "Repeat password:", nullptr));
        label_17->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Register", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QString());
        label_username->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        label_pass->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        pushButton_login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_result->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
