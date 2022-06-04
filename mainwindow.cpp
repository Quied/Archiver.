#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include <QWidget>
#include <QDesktopServices>
#include<QLabel>
#include <QMap>
#include <QTime>
#include <QTimer>
#include <QFile>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QByteArray>
#include <QPushButton>
#include <string>
#include <QFileDialog>
#include <Qurl>
#include <QDebug>
#include<QString>
#include <QVector>
#include <QDir>
#include <QAbstractScrollArea>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);


    // Default Setings on the start up
    ui->pushButton_13->setVisible(false);
    ui->label->setVisible(false);
    ui->label_8->setVisible(false);
    ui->label_9->setVisible(false);
    ui->label_10->setVisible(false);
    ui->label_16->setVisible(false);
    ui->label_13->setVisible(false);
    ui->label_15->setVisible(false);
    ui->label_17->setVisible(false);
    ui->label_12->setVisible(false);
    ui->label_14->setVisible(false);
    ui->label_tx->setVisible(false);
    ui->label_11->setVisible(false);
    ui->verticalSlider->setVisible(false);
    ui->HistoryView->setVisible(false);
    ui->lineEdit_4->setVisible(false);
    ui->pushButton_11->setVisible(false);
    ui->pushButton_9->setVisible(false);
    ui->groupBox_4->setVisible(false);
    ui->lineEdit_2->setVisible(false);
    ui->lineEdit->setText("Compress");
    ui->label_21->setVisible(false);
    ui->radioButton_10->setChecked(true);
    ui->label_22->setVisible(false);
    ui->label_24->setVisible(false);
    ui->lineEdit_3->setVisible(false);

    //----------------------------
    ui->groupBox->setVisible(false);
    ui->groupBox_2->setVisible(false);
    ui->groupBox_3->setVisible(false);
    //--------------------------------
    ui->lineEdit->setVisible(false);
    //-------------------------------
    ui->label_14->setText("0");
    ui->label_15->setText("0");
    ui->label_17->setText("0");
    ui->label_tx->setText(" ");

    ui->verticalSlider->setValue(9);


    QString pic = "pictures/4.jpg";
    ui->Picture->setPixmap(pic);


QString date = QDateTime::currentDateTime().toString("dd.MM.yyyy");
ui->label_9->setText(date);

    tmr = new QTimer();
    tmr->setInterval(1000);
    connect(tmr, SIGNAL(timeout()), this, SLOT(updateTime()));
    tmr->start();
 // ------------------------------------

    setAcceptDrops(true);


}


void MainWindow::ChangeWidgColor(QString &color){
   ui->pushButton->setStyleSheet(color);
   ui->pushButton_2->setStyleSheet(color);
   ui->pushButton_3->setStyleSheet(color);
   ui->pushButton_4->setStyleSheet(color);
   ui->pushButton_5->setStyleSheet(color);
   ui->pushButton_6->setStyleSheet(color);
   ui->groupBox->setStyleSheet(color);
   ui->pushButton_7->setStyleSheet(color);
   ui->pushButton_8->setStyleSheet(color);
   ui->lineEdit->setStyleSheet(color);
   ui->groupBox_2->setStyleSheet(color);
   ui->groupBox_3->setStyleSheet(color);
   ui->groupBox_4->setStyleSheet(color);
   ui->pushButton_9->setStyleSheet(color);
   ui->lineEdit_2->setStyleSheet(color);
   ui->pushButton_10->setStyleSheet(color);
   ui->lineEdit_4->setStyleSheet(color);
   ui->pushButton_11->setStyleSheet(color);
   ui->lineEdit_3->setStyleSheet(color);
   ui->pushButton_12->setStyleSheet(color);
   ui->pushButton_13->setStyleSheet(color);

}

