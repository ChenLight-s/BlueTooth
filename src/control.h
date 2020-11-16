#ifndef CONTROL_H
#define CONTROL_H

#include <QWidget>
#include "mainwindow.h"
#include <QMainWindow>
#include <qbluetoothglobal.h>
#include <qbluetoothlocaldevice.h>
#include <qbluetoothserviceinfo.h>
#include <vector>
#include "chatclient.h"
#include <qbluetoothsocket.h>

QT_FORWARD_DECLARE_CLASS(MainWindow)
QT_FORWARD_DECLARE_CLASS(ChatClient)
namespace Ui {
class Control;
}

class Control : public QWidget
{
    Q_OBJECT

public:
    explicit Control(QWidget *parent = nullptr);
//    Control(QWidget *parent,QBluetoothSocket *socket);
    ~Control();
    Ui::Control *ui;
private slots:
//    void on_pushButton_3_clicked();

//    void on_pushButton_y_clicked();


    void on_pushButton_10_clicked();

//    void on_pushButton_YUp_clicked();

//    void on_pushButton_YDwon_clicked();

//    void on_pushButton_XUp_clicked();

//    void on_pushButton_XDown_clicked();

//    void on_pushButton_ZUp_clicked();

//    void on_pushButton_ZDown_clicked();

//    void on_pushButton_SetOri_clicked();

//    void on_pushButton_ToOri_clicked();

//    void on_pushButton_Laser_clicked();

    void on_Contrl_Laser_textChanged(const QString &arg1);

    void on_Run_Speed_textChanged(const QString &arg1);

    void on_hContrl_Laser_valueChanged(int value);

    void on_ZContrl_Step_textChanged(const QString &arg1);

    void on_hZContrl_Step_valueChanged(int value);

    void on_hRun_Speed_valueChanged(int value);

    void on_Contrl_Step_textChanged(const QString &arg1);

    void on_hContrl_Step_valueChanged(int value);

signals:
//    void sendMessage(QByteArray);
private:

    void on_Laser(QString gongLv);
    void off_Laser(void);
//    MainWindow *mainWindowWidge;
    ChatClient *chatClient;
    QBluetoothSocket *socketTemp;
    QByteArray Str_Enter = "\n";
    QByteArray Speed = "1000.0";
};

#endif // CONTROL_H
