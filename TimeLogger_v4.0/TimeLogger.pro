#-------------------------------------------------
#
# Project created by QtCreator 2019-03-08T13:47:01
#
#-------------------------------------------------

QT       += core gui charts
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TimeLogger
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
#DEFINES += ADMIN

QMAKE_CFLAGS += -std=c99

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    adminmode.cpp \
    assignprojectdialog.cpp \
    exitdialog.cpp \
    getuserreport.cpp \
        main.cpp \
        login.cpp \
    timestatus.cpp \
    addtimedialog.cpp \
    mydatabase.cpp \
    buttons.cpp

HEADERS += \
    adminmode.h \
    assignprojectdialog.h \
    exitdialog.h \
    getuserreport.h \
        login.h \
    timestatus.h \
    addtimedialog.h \
    mydatabase.h \
    buttons.h

FORMS += \
    adminmode.ui \
    assignprojectdialog.ui \
    exitdialog.ui \
    getuserreport.ui \
        login.ui \
    timestatus.ui \
    addtimedialog.ui \
    buttons.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
