#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Add DB-driver and set database name
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./database.db");

    qDebug() << "> Connect to course.db SQLite database.";

    if(db.open())
    {
        qDebug() << "> Connection to database complete.";
    }

    q    QSqlQuery(db);

    qDebug() << "> Initialize SqlQuery stream.";

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    QString username   = ui->lineEdit_4->text();
    QString password   = ui->lineEdit_3->text();
    QString repassword = ui->lineEdit_5->text();

    qDebug() << "> Match register button signal.";
    QString username_digest = QString(QCryptographicHash::hash(username.toUtf8(),QCryptographicHash::Md5).toHex());
    QString password_digest = QString(QCryptographicHash::hash(password.toUtf8(),QCryptographicHash::Md5).toHex());



    if (repassword != password)
    {
        qDebug() << "> Invalid password, again...";
        ui->label_17->setText("Invalid password. Try again.");

        ui->lineEdit_3->clear();
        ui->lineEdit_5->clear();

    }

    if (repassword == password)
    {
        qDebug() << "> Valid passwords.";

        if(query->exec("SELECT * FROM USERS WHERE username='"+username_digest+"'"))
        {
            qDebug() << "> Connect to database...";

            int account_counter = 0;

            while(query->next())
            {
                account_counter++;
            }

            qDebug() << "> Number of login matches" << account_counter << ".";

            if (account_counter == 0)
            {
                qDebug() << "> Insert username/password row to database.";
                qDebug() << "INSERT INTO USERS (username, password) VALUES ('"+username_digest+"','"+password_digest+"')";
                query->exec("INSERT INTO USERS (username, password) VALUES ('"+username_digest+"','"+password_digest+"')");
                ui->label_17->setText("Account sucessfully created!");
            }

            else
            {
                qDebug() << "Username unavailable.";
                ui->label_17->setText("Username unavailable.");
            }
        }
    }
}


void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    QString username_digest = QString(QCryptographicHash::hash(username.toUtf8(),QCryptographicHash::Md5).toHex());
    QString password_digest = QString(QCryptographicHash::hash(password.toUtf8(),QCryptographicHash::Md5).toHex());

    //query init in MainWindow constructor
    if(query->exec("SELECT * FROM USERS WHERE username='"+username_digest+"'AND password='"+password_digest+"'"))
    {
        int account_counter = 0;
        while(query->next())
        {
            account_counter++;
        }

        if (account_counter == 1)
        {
            ui->label_result->setText("Username and password is correct.");
            secform = new SecForm();
            secform->show();
            hide();
        }
        else
        {
            ui->label_result->setText("Username or password not correct.");
        }
    }
}

