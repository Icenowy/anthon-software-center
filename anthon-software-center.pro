#-------------------------------------------------
#
# Project created by QtCreator 2013-08-28T12:41:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = anthon-software-center
TEMPLATE = app


SOURCES += main.cpp\
        softwarecenter.cpp \
    softman.cpp

HEADERS  += softwarecenter.h \
    softman.h

FORMS    += softwarecenter.ui \
    softman.ui

unix: CONFIG += link_pkgconfig
unix: PKGCONFIG += packagekit-qt2

RESOURCES +=
