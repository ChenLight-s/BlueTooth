#ifndef CHATCLIENT_H
#define CHATCLIENT_H

#include <qbluetoothserviceinfo.h>

#include <QtCore/QObject>

QT_FORWARD_DECLARE_CLASS(QBluetoothSocket)

QT_USE_NAMESPACE

class ChatClient : public QObject
{
    Q_OBJECT

public:
    explicit ChatClient(QObject *parent = 0);
    ~ChatClient();

    void startClient(const QBluetoothServiceInfo &remoteService);
    void stopClient();
    QBluetoothSocket *socket;
public slots:
    void sendMessage(const QByteArray &message);

signals:
    void messageReceived(const QString &sender, const QByteArray &message);
    void connected(const QString &name);
    void disconnected();

private slots:
    void readSocket();
    void connected();

private:

};

#endif // CHATCLIENT_H
