# ----------------------------------------------------
# This file is generated by the Qt Visual Studio Tools.
# ------------------------------------------------------

TEMPLATE = app
TARGET = SerialPort_test
DESTDIR = ../x64/Debug
QT += core gui widgets serialport
CONFIG += debug
DEFINES += _WINDOWS _UNICODE _ENABLE_EXTENDED_ALIGNED_STORAGE WIN64 _UNICODE _ENABLE_EXTENDED_ALIGNED_STORAGE WIN64 QT_DLL QT_SERIALPORT_LIB QT_WIDGETS_LIB QT_WIDGETS_LIB QT_SERIALPORT_LIB
INCLUDEPATH += ./GeneratedFiles/$(ConfigurationName) \
    ./GeneratedFiles \
    . \
    ./GeneratedFiles \
    ./GeneratedFiles/$(ConfigurationName) \
    $(QTDIR)/mkspecs/win32-msvc
LIBS += -L"../../../../../../../../openssl/lib" \
    -L"../../../../../../../../Utils/my_sql/mysql-5.6.11-winx64/lib" \
    -L"../../../../../../../../Utils/postgresql/pgsql/lib" \
    -lshell32
DEPENDPATH += .
MOC_DIR += ./GeneratedFiles
OBJECTS_DIR += debug
UI_DIR += ./GeneratedFiles
RCC_DIR += ./GeneratedFiles
include(SerialPort_test.pri)
