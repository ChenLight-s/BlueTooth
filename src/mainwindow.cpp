#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "control.h"
#include "ui_control.h"
#include <qbluetoothaddress.h>
#include <qbluetoothservicediscoveryagent.h>
#include <qbluetoothserviceinfo.h>
#include <qbluetoothlocaldevice.h>
#include <qbluetoothuuid.h>
#include <qbluetoothsocket.h>
#include "chatclient.h"

//static const QLatin1String serviceUuid("e8e10f95-1a70-4b27-9ccf-02010264e9c8");

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    mIsSearchFinish(false),
    mIsConnected(false)
{
    ui->setupUi(this);
//    setWindowTitle("蓝牙SPP By Kang");
//    this->setWindowIcon(QIcon(":/image/Lunyeelogo.ico"));       //设置窗口左上角图标
//    this->setWindowTitle(QString("仑业控制台"));
    ui->pushButton_connect->setEnabled(false);
    ui->pushButton_send->setEnabled(false);
    localDevice = new QBluetoothLocalDevice();
    discoveryAgent = new QBluetoothDeviceDiscoveryAgent(localDevice->address());
    connect(discoveryAgent, SIGNAL(deviceDiscovered(QBluetoothDeviceInfo)),
                this, SLOT(addDevice(QBluetoothDeviceInfo)));
    connect(discoveryAgent, SIGNAL(finished()), this, SLOT(scanFinished()));
    connect(ui->pushButton_search, SIGNAL(clicked()), this, SLOT(startScan()));
    connect(ui->comboBox_device,SIGNAL(activated(int)),this,SLOT(deviceSelected(int)));
    connect(ui->pushButton_clean_rx,SIGNAL(clicked(bool)),this,SLOT(cleanRx()));
    connect(ui->pushButton_clean_tx,SIGNAL(clicked(bool)),this,SLOT(cleanTx()));
    connect(ui->pushButton_device_info,SIGNAL(clicked(bool)),this,SLOT(deviceinfo()));
    connect(ui->pushButton_connect,SIGNAL(clicked(bool)),this,SLOT(connectDevice()));
    connect(ui->pushButton_send,SIGNAL(clicked(bool)),this,SLOT(sendMessageClicked()));
    client = new ChatClient(this);

    pDesktopWidget = QApplication::desktop();
//    pDesktopWidget
    //获取可用桌面大小
    deskRect =pDesktopWidget->availableGeometry(this);
    //获取主屏幕分辨率
    screenRect = pDesktopWidget->screenGeometry(this);
    //获取屏幕数量
//    int nScreenCount =pDesktopWidget->screenCount();
    qDebug()<<deskRect.width()<<deskRect.height();


}

MainWindow::~MainWindow()
{
    delete ui;
    delete discoveryAgent;
    delete localDevice;
    delete controlWidge;
}

void MainWindow::startScan(){
    qDebug()<<"扫描";
    ui->textBrowser_rx->append("扫描中....");
    ui->pushButton_search->setEnabled(false);
    mDeviceList.clear();
    ui->comboBox_device->clear();
    discoveryAgent->start();
}

void MainWindow::scanFinished(){
    ui->pushButton_search->setEnabled(true);
    mIsSearchFinish=true;
    qDebug()<<"扫描完成";
    ui->textBrowser_rx->append("扫描完成");
    qDebug() <<mDeviceList.size();
}

void MainWindow::deviceSelected(int idx)
{
    QBluetoothDeviceInfo info = mDeviceList[idx];
    QString coreConfigStr;
    getCoreConfigStr(coreConfigStr,info);
//    setWindowTitle("蓝牙SPP By Kang | "+info.name()+":"+coreConfigStr);
    if(info.coreConfigurations()==info.BaseRateAndLowEnergyCoreConfiguration
            ||info.coreConfigurations()==info.BaseRateCoreConfiguration){
        ui->pushButton_connect->setText("连接");
//        if(mIsSearchFinish){
            ui->pushButton_connect->setEnabled(true);
//        }
    }
    else{
        ui->pushButton_connect->setText("不支持");
    }
    discoveryAgent->stop();
    qDebug("扫描停止");
    ui->textBrowser_rx->append("扫描停止");
    ui->pushButton_search->setEnabled(true);

}

