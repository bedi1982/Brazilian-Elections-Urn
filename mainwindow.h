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
    void on_btn_0_clicked();
    void on_btn_1_clicked();
    void on_btn_2_clicked();
    void on_btn_3_clicked();
    void on_btn_4_clicked();
    void on_btn_5_clicked();
    void on_btn_6_clicked();
    void on_btn_7_clicked();
    void on_btn_8_clicked();
    void on_btn_9_clicked();

    void on_btn_confirma_clicked();
    void setPresidentImage(int PresidentID);
    void on_btn_corrige_clicked();
    void set_number(int n1);
    void block_buttons(bool set);

    void on_radioButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
