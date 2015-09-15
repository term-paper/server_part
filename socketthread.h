#ifndef SOCKETTHREAD_H
#define SOCKETTHREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QDebug>
#include <QDateTime>
#include "model/class_with_info.h"
class SocketThread : public QThread
{
    Q_OBJECT
public:
    explicit SocketThread(int descriptor,QObject * parent=0);
    ~SocketThread();

    void run();

signals:

public slots:
    onReadyRead();
    onDisconnected();

private:
    int SocketDescriptor;
    QTcpSocket * Socket;
};

#endif // SOCKETTHREAD_H