void MainWindow::cleanTx()
{
     ui->textEdit_tx->clear();
}

void MainWindow::cleanRx()
{
    ui->textBrowser_rx->clear();
}

void MainWindow::connectDevice()
{
    if(!mIsConnected){
        QBluetoothDeviceInfo info =mDeviceList[ui->comboBox_device->currentIndex()];


        qDebug() << "Connecting...";

        connect(client, SIGNAL(messageReceived(QString,QByteArray)),
                this, SLOT(showMessage(QString,QByteArray)));
        connect(client, SIGNAL(disconnected()), this, SLOT(clientDisconnected()));
        connect(client, SIGNAL(connected(QString)), this, SLOT(connected(QString)));
        connect(this, SIGNAL(sendMessage(QByteArray)), client, SLOT(sendMessage(QByteArray)));
        qDebug() << "Start client";
        QBluetoothServiceInfo server;
        server.setDevice(info);
        QBluetoothUuid uuid(QString("00001101-0000-1000-8000-00805F9B34FB"));
        server.setServiceUuid(uuid);
        client->startClient(server);
        ui->pushButton_connect->setEnabled(false);
    }
    else{
        client->stopClient();
        ui->pushButton_connect->setEnabled(false);
    }



}

void MainWindow::deviceinfo()
{
    if(!mIsSearchFinish){
        return;
    }
    QBluetoothDeviceInfo info =mDeviceList[ui->comboBox_device->currentIndex()];
    deviceInfo* deviceInfoDlg =new deviceInfo(this,info);
    deviceInfoDlg->show();
}

void MainWindow::showMessage(QString sender, QByteArray data)
{
    ui->textBrowser_rx->insertHtml(QString::fromLocal8Bit("<br><font color=\"#00FF00\">================= </font> \
                                    <font color=\"#FF0000\">Send:</font>  \
                                   <font color=\"#0000FF\">")+sender+QString::fromLocal8Bit("</font><font color=\"#00FF00\"> =================</font><br>"));
    QString data_str;
    data_str=QString::fromUtf8(data.data(),data.length());
    if(ui->checkBox_auto_new_line->isChecked()){
        data_str+="\n";
    }
    ui->textBrowser_rx->insertPlainText(data_str);
}

void MainWindow::clientDisconnected()
{
    ui->pushButton_send->setEnabled(false);
    ui->pushButton_connect->setText("连接");
    ui->pushButton_connect->setEnabled(true);
    mIsConnected=false;
    qDebug("clientDisconnected");
    ui->textBrowser_rx->append("连接中....");
}

void MainWindow::connected(QString)
{
    ui->pushButton_send->setEnabled(true);
    ui->pushButton_connect->setEnabled(true);
    ui->pushButton_connect->setText("断开");
    mIsConnected=true;
    qDebug("connected");
    ui->textBrowser_rx->append("连接成功");
}

void MainWindow::sendMessageClicked()
{
    QString text = ui->textEdit_tx->toPlainText();
    qDebug()<<ui->textEdit_tx->toPlainText();
    if(text.length()>0){
        qDebug()<<"进来了1";
//        emit sendMessage(text.toUtf8());
        client->sendMessage(text.toUtf8());
    }
//    sendMessageClicked("568");
}


void MainWindow::sendMessageClicked(QString str)
{
    qDebug()<<str;
//    QString text = str;
    if(str.length()>0){

        qDebug()<<"进来了";
//        sendMessageClicked();
        emit sendMessage(str.toUtf8());
//        client->sendMessage(str.toUtf8());
    }
}
void MainWindow::referenceDeviceList()
{
    ui->comboBox_device->clear();
//    ui->comboBox_device->addItem(deviceinfo.name()+"->"+deviceinfo.address().toString());

    for(int idx=0;idx< mDeviceList.size() ;idx++){
        ui->comboBox_device->addItem(mDeviceList[idx].name()+"|"+mDeviceList[idx].address().toString());
    }
    ui->comboBox_device->insertSeparator(mDeviceList.size()*2);
   qDebug() <<mDeviceList.size();
}

