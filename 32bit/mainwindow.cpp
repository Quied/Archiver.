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
#include <QCharRef>
#include <QDropEvent>
#include <QByteArray>
#include <QPushButton>
#include <string>
#include <QFileDialog>
#include <Qurl>
#include <QDebug>
#include<QString>
#include <QVector>
#include <QAbstractScrollArea>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    const QString poc = "C:/Users/User/Desktop/build-32bit-Desktop_Qt_5_12_11_MinGW_32_bit-Release/pictures/9.jpg";
     const QString poc1 = "C:/Users/User/Desktop/build-32bit-Desktop_Qt_5_12_11_MinGW_32_bit-Release/pictures/8.jpg";
      const QString poc2 = "C:/Users/User/Desktop/build-32bit-Desktop_Qt_5_12_11_MinGW_32_bit-Release/pictures/1.jpg";
       const QString poc3 = "C:/Users/User/Desktop/build-32bit-Desktop_Qt_5_12_11_MinGW_32_bit-Release/pictures/7.jpg";
        const QString poc4 = "C:/Users/User/Desktop/build-32bit-Desktop_Qt_5_12_11_MinGW_32_bit-Release/pictures/4.jpg";
         const QString poc5 = "C:/Users/User/Desktop/build-32bit-Desktop_Qt_5_12_11_MinGW_32_bit-Release/pictures/5.jpg";
          const QString poc6 = "C:/Users/User/Desktop/build-32bit-Desktop_Qt_5_12_11_MinGW_32_bit-Release/pictures/2.jpg";
           const QString poc7 = "C:/Users/User/Desktop/build-32bit-Desktop_Qt_5_12_11_MinGW_32_bit-Release/pictures/0.jpg";
            const QString poc8 = "C:/Users/User/Desktop/build-32bit-Desktop_Qt_5_12_11_MinGW_32_bit-Release/pictures/6.jpg";
             const QString poc9 = "C:/Users/User/Desktop/build-32bit-Desktop_Qt_5_12_11_MinGW_32_bit-Release/pictures/9.jpg";

    ui->setupUi(this);
    //-------------------------
    ui->label->setVisible(true);
    ui->label_2->setVisible(false);
    ui->label_3->setVisible(false);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);
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
      ui->label_18->setVisible(false);
        ui->label_19->setVisible(false);
          ui->label_20->setVisible(false);
          ui->label_11->setVisible(false);
          ui->pushButton_9->setVisible(false);
          ui->groupBox_4->setVisible(false);
          ui->lineEdit_2->setVisible(false);
          ui->lineEdit->setText("Compress");
          ui->label_21->setVisible(false);
          ui->radioButton_10->setChecked(true);
          ui->label_22->setVisible(false);
          ui->label_24->setVisible(false);
          ui->lineEdit_3->setVisible(false);

          ui->label_18->setPixmap(poc);
          ui->label_19->setPixmap(poc1);
          ui->label_2->setPixmap(poc2);
          ui->label_20->setPixmap(poc3);
          ui->label_3->setPixmap(poc4);
          ui->label_4->setPixmap(poc5);
          ui->label_5->setPixmap(poc6);
          ui->label_6->setPixmap(poc7);
          ui->label->setPixmap(poc8);

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




QString date = QDateTime::currentDateTime().toString("dd.MM.yyyy");
ui->label_9->setText(date);

    tmr = new QTimer();
    tmr->setInterval(1000);
    connect(tmr, SIGNAL(timeout()), this, SLOT(updateTime()));
    tmr->start();
 // ------------------------------------

    setAcceptDrops(true);


}
QString time_comp; // Time compress


MainWindow::~MainWindow()
{



    delete ui;
}

    QString file_name_unk = "Uncompress"; // qUnk
    QString name_file; // qCom

void MainWindow::updateTime(){

  ui->label_8->setText(QTime::currentTime().toString());
  if(ui->label_8->text() == time_comp){
ui->label_11->setText("Hel");
  }

  name_file = ui->lineEdit->text();




}



void MainWindow::on_pushButton_clicked()
{
    qDebug() << "Process: Themes";
    if(ui->groupBox->isVisible()) {
    ui->groupBox->setVisible(false);
    }

    else {
        ui->groupBox->setVisible(true);
    }

}


