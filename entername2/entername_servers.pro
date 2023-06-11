QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chat.cpp \
    chat2.cpp \
    chatpage.cpp \
    chatpage2.cpp \
    chatpage3.cpp \
    entrycode.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    chat.h \
    chat2.h \
    chatpage.h \
    chatpage2.h \
    chatpage3.h \
    entrycode.h \
    mainwindow.h

FORMS += \
    chat2.ui \
    chatpage.ui \
    chatpage2.ui \
    chatpage3.ui \
    entrycode.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    capchaha.qrc \
    cheshmha.qrc

SUBDIRS += \
    ../../../Downloads/QTcpSocket-master/QTcpSocket-master/QTCPServer/QTCPServer.pro