void MainWindow::getCoreConfigStr(QString& str, const QBluetoothDeviceInfo info)
{
    switch (info.coreConfigurations()) {
    case info.UnknownCoreConfiguration:
        str="UnknownCoreConfiguration";
        break;
    case info.BaseRateCoreConfiguration:
        str="BaseRateCoreConfiguration";
        break;
    case info.BaseRateAndLowEnergyCoreConfiguration:
        str="BaseRateAndLowEnergyCoreConfiguration";
        break;
    case info.LowEnergyCoreConfiguration:
        str="LowEnergyCoreConfiguration";
        break;
    default:
        break;
    }
}


void MainWindow::addDevice(const QBluetoothDeviceInfo &deviceinfo){
    qDebug("new device:%s  %s",deviceinfo.name().toStdString().c_str(),deviceinfo.address().toString().toStdString().c_str());
    QString codeConfig_str;
    switch (deviceinfo.coreConfigurations()) {
    case QBluetoothDeviceInfo::UnknownCoreConfiguration:
        codeConfig_str="UnknownCoreConfiguration";
        return;
        break;
    case QBluetoothDeviceInfo::BaseRateCoreConfiguration:
        codeConfig_str="BaseRateCoreConfiguration";
        break;
    case QBluetoothDeviceInfo::BaseRateAndLowEnergyCoreConfiguration:
        codeConfig_str="BaseRateAndLowEnergyCoreConfiguration";
        break;
    case QBluetoothDeviceInfo::LowEnergyCoreConfiguration:
        codeConfig_str="LowEnergyCoreConfiguration";
        return;
        break;
    default:
        break;
    }
    qDebug("coreConfigurations:%s",codeConfig_str.toStdString().c_str());
    mDeviceList.push_back(deviceinfo);
    referenceDeviceList();

}

void MainWindow::on_pushButton_clicked()
{
//    controlWidge = new Control;
//    controlWidge->raise();
//    this->move(-deskRect.width()/2,0);

//    controlWidge->move(deskRect.width(),0);
//    controlWidge->move(ui->textBrowser_rx->x(),ui->textBrowser_rx->y());
//    controlWidge->setMaximumWidth(ui->textBrowser_rx->width());
//    controlWidge->setMinimumHeight(deskRect.height()-ui->textBrowser_rx->x());
////    ui->textEdit_tx->setHidden(true);
//    ui->textBrowser_rx->setHidden(true);
    controlWidge = new Control;
    controlWidge->show();
    connect(controlWidge->ui->pushButton_YUp,&QPushButton::clicked,this,[=](){on_pushButton_YUp_clicked();});
    connect(controlWidge->ui->pushButton_YDwon,&QPushButton::clicked,this,[=](){on_pushButton_YDown_clicked();});
    connect(controlWidge->ui->pushButton_XUp,&QPushButton::clicked,this,[=](){on_pushButton_XUp_clicked();});
    connect(controlWidge->ui->pushButton_XDown,&QPushButton::clicked,this,[=](){on_pushButton_XDown_clicked();});
    connect(controlWidge->ui->pushButton_ZUp,&QPushButton::clicked,this,[=](){on_pushButton_ZUp_clicked();});
    connect(controlWidge->ui->pushButton_ZDown,&QPushButton::clicked,this,[=](){on_pushButton_ZDown_clicked();});
    connect(controlWidge->ui->pushButton_SetOri,&QPushButton::clicked,this,[=](){on_pushButton_SetOri_clicked();});
    connect(controlWidge->ui->pushButton_ToOri,&QPushButton::clicked,this,[=](){on_pushButton_ToOri_clicked();});
    connect(controlWidge->ui->pushButton_Laser,&QPushButton::clicked,this,[=](){on_pushButton_Laser_clicked();});
//    connect(controlWidge->ui->pushButton_YDwon,&QPushButton::clicked,this,[=](){on_pushButton_YDown_clicked();});


//    this->close();
}