void MainWindow::on_radioButton_2_clicked()
{
    QString color2 = "* { background-color:  qlineargradient(spread:pad, x1:0.478, y1:1, x2:0.489112, y2:0, stop:0 rgba(162, 225, 214, 11), stop:0.488764 rgba(213, 75, 127, 166), stop:1 rgba(50, 81, 76, 66))}";
    //-------------------------------
ui->pushButton->setStyleSheet(color2);
ui->pushButton_2->setStyleSheet(color2);
 ui->pushButton_3->setStyleSheet(color2);
   ui->pushButton_4->setStyleSheet(color2);
 ui->pushButton_5->setStyleSheet(color2);
 ui->pushButton_6->setStyleSheet(color2);
ui->groupBox->setStyleSheet(color2);
ui->pushButton_7->setStyleSheet(color2);
ui->pushButton_8->setStyleSheet(color2);
   ui->lineEdit->setStyleSheet(color2);
   ui->groupBox_2->setStyleSheet(color2);
   ui->groupBox_3->setStyleSheet(color2);
   ui->groupBox_4->setStyleSheet(color2);
   ui->pushButton_9->setStyleSheet(color2);
   ui->lineEdit_2->setStyleSheet(color2);
   ui->pushButton_10->setStyleSheet(color2);
//------------------------------------
    ui->label->setVisible(false);
    ui->label_2->setVisible(true);
    ui->label_3->setVisible(false);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);
    ui->label_18->setVisible(false);
     ui->label_19->setVisible(false);
     ui->label_20->setVisible(false);
    //-----------------------------

     QString ColorStyle = "color: rgb(255, 170, 255);";

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


}


void MainWindow::on_groupBox_clicked()
{

}


void MainWindow::on_radioButton_clicked()
{
    QString color1 = "* { background-color:   qlineargradient(spread:pad, x1:0.522382, y1:0.955, x2:0.467, y2:0.063, stop:0 rgba(0, 0, 0, 0), stop:0.5 rgba(176, 225, 216, 175), stop:0.994382 rgba(0, 0, 0, 0))}";
    //-------------------------------
ui->pushButton->setStyleSheet(color1);
ui->pushButton_2->setStyleSheet(color1);
 ui->pushButton_3->setStyleSheet(color1);
   ui->pushButton_4->setStyleSheet(color1);
 ui->pushButton_5->setStyleSheet(color1);
 ui->pushButton_6->setStyleSheet(color1);
ui->groupBox->setStyleSheet(color1);
ui->pushButton_7->setStyleSheet(color1);
ui->pushButton_8->setStyleSheet(color1);
   ui->lineEdit->setStyleSheet(color1);
   ui->groupBox_2->setStyleSheet(color1);
   ui->groupBox_3->setStyleSheet(color1);
   ui->groupBox_4->setStyleSheet(color1);
   ui->pushButton_9->setStyleSheet(color1);
   ui->lineEdit_2->setStyleSheet(color1);
    ui->pushButton_10->setStyleSheet(color1);
//------------------------------------
    ui->label->setVisible(true);
    ui->label_2->setVisible(false);
    ui->label_3->setVisible(false);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);
     ui->label_20->setVisible(false);
     ui->label_18->setVisible(false);
      ui->label_19->setVisible(false);
      // -----------------

      QString ColorStyle = "color: rgb(0, 0, 0);";

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


}


void MainWindow::on_radioButton_3_clicked()
{
    QString color3 = "* { background-color:   qlineargradient(spread:pad, x1:0.478, y1:1, x2:0.489112, y2:0, stop:0 rgba(162, 225, 214, 11), stop:0.488764 rgba(213, 80, 68, 166), stop:1 rgba(50, 81, 76, 66))}";
    ui->pushButton->setStyleSheet(color3);
    ui->pushButton_2->setStyleSheet(color3);
     ui->pushButton_3->setStyleSheet(color3);
       ui->pushButton_4->setStyleSheet(color3);
     ui->pushButton_5->setStyleSheet(color3);
     ui->pushButton_6->setStyleSheet(color3);
    ui->groupBox->setStyleSheet(color3);
    ui->pushButton_7->setStyleSheet(color3);
    ui->pushButton_8->setStyleSheet(color3);
       ui->lineEdit->setStyleSheet(color3);
       ui->groupBox_2->setStyleSheet(color3);
       ui->groupBox_3->setStyleSheet(color3);
       ui->groupBox_4->setStyleSheet(color3);
       ui->pushButton_9->setStyleSheet(color3);
       ui->lineEdit_2->setStyleSheet(color3);
        ui->pushButton_10->setStyleSheet(color3);

    ui->label->setVisible(false);
    ui->label_2->setVisible(false);
    ui->label_3->setVisible(true);
    ui->label_4->setVisible(false);
     ui->label_20->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);
    ui->label_18->setVisible(false);
     ui->label_19->setVisible(false);

     // -----------------------
    QString ColorStyle = "color: rgb(255, 85, 0);";

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


}


