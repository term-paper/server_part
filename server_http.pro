#-------------------------------------------------
#
# Project created by QtCreator 2015-09-06T15:51:20
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = server_http
TEMPLATE = app

DEPENDPATH += .
INCLUDEPATH += .
include(model/model.pri)

SOURCES += main.cpp \
    server.cpp \
    socketthread.cpp

HEADERS  += \
    server.h \
    socketthread.h

CONFIG += mobility
MOBILITY = 