QByteArray Str_Enter = "\n";
QByteArray Speed = "1000.0";
void MainWindow::on_pushButton_YDown_clicked()
{
//    Y-
    QByteArray data = "$J=G21G91Y-";
    data += controlWidge->ui->Contrl_Step->text().toUtf8();
    data +="F";
    Speed =controlWidge->ui->Run_Speed->text().toUtf8();
    data+=Speed;
    data+=Str_Enter;
    qDebug()<<"YDown";
    sendMessage(data);
}
#if 1
void MainWindow::on_pushButton_YUp_clicked()
{
    //Y+ 移动
    QByteArray data = "$J=G21G91Y";
    data += controlWidge->ui->Contrl_Step->text().toUtf8();
    data +="F";
    Speed =controlWidge->ui->Run_Speed->text().toUtf8();
    data+=Speed;
    data+=Str_Enter;
    sendMessage(data);

}

void MainWindow::on_pushButton_XUp_clicked()
{
    //X+ 移动
    QByteArray data = "$J=G21G91X";
    data += controlWidge->ui->Contrl_Step->text().toUtf8();
    data +="F";
    Speed =controlWidge->ui->Run_Speed->text().toUtf8();
    data+=Speed;
    data+=Str_Enter;
    sendMessage(data);

}

void MainWindow::on_pushButton_XDown_clicked()
{
    //X- 移动
    QByteArray data = "$J=G21G91X-";
    data += controlWidge->ui->Contrl_Step->text().toUtf8();
    data +="F";
    Speed =controlWidge->ui->Run_Speed->text().toUtf8();
    data+=Speed;
    data+=Str_Enter;
    sendMessage(data);

}

void MainWindow::on_pushButton_ZUp_clicked()
{
    //Z+ 移动
    QByteArray data = "$J=G21G91Z";
    data += controlWidge->ui->ZContrl_Step->text().toUtf8();
    data +="F";
    Speed = "200";
    data+=Speed;
    data+=Str_Enter;
    emit sendMessage(data);

}

void MainWindow::on_pushButton_ZDown_clicked()
{
    //Z- 移动
    QByteArray data = "$J=G21G91Z-";
    data +=controlWidge->ui->ZContrl_Step->text().toUtf8();
    data +="F";
    Speed = "200";
    data+=Speed;
    data+=Str_Enter;
    emit sendMessage(data);

}

void MainWindow::on_pushButton_SetOri_clicked()
{
    //设置原点  G10 P0 L20 X0.0Y0.0Z0
    QByteArray data = "G10 P0 L20 X0.0Y0.0Z0";
    data+=Str_Enter;
    sendMessage(data);

}

void MainWindow::on_pushButton_ToOri_clicked()
{
    //回归原点  G90G0 X0Y0
    QByteArray data = "G90G0 X0Y0";
    data+=Str_Enter;
    sendMessage(data);
}

void MainWindow::on_Laser(QByteArray gongLv="30")
{
    QByteArray data;
    controlWidge->ui->pushButton_Laser->setText("关闭激光");
    data ="M3S"+gongLv +Str_Enter;
    data +="G1F1000" +Str_Enter;
    sendMessage(data);
}
void MainWindow::off_Laser(void)
{
    controlWidge->ui->pushButton_Laser->setText("打开激光");
    sendMessage("M5"+Str_Enter);
}
void MainWindow::on_pushButton_Laser_clicked()
{
    QString data;
    static bool flag =0;
    if(!flag)
    {
        on_Laser(controlWidge->ui->Contrl_Laser->text().toUtf8());
        flag = true;
    }
    else {
        off_Laser();
        flag = false;
    }

}



//void MainWindow::on_pushButton_YDown_2_clicked()
//{
//    QString data = "$J=G21G91X0.0Y-";
//    data += controlWidge->ui->Contrl_Step->text().toUtf8();
//    data +="Z0.0F";
//    Speed =controlWidge->ui->Run_Speed->text().toUtf8();
//    data+=Speed;
//    data+=Str_Enter;
//    qDebug()<<"YDown";
//    sendMessage(data.toUtf8());

//}

#endif

void MainWindow::on_pushButton_2_clicked()
{
    writePaints =new WritePaints;
    writePaints->show();
//    writePaints->toolBarSet()
}