void MainWindow::on_radioButton_4_clicked()
{
    QString color4 = "* { background-color: qlineargradient(spread:pad, x1:0.478, y1:1, x2:0.489112, y2:0, stop:0 rgba(218, 225, 66, 11), stop:0.488764 rgba(189, 195, 62, 166), stop:1 rgba(50, 81, 76, 66))}";
    ui->pushButton->setStyleSheet(color4);
    ui->pushButton_2->setStyleSheet(color4);
     ui->pushButton_3->setStyleSheet(color4);
       ui->pushButton_4->setStyleSheet(color4);
     ui->pushButton_5->setStyleSheet(color4);
     ui->pushButton_6->setStyleSheet(color4);
     ui->pushButton_7->setStyleSheet(color4);
     ui->pushButton_8->setStyleSheet(color4);
        ui->lineEdit->setStyleSheet(color4);
    ui->groupBox->setStyleSheet(color4);
    ui->groupBox_2->setStyleSheet(color4);
    ui->groupBox_3->setStyleSheet(color4);
    ui->groupBox_4->setStyleSheet(color4);
    ui->pushButton_9->setStyleSheet(color4);
    ui->lineEdit_2->setStyleSheet(color4);
     ui->pushButton_10->setStyleSheet(color4);

    ui->label->setVisible(false);
    ui->label_2->setVisible(false);
    ui->label_3->setVisible(false);
    ui->label_4->setVisible(true);
    ui->label_5->setVisible(false);
     ui->label_20->setVisible(false);
    ui->label_6->setVisible(false);
    ui->label_18->setVisible(false);
     ui->label_19->setVisible(false);

     // --------

     QString ColorStyle = "color: rgb(249, 255, 144);";

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
}


void MainWindow::on_radioButton_5_clicked()
{

    QString color5 = "* { background-color: qlineargradient(spread:pad, x1:0.478, y1:1, x2:0.489112, y2:0, stop:0 rgba(225, 66, 192, 11), stop:0.488764 rgba(223, 14, 180, 188), stop:1 rgba(50, 81, 76, 66))}";
    ui->pushButton->setStyleSheet(color5);
    ui->pushButton_2->setStyleSheet(color5);
     ui->pushButton_3->setStyleSheet(color5);
       ui->pushButton_4->setStyleSheet(color5);
     ui->pushButton_5->setStyleSheet(color5);
     ui->pushButton_6->setStyleSheet(color5);
    ui->groupBox->setStyleSheet(color5);
    ui->pushButton_7->setStyleSheet(color5);
    ui->pushButton_8->setStyleSheet(color5);
       ui->lineEdit->setStyleSheet(color5);
       ui->groupBox_2->setStyleSheet(color5);
       ui->groupBox_3->setStyleSheet(color5);
       ui->groupBox_4->setStyleSheet(color5);
       ui->pushButton_9->setStyleSheet(color5);
       ui->lineEdit_2->setStyleSheet(color5);
        ui->pushButton_10->setStyleSheet(color5);

    ui->label->setVisible(false);
    ui->label_2->setVisible(false);
    ui->label_3->setVisible(false);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(true);
     ui->label_20->setVisible(false);
    ui->label_6->setVisible(false);
    ui->label_18->setVisible(false);
     ui->label_19->setVisible(false);
     //---------------
     QString ColorStyle = "color: rgb(0, 0, 0);";

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

}


