#-------------------------------------------------
#
# Project created by QtCreator 2014-06-28T17:38:31
#
#-------------------------------------------------

QT       += core

QT       -= gui

QT       += dbus

TARGET = OpenWeatherClient
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    weatherclient.cpp \
    weatherif.cpp

HEADERS += \
    weatherclient.h \
    weatherif.h
