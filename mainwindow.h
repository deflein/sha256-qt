#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "secform.h"

#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QCryptographicHash>
#include <QMainWindow>
#include <QDebug>

QT_BEGIN_NAMESPACE namespace Ui {class MainWindow;} QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_login_clicked();

private:
    Ui::MainWindow * ui;
    SecForm * secform;
    QSqlQuery *query;
    QSqlDatabase db;
};

#endif // MAINWINDOW_H
