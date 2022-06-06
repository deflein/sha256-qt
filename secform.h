#ifndef SECFORM_H
#define SECFORM_H

#include <QWidget>

namespace Ui {
class SecForm;
}

class SecForm : public QWidget
{
    Q_OBJECT

public:
    explicit SecForm(QWidget *parent = nullptr);
    ~SecForm();

private slots:
    void on_b_generate_clicked();
    void on_b_clear_clicked();
    void on_b_fromfile_clicked();
    void on_b_fromfile_3_clicked();
    void on_b_savetofile_clicked();
    void on_b_exit_clicked();

private:
    Ui::SecForm *ui;
};

#endif // SECFORM_H
