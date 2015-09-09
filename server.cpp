#include "server.h"
#include "socketthread.h"
Server::Server(QObject *parent):
    QTcpServer(parent)
{
    if (listen(QHostAddress::Any,80))
    {
        qDebug()<<"listening";
    }
    else
    {
        qDebug()<<"starting error"<<errorString();
    }
}

void Server::incomingConnection(int handle)
{
    SocketThread *thread=new SocketThread(handle);
    connect (thread,SIGNAL(finished()),thread,SLOT(deleteLater()));
    thread->start();
}

Server::~Server()
{

}