// Text
void MainWindow::ChangeWidgStyle(QString &ColorStyle){

    ui->label_8->setStyleSheet(ColorStyle);
    ui->label_9->setStyleSheet(ColorStyle);
    ui->label_16->setStyleSheet(ColorStyle);
    ui->label_17->setStyleSheet(ColorStyle);
    ui->label_13->setStyleSheet(ColorStyle);
    ui->label_15->setStyleSheet(ColorStyle);
    ui->label_12->setStyleSheet(ColorStyle);
    ui->label_14->setStyleSheet(ColorStyle);
    ui->label_10->setStyleSheet(ColorStyle);
    ui->label_tx->setStyleSheet(ColorStyle);
    ui->label_11->setStyleSheet(ColorStyle);
    ui->label_21->setStyleSheet(ColorStyle);
    ui->label_22->setStyleSheet(ColorStyle);
    ui->label_23->setStyleSheet(ColorStyle);
    ui->groupBox_4->setStyleSheet(ColorStyle);
    ui->groupBox->setStyleSheet(ColorStyle);
    ui->groupBox_2->setStyleSheet(ColorStyle);
    ui->groupBox_3->setStyleSheet(ColorStyle);

}

MainWindow::~MainWindow()
{
    delete ui;
}
    QString namef;
    QString FileExtens = "*.txt";
    QString FileOnOutput = ".txt";
    QString time_comp; // Time compress
    QString ThisPathAfterCompress = QDir::currentPath() + "/Source/";
    QString FileNameAfterUnCompress = "Uncompress";
    QString FileNameAfterCompress;



void MainWindow::updateTime(){

  ui->label_8->setText(QTime::currentTime().toString());
   if(ui->label_8->text() == time_comp){
    ui->label_11->setText("Nope");
    // Here called compress fonc (push button 4)
  }

   // Level of compress
   ui->label->setText(QString::number(ui->verticalSlider->value()));

   FileNameAfterCompress = ui->lineEdit->text();
}



void MainWindow::on_pushButton_clicked()
{
    qDebug() << "Process: Themes";
    if(ui->groupBox->isVisible()) {
    ui->groupBox->setVisible(false);
    }

    else {  ui->groupBox->setVisible(true);  }
}


void MainWindow::on_radioButton_2_clicked()
{
      QString color2 = "* {background-color: qlineargradient(spread:pad, x1:0.481, y1:1, x2:0.464, y2:0.045, stop:0 rgba(174, 229, 235, 0), stop:0.50838 rgba(96, 96, 111, 164), stop:0.938547 rgba(235, 148, 61, 0))}";
      ChangeWidgColor(color2);

      QString ColorStyle = "color: rgb(255, 255, 255);";
      ChangeWidgStyle(ColorStyle);
}


void MainWindow::on_groupBox_clicked(){}


void MainWindow::on_radioButton_clicked()
{
      QString color1 = "* { background-color:   qlineargradient(spread:pad, x1:0.522382, y1:0.955, x2:0.467, y2:0.063, stop:0 rgba(0, 0, 0, 0), stop:0.5 rgba(176, 225, 216, 175), stop:0.994382 rgba(0, 0, 0, 0))}";
      ChangeWidgColor(color1);

      QString ColorStyle = "color: rgb(255, 255, 255);";
      ChangeWidgStyle(ColorStyle);
}


void MainWindow::on_radioButton_3_clicked()
{
    QString color3 = "* { background-color: qlineargradient(spread:pad, x1:0.481, y1:1, x2:0.464, y2:0.045, stop:0 rgba(174, 229, 235, 0), stop:0.50838 rgba(70, 71, 111, 164), stop:0.938547 rgba(235, 148, 61, 0))}";
    ChangeWidgColor(color3);

    QString ColorStyle = "color: rgb(255, 255, 255);";
    ChangeWidgStyle(ColorStyle);
}


void MainWindow::on_radioButton_4_clicked()
{
     QString color4 = "* { background-color: qlineargradient(spread:pad, x1:0.481, y1:1, x2:0.464, y2:0.045, stop:0 rgba(106, 227, 241, 0), stop:0.50838 rgba(68, 228, 255, 207), stop:0.938547 rgba(235, 148, 61, 0))}";
     ChangeWidgColor(color4);

     QString ColorStyle = "color: rgb(255, 255, 255);";
     ChangeWidgStyle(ColorStyle);
}


void MainWindow::on_radioButton_5_clicked()
{
     QString color5 = "* { background-color: qlineargradient(spread:pad, x1:0.481, y1:1, x2:0.464, y2:0.045, stop:0 rgba(106, 227, 241, 0), stop:0.50838 rgba(151, 91, 255, 134), stop:0.938547 rgba(235, 148, 61, 0))}";
     ChangeWidgColor(color5);

     QString ColorStyle = "color: rgb(255, 255, 255);";
     ChangeWidgStyle(ColorStyle);
}


