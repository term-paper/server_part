#-------------------------------------------------
#
# Project created by QtCreator 2015-09-06T15:51:20
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = server_http
TEMPLATE = app


SOURCES += main.cpp \
    server.cpp \
    socketthread.cpp \
    serializedbase.cpp \
    class_with_info.cpp

HEADERS  += \
    server.h \
    socketthread.h \
    serializedbase.h \
    class_with_info.h

CONFIG += mobility
MOBILITY = 

