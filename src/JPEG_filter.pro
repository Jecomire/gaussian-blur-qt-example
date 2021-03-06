QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = JPEG_filter
TEMPLATE = app


SOURCES += main.cpp\
           jpegfilter.cpp \
    settingsdialog.cpp \
    gaussianblur.cpp

HEADERS  += \
    settingsdialog.h \
    gaussianblur.h \
    jpegfilter.h

FORMS    += jpegfilter.ui \
    settingsdialog.ui

RESOURCES +=