void MainWindow::on_radioButton_6_clicked()
{
    QString color6 = "* { background-color:  qlineargradient(spread:pad, x1:0.478, y1:1, x2:0.489112, y2:0, stop:0 rgba(225, 66, 205, 11), stop:0.488764 rgba(4, 61, 69, 188), stop:1 rgba(50, 81, 76, 66))}";
    ChangeWidgColor(color6);

      QString ColorStyle = "color: rgb(255, 255, 255);";
      ChangeWidgStyle(ColorStyle);
}


void MainWindow::on_pushButton_3_clicked()
{
    qDebug() << "Opening the Browser...";
     QDesktopServices::openUrl(QUrl("https://t.me/onlyinc", QUrl::TolerantMode));
}



void MainWindow::on_pushButton_2_clicked()
{
    qDebug() << "Opening the explorer";
    QString name = QFileDialog::getOpenFileName(0, "Select file", "", FileExtens);
    ui->label_tx->setText(name);
    ui->label_7->setText(" ");
    namef = name;


}


void MainWindow::on_pushButton_4_clicked()
{

    qDebug() << ThisPathAfterCompress;
    qDebug() << QDir::currentPath();

    if(ui->label_tx->text() == " "){
     ui->checkBox_5->setChecked(true);
     ui->label_10->setVisible(true);
     ui->label_tx->setVisible(true);
    ui->label_tx->setText("Choise file");
    }

    else{

    qDebug() << "Process: Compress";
    QMap<char,int>mp; // For amount of symbols

    QFile filed(namef); // Create file
    qDebug() << namef; // show in console name

    // Add at Text Browser
    ui->HistoryView->append(namef + " [" + ui->label_8->text() + "] " + "[" + ui->label_9->text() + "]" ); // add to History

    // Write to file history logs
  //  QFile Logs("HistoryLogs.txt");



    QString str_st; // amount of words
    qint64 am_str = 0;

    qint64 size = 0;

    if ((filed.exists())&&(filed.open(QIODevice::ReadOnly))) // Read file
    {

    while(!filed.atEnd()){ // Amount of symbols
       QByteArray tmp;
       tmp = filed.readLine();
       size += tmp.size();

}
       QTextStream in(&filed);
       while (!in.atEnd()) {
           in >> str_st;
           qDebug() << str_st;
           am_str++;
    }


}
    qDebug() << "Size: " << size;
    QString dat = " Mb";

    float sizefile; // amount mb file

    if(size >= 1000000){
    sizefile = size / 1000000;
    dat = " Mb";
    }

    if(size >= 1000 && size <= 1000000){
    sizefile = size / 1000;
    dat = " Kb";
    }

    if(size < 1000){
     sizefile = size / 1000;
    dat = " Byte";
    }

    QString sizefi = QString::number(sizefile); // float to string
    ui->label_15->setText(sizefi + dat);

    QString s = QString::number(size); // int to string
    ui->label_14->setText(s); // set text


    // --------- Output

    float outp = size / 224;
    QString outp_str; // type date
    QString outpp = QString::number(outp); // int to string

if  (outp >= 1000000){ outp_str = "Mb"; }
if (outp >= 1000 && outp < 1000000){  outp_str = "Kb"; }
if(outp < 1000){  outp_str = "Byte"; }

ui->label_17->setText("Somewhere: " + outpp + " " + outp_str);

QFile fi(namef);
QFile fo(ThisPathAfterCompress + FileNameAfterCompress + ".cm");// Make file after compress

if(fi.open(QFile::ReadOnly) && fo.open(QFile::WriteOnly)){
    fo.write(qCompress(fi.readAll(), ui->verticalSlider->value()));

    fi.close();
    fo.close();
}

} // button

} // else



void MainWindow::on_pushButton_7_clicked()
{
    if(ui->groupBox_2->isVisible() && ui->groupBox_3->isVisible()){
    ui->groupBox_2->setVisible(false);
    ui->groupBox_3->setVisible(false);
    ui->checkBox_2->setChecked(false);
    }
    else{
    if (ui->groupBox_2->isVisible()) {
    ui->groupBox_2->setVisible(false);
    }

    else {   ui->groupBox_2->setVisible(true);  }
}


qDebug() << "Process: Additionally";

}


