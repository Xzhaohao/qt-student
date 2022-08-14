QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++14

RC_ICONS += logo.ico

SOURCES += \
    main.cpp \
    views/login/Login.cpp \
    views/main/MainWindow.cpp \
    utils/studentSql.cpp

HEADERS += \
    views/login/Login.h \
    views/main/MainWindow.h \
    utils/studentSql.h

FORMS += \
    views/login/Login.ui \
    views/main/MainWindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

msvc {
    QMAKE_CFLAGS += /utf-8
    QMAKE_CXXFLAGS += /utf-8
}

RESOURCES += \
    res.qrc
