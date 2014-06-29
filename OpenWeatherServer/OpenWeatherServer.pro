#-------------------------------------------------
#
# Project created by QtCreator 2014-06-28T16:12:42
#
#-------------------------------------------------

QT       += core

QT       -= gui

QT       += dbus

QT       += network

TARGET = OpenWeatherServer
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    weatherservice.cpp \
    weatherifadaptor.cpp

HEADERS += \
    weatherservice.h \
    weatherifadaptor.h