void MainWindow::on_checkBox_clicked()
{
    if(ui->label_8->isVisible()){  ui->label_8->setVisible(false); }
    else{ ui->label_8->setVisible(true); }
}


void MainWindow::on_checkBox_4_clicked()
{
    if(ui->label_9->isVisible()){  ui->label_9->setVisible(false); }
    else{ ui->label_9->setVisible(true); }
}


void MainWindow::on_checkBox_2_clicked()
{
    if(ui->checkBox_2->isChecked() && ui->groupBox_2->isVisible()){
        ui->groupBox_3->setVisible(true);
    }
    else{ ui->groupBox_3->setVisible(false); }
}


void MainWindow::on_checkBox_3_clicked()
{
    if(ui->lineEdit->isVisible()){
    ui->lineEdit->setVisible(false);
    ui->label_21->setVisible(false);
    }
    else{
    ui->lineEdit->setVisible(true);
    ui->label_21->setVisible(true);
    }
}


void MainWindow::on_checkBox_5_clicked()
{
    if(ui->label_10->isVisible()){
    ui->label_10->setVisible(false);
      ui->label_tx->setVisible(false);
    }
    else{
    ui->label_10->setVisible(true);
      ui->label_tx->setVisible(true);
    }
}


void MainWindow::on_checkBox_7_clicked()
{
    if(ui->label_24->isVisible()){
    ui->label_24->setVisible(false);
    ui->lineEdit_3->setVisible(false);
    }
    else{
        ui->label_24->setVisible(true);
        ui->lineEdit_3->setVisible(true);
    }
}


void MainWindow::on_checkBox_6_clicked()
{
    if(ui->label_13->isVisible()){
ui->label_13->setVisible(false);
ui->label_15->setVisible(false);
    }
    else{
ui->label_13->setVisible(true);
ui->label_15->setVisible(true);
    }
}


void MainWindow::on_checkBox_8_clicked()
{
    if(ui->label_12->isVisible()){ // text
    ui->label_12->setVisible(false);
    ui->label_14->setVisible(false);
    }
    else{
    ui->label_12->setVisible(true);
    ui->label_14->setVisible(true);
    }
}


void MainWindow::on_pushButton_5_clicked()
{

    if(ui->HistoryView->isVisible()){
        ui->HistoryView->setVisible(false);
        ui->pushButton_13->setVisible(false);
    }
    else{
        ui->HistoryView->setVisible(true);
        ui->pushButton_13->setVisible(true); }


    qDebug() << "Process: History";
}


void MainWindow::on_checkBox_9_clicked()
{
    if(ui->label_16->isVisible()){
    ui->label_16->setVisible(false);
    ui->label_17->setVisible(false);
    }
    else{
    ui->label_16->setVisible(true);
    ui->label_17->setVisible(true);
    }
}


void MainWindow::on_radioButton_7_clicked()
{
    QString color18 = "background-color: qlineargradient(spread:pad, x1:0.522382, y1:0.955, x2:0.467, y2:0.063, stop:0 rgba(0, 0, 0, 0), stop:0.5 rgba(255, 5, 73, 170), stop:0.994382 rgba(0, 0, 0, 0))";
    ChangeWidgColor(color18);

    QString ColorStyle = "color: rgb(255, 255, 255);";
    ChangeWidgStyle(ColorStyle);
}


// File Unzip
void MainWindow::on_pushButton_6_clicked()
{

    // Select .cm file
    QString name_unz = QFileDialog::getOpenFileName(0, "Select file", "", "*.cm");

    // File read
    QFile fille(name_unz);
    if(!fille.open(QIODevice::ReadOnly))
        return;

      QByteArray compressed = fille.readAll();
      qDebug() << "Compresed=" << compressed.size();

      QByteArray unkom = qUncompress(compressed);
      qDebug() << "UnCompresed=" << unkom.size();

     // Unzip in this place
     QFile unk("D:/Neptuns" + FileNameAfterUnCompress + FileOnOutput);
     unk.open(QIODevice::WriteOnly);
     unk.write(unkom);
     unk.close();


    fille.remove();
}


void MainWindow::on_pushButton_8_clicked()
{
    qDebug() << "Procces: Time Compress";
    ui->lineEdit_2->setText(QTime::currentTime().toString());

    if(ui->label_11->isVisible()){
    ui->label_11->setVisible(false);
    ui->pushButton_9->setVisible(false);
    ui->lineEdit_2->setVisible(false);
    }
    else{
        ui->label_11->setVisible(true);
        ui->pushButton_9->setVisible(true);
        ui->lineEdit_2->setVisible(true);
    }
}


