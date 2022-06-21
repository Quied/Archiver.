#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void ChangeWidgStyle(QString &ColorStyle);

    void ChangeWidgColor(QString &color);

    void updateTime();

    void on_pushButton_clicked();

    void on_radioButton_2_clicked();

    void on_groupBox_clicked();

    void on_radioButton_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_5_clicked();

    void on_radioButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_checkBox_clicked();

    void on_checkBox_4_clicked();

    void on_checkBox_2_clicked();

    void on_checkBox_3_clicked();

    void on_checkBox_5_clicked();

    void on_checkBox_7_clicked();

    void on_checkBox_6_clicked();

    void on_checkBox_8_clicked();

    void on_pushButton_5_clicked();

    void on_checkBox_9_clicked();

    void on_radioButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_radioButton_8_clicked();

    void on_radioButton_9_clicked();

    void on_checkBox_8_stateChanged(int arg1);

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_radioButton_10_clicked();

    void on_radioButton_11_clicked();

    void on_radioButton_13_clicked();

    void on_radioButton_14_clicked();

    void on_radioButton_12_clicked();

    void on_radioButton_15_clicked();

    void on_checkBox_10_clicked();

    void on_checkBox_10_stateChanged(int arg1);

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_11_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *tmr;
};
#endif // MAINWINDOW_H
