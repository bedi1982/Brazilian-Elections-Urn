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
    void on_btn_55_clicked();
    void on_btn_44_clicked();
    void on_btn_33_clicked();

    void on_btn_confirma_clicked();

    void setPresident(int num);


    void on_btn_corrige_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
