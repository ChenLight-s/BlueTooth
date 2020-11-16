#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qbluetoothglobal.h>
#include <qbluetoothlocaldevice.h>
#include <qbluetoothserviceinfo.h>
#include <vector>
#include "deviceinfo.h"
#include "control.h"
#include <QRect>
#include <QDesktopWidget>
#include "writepaints.h"
#include "ui_writepaints.h"

QT_FORWARD_DECLARE_CLASS(QBluetoothDeviceDiscoveryAgent)
QT_FORWARD_DECLARE_CLASS(ChatClient)
QT_FORWARD_DECLARE_CLASS(Control)
QT_FORWARD_DECLARE_CLASS(WritePaints)

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void on_Laser(QByteArray gongLv);
    void off_Laser();

public slots:
    void addDevice(const QBluetoothDeviceInfo&);
    void sendMessageClicked(QString str);
private slots:
    void startScan();
    void scanFinished();
    void deviceSelected(int idx);
    void cleanTx();
    void cleanRx();
    void connectDevice();
    void deviceinfo();
    void showMessage(QString s1,QByteArray s2);
    void clientDisconnected();
    void connected(QString);
    void sendMessageClicked();

    void on_pushButton_clicked();


    void on_pushButton_YUp_clicked();
    void on_pushButton_YDown_clicked();
    void on_pushButton_XUp_clicked();
    void on_pushButton_XDown_clicked();
    void on_pushButton_ZUp_clicked();
    void on_pushButton_ZDown_clicked();
    void on_pushButton_SetOri_clicked();
    void on_pushButton_ToOri_clicked();
    void on_pushButton_Laser_clicked();


    void on_pushButton_2_clicked();

signals:
    void sendMessage(QByteArray);

private:
    void referenceDeviceList();
    void getCoreConfigStr(QString& str,const QBluetoothDeviceInfo info);

private:
    Ui::MainWindow *ui;
    bool mIsSearchFinish;
    bool mIsConnected;
    ChatClient * client ;
    Control * controlWidge;
    QBluetoothDeviceDiscoveryAgent * discoveryAgent;
    QBluetoothLocalDevice * localDevice;
    std::vector<QBluetoothDeviceInfo> mDeviceList;
    QDesktopWidget * pDesktopWidget;
    QRect deskRect ;
    QRect screenRect;
//    WritePaints *wri
    WritePaints * writePaints ;

};

#endif // MAINWINDOW_H
