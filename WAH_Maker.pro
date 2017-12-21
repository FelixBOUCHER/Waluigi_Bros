#-------------------------------------------------
#
# Project created by QtCreator 2017-11-24T08:14:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WAH_Maker
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    bullet.cpp \
    Waluigi.cpp \
    game.cpp \
    enemy.cpp \
    platform.cpp \
    powerup.cpp \
    wall.cpp \
    level.cpp \
    level_block.cpp

HEADERS  += mainwindow.h \
    bullet.h \
    Waluigi.h \
    game.h \
    enemy.h \
    platform.h \
    powerup.h \
    wall.h \
    level.h \
    level_block.h

FORMS    += mainwindow.ui

DISTFILES +=

RESOURCES += \
    res.qrc