void MainWindow::on_radioButton_6_clicked()
{

    QString color6 = "* { background-color:  qlineargradient(spread:pad, x1:0.478, y1:1, x2:0.489112, y2:0, stop:0 rgba(225, 66, 205, 11), stop:0.488764 rgba(4, 61, 69, 188), stop:1 rgba(50, 81, 76, 66))}";
    ui->pushButton->setStyleSheet(color6);
    ui->pushButton_2->setStyleSheet(color6);
     ui->pushButton_3->setStyleSheet(color6);
       ui->pushButton_4->setStyleSheet(color6);
     ui->pushButton_5->setStyleSheet(color6);
     ui->pushButton_6->setStyleSheet(color6);
    ui->groupBox->setStyleSheet(color6);
    ui->pushButton_7->setStyleSheet(color6);
    ui->pushButton_8->setStyleSheet(color6);
       ui->lineEdit->setStyleSheet(color6);
       ui->groupBox_2->setStyleSheet(color6);
       ui->groupBox_3->setStyleSheet(color6);
       ui->groupBox_4->setStyleSheet(color6);
       ui->pushButton_9->setStyleSheet(color6);
       ui->lineEdit_2->setStyleSheet(color6);
        ui->pushButton_10->setStyleSheet(color6);

    ui->label->setVisible(false);
    ui->label_2->setVisible(false);
    ui->label_3->setVisible(false);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(true);
     ui->label_20->setVisible(false);
     ui->label_18->setVisible(false);
      ui->label_19->setVisible(false);

      QString ColorStyle = "color: rgb(0, 85, 127);";

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


}


void MainWindow::on_pushButton_3_clicked()
{
    qDebug() << "Opening the Browser...";
     QDesktopServices::openUrl(QUrl("https://t.me/onlyinc", QUrl::TolerantMode));
}

    QString namef;
    QString FileExtens = "*.txt";
    QString FileOnOutput = ".txt";

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

if  (outp >= 1000000){
outp_str = "Mb";
}

if (outp >= 1000 && outp < 1000000){

    outp_str = "Kb";
}

if(outp < 1000){
outp_str = "Byte";
}


ui->label_17->setText("Somewhere: " + outpp + " " + outp_str);



if(ui->checkBox_10->isChecked()){

}

QFile fi(namef);
QFile fo("C:/Users/User/Desktop/" + name_file + ".cm");

if(fi.open(QFile::ReadOnly) && fo.open(QFile::WriteOnly)){
    int compress_level = 9;
    fo.write(qCompress(fi.readAll(), compress_level));

    fi.close();
    fo.close();

}





} // button

} // else


void MainWindow::on_pushButton_7_clicked()
{

    // --------------------
    if(ui->groupBox_2->isVisible() && ui->groupBox_3->isVisible()){
    ui->groupBox_2->setVisible(false);
    ui->groupBox_3->setVisible(false);
    ui->checkBox_2->setChecked(false);
    }
    else{
    if (ui->groupBox_2->isVisible()) {
    ui->groupBox_2->setVisible(false);
    }

    else {

        ui->groupBox_2->setVisible(true);
    }
}
    // -------------

qDebug() << "Process: Additionally";

}


void MainWindow::on_checkBox_clicked()
{
    if(ui->label_8->isVisible()){
    ui->label_8->setVisible(false);
    }

    else{
        ui->label_8->setVisible(true);
    }


}


void MainWindow::on_checkBox_4_clicked()
{
    if(ui->label_9->isVisible()){
        ui->label_9->setVisible(false);
    }
    else{
        ui->label_9->setVisible(true);
    }
}


void MainWindow::on_checkBox_2_clicked()
{

    if(ui->checkBox_2->isChecked() && ui->groupBox_2->isVisible()){
        ui->groupBox_3->setVisible(true);

    }
    else{
   ui->groupBox_3->setVisible(false);
    }

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

    ui->pushButton->setStyleSheet(color18);
    ui->pushButton_2->setStyleSheet(color18);
     ui->pushButton_3->setStyleSheet(color18);
       ui->pushButton_4->setStyleSheet(color18);
     ui->pushButton_5->setStyleSheet(color18);
     ui->pushButton_6->setStyleSheet(color18);
    ui->groupBox->setStyleSheet(color18);
    ui->pushButton_7->setStyleSheet(color18);
    ui->pushButton_8->setStyleSheet(color18);
       ui->lineEdit->setStyleSheet(color18);
       ui->groupBox_2->setStyleSheet(color18);
       ui->groupBox_3->setStyleSheet(color18);
       ui->groupBox_4->setStyleSheet(color18);
       ui->pushButton_9->setStyleSheet(color18);
       ui->lineEdit_2->setStyleSheet(color18);
        ui->pushButton_10->setStyleSheet(color18);


    ui->label_18->setVisible(false);
     ui->label_19->setVisible(false);
    ui->label_20->setVisible(true);
    ui->label->setVisible(false);
    ui->label_2->setVisible(false);
    ui->label_3->setVisible(false);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);

    // ------

    QString ColorStyle = "color: rgb(255, 85, 127);";

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

}



