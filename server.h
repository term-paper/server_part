#ifndef SERVER_H
#define SERVER_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QDebug>
class Server : public QTcpServer
{
    Q_OBJECT
public:
    explicit Server(QObject * parent=0);

    void incomingConnection(int handle);
    ~Server();

public slots:

};

#endif // SERVER_H
