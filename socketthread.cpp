#include "socketthread.h"
#include <Qt>
#include <QDataStream>
#include <QByteArray>
SocketThread::SocketThread(int descriptor, QObject *parent):
    QThread(parent), SocketDescriptor(descriptor)
{
}

SocketThread::~SocketThread()
{}

void SocketThread::run()
{
    Socket=new QTcpSocket();
    Socket->setSocketDescriptor(SocketDescriptor);

    connect (Socket,SIGNAL(readyRead()),this,SLOT(onReadyRead()),Qt::DirectConnection);
    connect (Socket,SIGNAL(disconnected()),this,SLOT(onDisconnected()),Qt::DirectConnection);

    exec();
}

SocketThread::onReadyRead()
{
    class_with_info info;

    QByteArray  arrBlock;
    QDataStream out(&arrBlock, QIODevice::ReadWrite);

    arrBlock= Socket->readAll();

    info.DeSerialize(&out);
    info.print();

    Socket->disconnectFromHost();
    Socket->close();
}

SocketThread::onDisconnected()
{
    quit();
}