void MainWindow::on_pushButton_6_clicked()
{

    qDebug() << "Process: Unzip";
    QString name_unz = QFileDialog::getOpenFileName(0, "Select file", "", "*.cm");

    QFile fille(name_unz);
    if(!fille.open(QIODevice::ReadOnly))
        return;

      QByteArray compressed = fille.readAll();
      qDebug() << "Compresed=" << compressed.size();

    QByteArray unkom = qUncompress(compressed);
     qDebug() << "UnCompresed=" << unkom.size();

     QFile unk("C:/Users/User/Desktop/" + file_name_unk + FileOnOutput);
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
    }else{
        ui->label_11->setVisible(true);
        ui->pushButton_9->setVisible(true);
        ui->lineEdit_2->setVisible(true);
    }


}


void MainWindow::on_radioButton_8_clicked()
{
        QString color18 = "background-color: qlineargradient(spread:pad, x1:0.522382, y1:0.955, x2:0.467, y2:0.063, stop:0 rgba(0, 0, 0, 0), stop:0.5 rgba(0, 159, 255, 170), stop:0.994382 rgba(0, 0, 0, 0));";

        ui->pushButton->setStyleSheet(color18);
        ui->pushButton_2->setStyleSheet(color18);
         ui->pushButton_3->setStyleSheet(color18);
           ui->pushButton_4->setStyleSheet(color18);
         ui->pushButton_5->setStyleSheet(color18);
         ui->pushButton_6->setStyleSheet(color18);
        ui->groupBox->setStyleSheet(color18);
        ui->pushButton_7->setStyleSheet(color18);
        ui->pushButton_8->setStyleSheet(color18);
           ui->lineEdit->setStyleSheet(color18);
           ui->groupBox_2->setStyleSheet(color18);
           ui->groupBox_3->setStyleSheet(color18);
           ui->groupBox_4->setStyleSheet(color18);
           ui->pushButton_9->setStyleSheet(color18);
           ui->lineEdit_2->setStyleSheet(color18);
            ui->pushButton_10->setStyleSheet(color18);

    ui->label_18->setVisible(false);
    ui->label_19->setVisible(true);
    ui->label->setVisible(false);
    ui->label_2->setVisible(false);
    ui->label_20->setVisible(false);
    ui->label_3->setVisible(false);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);

    // ----------

    QString ColorStyle = "color: rgb(170, 255, 255);";

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
}


void MainWindow::on_radioButton_9_clicked()
{

    QString color18 = "background-color: qlineargradient(spread:pad, x1:0.522382, y1:0.955, x2:0.467, y2:0.063, stop:0 rgba(0, 0, 0, 0), stop:0.5 rgba(169, 255, 50, 175), stop:0.994382 rgba(0, 0, 0, 0));";
    ui->pushButton->setStyleSheet(color18);
    ui->pushButton_2->setStyleSheet(color18);
     ui->pushButton_3->setStyleSheet(color18);
       ui->pushButton_4->setStyleSheet(color18);
     ui->pushButton_5->setStyleSheet(color18);
     ui->pushButton_6->setStyleSheet(color18);
    ui->groupBox->setStyleSheet(color18);
    ui->pushButton_7->setStyleSheet(color18);
    ui->pushButton_8->setStyleSheet(color18);
    ui->lineEdit->setStyleSheet(color18);
    ui->groupBox_2->setStyleSheet(color18);
    ui->groupBox_3->setStyleSheet(color18);
    ui->groupBox_4->setStyleSheet(color18);
    ui->pushButton_9->setStyleSheet(color18);
    ui->lineEdit_2->setStyleSheet(color18);
     ui->pushButton_10->setStyleSheet(color18);

    ui->label_19->setVisible(false);
    ui->label->setVisible(false);
    ui->label_2->setVisible(false);
    ui->label_20->setVisible(false);
    ui->label_3->setVisible(false);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);
    ui->label_18->setVisible(true);

    //-----
    QString ColorStyle = "color: rgb(170, 255, 0);";

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
}

// Symbols
void MainWindow::on_checkBox_8_stateChanged(int arg1)
{


}


void MainWindow::on_pushButton_9_clicked()
{
 time_comp = ui->lineEdit_2->text();
}


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
    QDir().mkdir("C:/Users/User/Desktop/Maloru");
}

