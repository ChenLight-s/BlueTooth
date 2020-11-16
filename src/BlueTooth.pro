#-------------------------------------------------
#
# Project created by QtCreator 2016-07-20T11:45:49
#
#-------------------------------------------------

QT       += core gui
QT       += bluetooth

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

TARGET = BlueTooth
#TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

#CONFIG(release,debug|release):OBJECTS_DIR = ../tmp/release
#else:CONFIG(debug,debug|release):OBJECTS_DIR = ../tmp/debug

#CONFIG(release,debug|release):DESTDIR = ../bin/release
#else:CONFIG(debug,debug|release):DESTDIR = ../bin/debug

SOURCES += \
    main.cpp\
    control.cpp \
    form.cpp \
    mainwindow.cpp \
    deviceinfo.cpp \
    chatclient.cpp \
    paintyuan.cpp \
    writepaints.cpp

HEADERS  += \
    control.h \
    form.h\
    mainwindow.h \
    deviceinfo.h \
    chatclient.h \
    paintyuan.h \
    writepaints.h


FORMS    += \
    control.ui \
    form.ui\
    mainwindow.ui \
    deviceinfo.ui \
    paintyuan.ui \
    writepaints.ui

RESOURCES += \
    image.qrc

#RC_ICONS = Lunyeelogo.ico

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android-source
# Default rules for deployment.
#qnx: target.path = /tmp/$${TARGET}/bin
#else: unix:!android: target.path = /opt/$${TARGET}/bin
#!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    android-source/AndroidManifest.xml
