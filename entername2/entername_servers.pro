QT       += core gui network sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    client.cpp \
    entrycode.cpp \
    main.cpp \
    mainwindow.cpp \
    safhepishvaz.cpp \
    server.cpp

HEADERS += \
    client.h \
    entrycode.h \
    mainwindow.h \
    safhepishvaz.h \
    server.h

FORMS += \
    client.ui \
    entrycode.ui \
    mainwindow.ui \
    safhepishvaz.ui \
    server.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    capchaha.qrc \
    chat_icons.qrc \
    cheshmha.qrc \
    logo.qrc

SUBDIRS += \
    ../../../Downloads/QTcpSocket-master/QTcpSocket-master/QTCPServer/QTCPServer.pro
