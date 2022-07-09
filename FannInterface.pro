QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    src/fann.c \
    src/fann_cascade.c \
    src/fann_error.c \
    src/fann_io.c \
    src/fann_train.c \
    src/fann_train_data.c

HEADERS += \
    mainwindow.h \
    src/include/config.h \
    src/include/fann.h \
    src/include/fann_activation.h \
    src/include/fann_cascade.h \
    src/include/fann_cpp.h \
    src/include/fann_data.h \
    src/include/fann_data_cpp.h \
    src/include/fann_error.h \
    src/include/fann_internal.h \
    src/include/fann_io.h \
    src/include/fann_train.h \
    src/include/fann_training_data_cpp.h \
    src/include/fixedfann.h \
    src/include/floatfann.h \
    src/include/parallel_fann.h \
    src/include/parallel_fann.hpp

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    src/CMakeLists.txt \
    src/include/CMakeLists.txt
