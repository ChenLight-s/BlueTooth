#include "control.h"
#include "ui_control.h"
#include <qbluetoothaddress.h>
#include <qbluetoothservicediscoveryagent.h>
#include <qbluetoothserviceinfo.h>
#include <qbluetoothlocaldevice.h>
#include <qbluetoothuuid.h>
#include <qbluetoothsocket.h>
#include "chatclient.h"
#include "mainwindow.h"
#include <QMainWindow>
Control::Control(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Control)
{
    ui->setupUi(this);
//    mainWindowWidge = new MainWindow;
//    connect(this, SIGNAL(sendMessage(QByteArray)), chatClient, SLOT(sendMessage(QByteArray)));
//    chatClient =new ChatClient;
}

//Control::Control(QWidget *parent,QBluetoothSocket *socket) :
//    QWidget(parent),
//    ui(new Ui::Control)
//{
//    ui->setupUi(this);
////    mainWindowWidge = new MainWindow;
////    connect(this, SIGNAL(sendMessage(QByteArray)), chatClient, SLOT(sendMessage(QByteArray)));
////    chatClient =new ChatClient;
////    QBluetoothSocket *socketTemp =socket;
//}
Control::~Control()
{
    delete ui;
}
void Control::on_pushButton_10_clicked()
{
//    mainWindowWidge->show();
    delete  ui;
    this->close();

}


#if 0

void Control::on_pushButton_YDown_2_clicked()
{
//    QString data = "$J=G21G91X0.0Y-";
//    data += ui->Contrl_Step->text().toUtf8();
//    data +="Z0.0F";
//    Speed = ui->Run_Speed->text().toUtf8();
//    data+=Speed;
//    data+=Str_Enter;
//    qDebug()<<"YDown";
//        mainWindowWidge = new MainWindow(this);
//    emit sendMessage(data.toUtf8());
//    emit mainWindowWidge->sendMessage(data.toUtf8());
//    chatClient->sendMessage(data.toUtf8());
//    mainWindowWidge->sendMessageClicked(data);
}


void Control::on_pushButton_YUp_clicked()
{
    //Y+ 移动
    QByteArray data = "$J=G21G91Y";
    data += ui->ZContrl_Step->text().toUtf8();
    data +="F";
    Speed = "200";
    data+=Speed;
    data+=Str_Enter;
//    sendMessage(data);

}

void Control::on_pushButton_YDwon_clicked()
{
    //Y- 移动
    QByteArray data = "$J=G21G91Y-";
    data += ui->ZContrl_Step->text().toUtf8();
    data +="F";
    Speed = "200";
    data+=Speed;
    data+=Str_Enter;
//    sendMessage(data);
}

void Control::on_pushButton_XUp_clicked()
{
    //X+ 移动
    QByteArray data = "$J=G21G91X";
    data += ui->ZContrl_Step->text().toUtf8();
    data +="F";
    Speed = "200";
    data+=Speed;
    data+=Str_Enter;
//    sendMessage(data);

}

void Control::on_pushButton_XDown_clicked()
{
    //X- 移动
    QByteArray data = "$J=G21G91X-";
    data += ui->ZContrl_Step->text().toUtf8();
    data +="F";
    Speed = "200";
    data+=Speed;
    data+=Str_Enter;
//    sendMessage(data);

}

void Control::on_pushButton_ZUp_clicked()
{
    //Z+ 移动
//    QByteArray data = "$J=G21G91Z";
//    data += ui->ZContrl_Step->text().toUtf8();
//    data +="F";
//    Speed = "200";
//    data+=Speed;
//    data+=Str_Enter;
//    sendMessage(data);

}

void Control::on_pushButton_ZDown_clicked()
{
    //Z- 移动
//    QByteArray data = "$J=G21G91Z-";
//    data += ui->ZContrl_Step->text().toUtf8();
//    data +="F";
//    Speed = "200";
//    data+=Speed;
//    data+=Str_Enter;
//    sendMessage(data);

}

void Control::on_pushButton_SetOri_clicked()
{
    //设置原点  G10 P0 L20 X0.0Y0.0Z0
    QByteArray data = "G10 P0 L20 X0.0Y0.0Z0";
    data+=Str_Enter;
//    sendMessage(data);

}

void Control::on_pushButton_ToOri_clicked()
{
    //回归原点  G90G0 X0Y0
    QByteArray data = "G90G0 X0Y0";
    data+=Str_Enter;
//    sendMessage(data);
}

void Control::on_Laser(QString gongLv="30")
{
    QString data;
    ui->pushButton_Laser->setText("关闭激光");
    data ="M3S"+gongLv +Str_Enter;
//    data ="M3S"+ui->Contrl_Laser->text() +Str_Enter;
    data +="G1F1000" +Str_Enter;
//    serial.write(data.toUtf8());
//    display(data.toUtf8(),"#0000FF");
}
void Control::off_Laser(void)
{
    ui->pushButton_Laser->setText("打开激光");
//    serial.write("M5"+Str_Enter.toUtf8());
//    display("M5"+Str_Enter.toUtf8(),"#0000FF");
}
void Control::on_pushButton_Laser_clicked()
{
    QString data;
    static bool flag =0;
    if(!flag)
    {
        on_Laser(ui->Contrl_Laser->text());

        flag = true;
    }
    else {
        off_Laser();
        flag = false;
    }

}

#endif



void Control::on_Contrl_Laser_textChanged(const QString &arg1)
{
    ui->hContrl_Laser->setValue(arg1.toInt());
    if(ui->pushButton_Laser->text() =="打开激光")
    {
        ui->pushButton_Laser->clicked(true);
    }
}

void Control::on_hContrl_Laser_valueChanged(int value)
{
    ui->Contrl_Laser->setText(QString::number(value));
    if(ui->pushButton_Laser->text() =="关闭激光")
    {

        ui->pushButton_Laser->clicked(true);
    }
}

void Control::on_ZContrl_Step_textChanged(const QString &arg1)
{
    ui->hZContrl_Step->setValue(arg1.toInt());
}

void Control::on_hZContrl_Step_valueChanged(int value)
{
    ui->ZContrl_Step->setText(QString::number(value));
}


void Control::on_Run_Speed_textChanged(const QString &arg1)
{
    ui->hRun_Speed->setValue(arg1.toInt());
}
void Control::on_hRun_Speed_valueChanged(int value)
{
    ui->Run_Speed->setText(QString::number(value));
}

void Control::on_Contrl_Step_textChanged(const QString &arg1)
{
    ui->hContrl_Step->setValue(arg1.toInt());
}

void Control::on_hContrl_Step_valueChanged(int value)
{
    ui->Contrl_Step->setText(QString::number(value));
}
