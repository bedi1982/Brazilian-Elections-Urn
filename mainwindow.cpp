#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "QVector"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

bool s1, s2 = false;
int n1,n2 = 0;
int count = 0;
QVector<int> vector(2);

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_confirma_clicked()
{
    vector[0] = 100;
    vector[1] = 200;

    qDebug() << vector[0] << vector[1];


    count++;
    s1 = false;
    s2 = false;
    block_buttons(true);
    ui->btn_confirma->setDisabled(true);
    ui->btn_branco->setDisabled(true);
    ui->btn_corrige->setDisabled(true);
    ui->radioButton->setChecked(true);

    if(n1 == 1 && n2 == 3 ){
            ui->lbl_log->setText("Voto em Fora-Dilma e Ficalo-ei Temer!! registrado na EPROM.");
            setPresidentImage(2);
    }

    if(n1 == 5 && n2 == 1 ){
            ui->lbl_log->setText("Voto em Molusco registrado na EPROM.");
            setPresidentImage(3);
    }

    if(n1 == 4 && n2 == 5 ){
            ui->lbl_log->setText("Voto em Aécio registrado na EPROM.");
            setPresidentImage(1);
    }

    if(n1 != 1 || n1 !=5 || n1 != 4){
        ui->lbl_numero1_president->setText("");
        ui->lbl_numero2_president->setText("");
        ui->lbl_log->setText("Voto NULO registrado!");
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

void MainWindow::setPresidentImage(int PresidentID)
{
    if(PresidentID == 1){
        QPixmap foto(":/images/aecio.jpg");
        ui->lbl_foto_presidente->setPixmap(foto);
        ui->lbl_nome_presidente->setText("Aecio");
        ui->lbl_nome_partido->setText("PSDB");
    }

    if(PresidentID == 2){
        QPixmap foto(":/images/dilma.jpg");
        ui->lbl_foto_presidente->setPixmap(foto);
        ui->lbl_nome_presidente->setText("Dilma");
        ui->lbl_nome_partido->setText("PT");
    }

    if(PresidentID == 3){
        QPixmap foto(":/images/lula.jpg");
        ui->lbl_foto_presidente->setPixmap(foto);
        ui->lbl_nome_presidente->setText("Lula");
        ui->lbl_nome_partido->setText("PT");
        QPixmap foto2(":/images/pic_cachaca51.png");
        ui->lbl_lula_penquin->setPixmap(foto2);
    }

    if(PresidentID == 0){
        ui->lbl_log->setText("Candidato Inexistente. Confirma para votar NULO");
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
    ui->btn_0->setDisabled(set);
    ui->btn_1->setDisabled(set);
    ui->btn_2->setDisabled(set);
    ui->btn_3->setDisabled(set);
    ui->btn_4->setDisabled(set);
    ui->btn_5->setDisabled(set);
    ui->btn_6->setDisabled(set);
    ui->btn_7->setDisabled(set);
    ui->btn_8->setDisabled(set);
    ui->btn_9->setDisabled(set);
}

void MainWindow::on_btn_0_clicked()
{
    set_number(0);
    if(s1 == true && s2 == true){
        setPresidentImage(0);
    }
}

void MainWindow::on_btn_1_clicked()
{
    set_number(1);
    if(s1 == true && s2 == true){
        setPresidentImage(0);
    }
}

void MainWindow::on_btn_2_clicked()
{
    set_number(3);
    if(s1 == true && s2 == true){
        setPresidentImage(0);
    }
}

void MainWindow::on_btn_3_clicked()
{
    set_number(3);
    if(s1 == true && s2 == true){
        setPresidentImage(0);
    }
}

void MainWindow::on_btn_4_clicked()
{
    set_number(4);
    if(s1 == true && s2 == true){
        setPresidentImage(0);
    }
}

void MainWindow::on_btn_5_clicked()
{
    set_number(5);
    if(s1 == true && s2 == true){
        setPresidentImage(0);
    }
}

void MainWindow::on_btn_6_clicked()
{
    set_number(6);
    if(s1 == true && s2 == true){
        setPresidentImage(0);
    }
}

void MainWindow::on_btn_7_clicked()
{
    set_number(7);
    if(s1 == true && s2 == true){
        setPresidentImage(0);
    }
}

void MainWindow::on_btn_8_clicked()
{
    set_number(8);
    if(s1 == true && s2 == true){
        setPresidentImage(0);
    }
}

void MainWindow::on_btn_9_clicked()
{
    set_number(9);
    if(s1 == true && s2 == true){
        setPresidentImage(0);
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
