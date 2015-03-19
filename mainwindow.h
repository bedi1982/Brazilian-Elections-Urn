#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btn_00_clicked();
    void on_btn_11_clicked();
    void on_btn_22_clicked();
    void on_btn_33_clicked();
    void on_btn_44_clicked();
    void on_btn_55_clicked();
    void on_btn_66_clicked();
    void on_btn_77_clicked();
    void on_btn_88_clicked();
    void on_btn_99_clicked();

    void on_btn_confirma_clicked();
    void setPresident();
    void on_btn_corrige_clicked();
    void set_number(int n1);
    void block_buttons(bool set);

    void on_radioButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
