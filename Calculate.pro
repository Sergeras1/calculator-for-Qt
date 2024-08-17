QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bmiclass.cpp \
    dataclass.cpp \
    discountclass.cpp \
    history.cpp \
    lenghtclass.cpp \
    main.cpp \
    mainwindow.cpp \
    speedclass.cpp

HEADERS += \
    bmiclass.h \
    dataclass.h \
    discountclass.h \
    history.h \
    lenghtclass.h \
    mainwindow.h \
    speedclass.h

FORMS += \
    bmiclass.ui \
    dataclass.ui \
    discountclass.ui \
    history.ui \
    lenghtclass.ui \
    mainwindow.ui \
    speedclass.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
