#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

bool s1, s2 = false;
int n1,n2 = 0;
int count = 0;

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_confirma_clicked()
{
    count++;
    s1 = false;
    s2 = false;
    block_buttons(true);
    ui->btn_confirma->setDisabled(true);
    ui->btn_branco->setDisabled(true);
    ui->btn_corrige->setDisabled(true);
    ui->radioButton->setChecked(true);

    setPresident();
    if(n1 == 1 && n2 == 3 ){
        ui->lbl_log->setText("Voto em Dilma registrado na EPROM.");
    }else{
        if(n1 == 5 && n2 == 1 ){
            ui->lbl_log->setText("Voto em Molusco registrado na EPROM.");
        }else{
            if(count % 2 == 0){
                ui->lbl_log->setText("Voto em Dilma registrado na EPROM.");
            }else{
                ui->lbl_log->setText("Voto em Aecio registrado na EPROM.");
            }
        }
    }
}


void MainWindow::on_btn_corrige_clicked()
{
    //QPixmap foto(":/images/aecio.jpg");
    ui->lbl_foto_presidente->setText(" ");
    ui->lbl_lula_penquin->setText(" ");
    ui->lbl_nome_presidente->setText("");
    ui->lbl_nome_partido->setText("");
    ui->lbl_numero1_president->setText("");
    ui->lbl_numero2_president->setText("");

    s1 = false;
    s2 = false;
    block_buttons(false);
}

void MainWindow::setPresident()
{
    if(n1 == 4 && n2 == 5){
        QPixmap foto(":/images/aecio.jpg");
        ui->lbl_foto_presidente->setPixmap(foto);
        ui->lbl_nome_presidente->setText("Aecio");
        ui->lbl_nome_partido->setText("PSDB");
    }

    if(n1 == 1 && n2 == 3){
        QPixmap foto(":/images/dilma.jpg");
        ui->lbl_foto_presidente->setPixmap(foto);
        ui->lbl_nome_presidente->setText("Dilma");
        ui->lbl_nome_partido->setText("PT");
    }

    if(n1 ==5 && n2 == 1){
        QPixmap foto(":/images/lula.jpg");
        ui->lbl_foto_presidente->setPixmap(foto);
        ui->lbl_nome_presidente->setText("Lula");
        ui->lbl_nome_partido->setText("PT");
        QPixmap foto2(":/images/pic_cachaca51.png");
        ui->lbl_lula_penquin->setPixmap(foto2);
    }
}

void MainWindow::set_number(int numero){
    if(s1 == false){
        ui->lbl_numero1_president->setText(QString::number(numero));
        n1 = numero;
        s1 = true;

        if(s1 == true && s2 == true){
            block_buttons(true);
        }
        return;
    }
    if(s2 == false){
        ui->lbl_numero2_president->setText(QString::number(numero));
        n2 = numero;
        s2 = true;

        if(s1 == true && s2 == true){
            block_buttons(true);
        }
        return;
    }
}

void MainWindow::block_buttons(bool set){
    ui->btn_00->setDisabled(set);
    ui->btn_11->setDisabled(set);
    ui->btn_22->setDisabled(set);
    ui->btn_33->setDisabled(set);
    ui->btn_44->setDisabled(set);
    ui->btn_55->setDisabled(set);
    ui->btn_66->setDisabled(set);
    ui->btn_77->setDisabled(set);
    ui->btn_88->setDisabled(set);
    ui->btn_99->setDisabled(set);
}

void MainWindow::on_btn_00_clicked()
{
    set_number(0);
    if(s1 == true && s2 == true){
        setPresident();
    }
}

void MainWindow::on_btn_11_clicked()
{
    set_number(1);
    if(s1 == true && s2 == true){
        setPresident();
    }
}

void MainWindow::on_btn_22_clicked()
{
    set_number(3);
    if(s1 == true && s2 == true){
        setPresident();
    }
}

void MainWindow::on_btn_33_clicked()
{
    set_number(3);
    if(s1 == true && s2 == true){
        setPresident();
    }
}

void MainWindow::on_btn_44_clicked()
{
    set_number(4);
    if(s1 == true && s2 == true){
        setPresident();
    }
}

void MainWindow::on_btn_55_clicked()
{
    set_number(5);
    if(s1 == true && s2 == true){
        setPresident();
    }
}

void MainWindow::on_btn_66_clicked()
{
    set_number(6);
    if(s1 == true && s2 == true){
        setPresident();
    }
}

void MainWindow::on_btn_77_clicked()
{
    set_number(7);
    if(s1 == true && s2 == true){
        setPresident();
    }
}

void MainWindow::on_btn_88_clicked()
{
    set_number(8);
    if(s1 == true && s2 == true){
        setPresident();
    }
}

void MainWindow::on_btn_99_clicked()
{
    set_number(9);
    if(s1 == true && s2 == true){
        setPresident();
    }
}

void MainWindow::on_radioButton_clicked()
{
    ui->btn_confirma->setDisabled(false);
    ui->btn_branco->setDisabled(false);
    ui->btn_corrige->setDisabled(false);


    ui->lbl_foto_presidente->setText(" ");
    ui->lbl_lula_penquin->setText(" ");
    ui->lbl_nome_presidente->setText("");
    ui->lbl_nome_partido->setText("");
    ui->lbl_numero1_president->setText("");
    ui->lbl_numero2_president->setText("");
    ui->lbl_log->setText("");

    s1 = false;
    s2 = false;
    block_buttons(false);

}