void MainWindow::on_radioButton_8_clicked()
{
        QString color18 = "background-color: qlineargradient(spread:pad, x1:0.522382, y1:0.955, x2:0.467, y2:0.063, stop:0 rgba(0, 0, 0, 0), stop:0.5 rgba(0, 159, 255, 170), stop:0.994382 rgba(0, 0, 0, 0));";
        ChangeWidgColor(color18);

        QString ColorStyle = "color: rgb(255, 255, 255);";
        ChangeWidgStyle(ColorStyle);
}


void MainWindow::on_radioButton_9_clicked()
{
    QString color18 = "background-color: qlineargradient(spread:pad, x1:0.481, y1:1, x2:0.464, y2:0.045, stop:0 rgba(106, 227, 241, 0), stop:0.938547 rgba(235, 148, 61, 0));";
    ChangeWidgColor(color18);

    QString ColorStyle = "color: rgb(0, 0, 0);";
    ChangeWidgStyle(ColorStyle);
}

// Symbols
void MainWindow::on_checkBox_8_stateChanged(int arg1){}

void MainWindow::on_pushButton_9_clicked(){ time_comp = ui->lineEdit_2->text(); }

void MainWindow::on_pushButton_10_clicked()
{
    qDebug() << "File Extension";
    if(ui->groupBox_4->isVisible()){
        ui->groupBox_4->setVisible(false);
        ui->label_22->setVisible(false);
        ui->label_23->setVisible(true);
     }else{
    ui->groupBox_4->setVisible(true);
    ui->label_22->setVisible(true);
    ui->label_23->setVisible(false);
    }
}

void MainWindow::on_radioButton_10_clicked()
{
    ui->label_22->setText(".txt");
    ui->label_23->setText(".txt");
    FileExtens = "*.txt";
    FileOnOutput = ".txt";
}


void MainWindow::on_radioButton_11_clicked()
{
    ui->label_22->setText(".mp3");
     ui->label_23->setText(".mp3");
     FileExtens = "*.mp3";
     FileOnOutput = ".mp3";
}


void MainWindow::on_radioButton_13_clicked()
{
    ui->label_22->setText(".png");
     ui->label_23->setText(".png");
     FileExtens = "*.png";
     FileOnOutput = ".png";
}


void MainWindow::on_radioButton_14_clicked()
{
    ui->label_22->setText(".jpeg");
     ui->label_23->setText(".jpeg");
}


void MainWindow::on_radioButton_12_clicked()
{
    ui->label_22->setText(".mp4");
     ui->label_23->setText(".mp4");
     FileExtens = "*.mp4";
     FileOnOutput = ".mp4";
}


void MainWindow::on_radioButton_15_clicked()
{
    ui->label_22->setText(".jpg");
     ui->label_23->setText(".jpg");
     FileExtens = "*.jpg";
     FileOnOutput = ".jpg";
}


void MainWindow::on_checkBox_10_clicked()
{
    QDir().mkdir("D:/Neptuns");
}


void MainWindow::on_checkBox_10_stateChanged(int arg1)
{
    if(ui->lineEdit_4->isVisible()){
        ui->lineEdit_4->setVisible(false);
        ui->pushButton_11->setVisible(false);
    }
    else{
        ui->lineEdit_4->setVisible(true);
        ui->pushButton_11->setVisible(true);
    }
}


void MainWindow::on_pushButton_12_clicked()
{
    if( ui->verticalSlider->isVisible()){
        ui->verticalSlider->setVisible(false);
        ui->label->setVisible(false);
    }
    else{
       ui->verticalSlider->setVisible(true);
        ui->label->setVisible(true);
    }
}


void MainWindow::on_pushButton_13_clicked()
{
    ui->HistoryView->clear();
}


void MainWindow::on_pushButton_11_clicked()
{
    ThisPathAfterCompress = ui->lineEdit_4->text();

    for(int i = 0; i < ThisPathAfterCompress.size(); i++){
        if(ThisPathAfterCompress[i] == '\\'){
            ThisPathAfterCompress[i] = '/';
        }
    }
    ThisPathAfterCompress += "/";

}

