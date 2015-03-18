#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_33_clicked()
{
        if(true){
                ui->lbl_numero1_president->setText("3");
        }else{
                ui->lbl_numero2_president->setText("3");
        }
}

void MainWindow::on_btn_44_clicked()
{
    ui->lbl_numero1_president->setText("4");
}

void MainWindow::on_btn_55_clicked()
{
    ui->lbl_numero1_president->setText("5");
}

void MainWindow::on_btn_confirma_clicked()
{
    QPixmap foto(":/images/dilma.jpg");
    ui->lbl_foto_presidente->setPixmap(foto);
    ui->lbl_foto_presidente->setPixmap(foto);
    ui->lbl_nome_presidente->setText("Dilma");
    ui->lbl_nome_partido->setText("PT");
    ui->lbl_numero1_president->setText("1");
    ui->lbl_numero2_president->setText("3");
}

void MainWindow::on_btn_corrige_clicked()
{
    QPixmap foto(":/images/aecio.jpg");
    ui->lbl_foto_presidente->setPixmap(foto);
    ui->lbl_foto_presidente->setPixmap(foto);
    ui->lbl_nome_presidente->setText("Aecio");
    ui->lbl_nome_partido->setText("PSDB");
    ui->lbl_numero1_president->setText("4");
    ui->lbl_numero2_president->setText("5");
}

void MainWindow::setPresident(int num)
{
    if( num = 45){
        QPixmap foto(":/images/aecio.jpg");

    }

    if(num = 13){
        QPixmap foto(":/images/dilma.jpg");

    }
}

int check_position(int a){
    if(a = 0){
        return 0;
    }
    return 1;
}
