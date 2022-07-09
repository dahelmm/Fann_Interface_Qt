/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *gB_create;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *l_number_input;
    QSpinBox *sB_number_input;
    QLabel *l_number_output;
    QSpinBox *sB_number_output;
    QLabel *l_number_layers;
    QSpinBox *sB_number_layers;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *cB_all_or_alone;
    QStackedWidget *sW_neurons;
    QWidget *page;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_2;
    QComboBox *cmbB_select_neurons;
    QLabel *l_number_neurons;
    QSpinBox *sB_number_neurons;
    QWidget *page_2;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *l_all_layers_neuron;
    QSpinBox *sB_all_neurons;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *l_fun_activation_layers;
    QComboBox *cmbB_fun_activation_layers;
    QHBoxLayout *horizontalLayout_4;
    QLabel *l_fun_activation_outputs;
    QComboBox *cmbB_fun_activation_outputs;
    QPushButton *pB_create;
    QCheckBox *cB_load_from_file;
    QGroupBox *gB_educate_and_test;
    QGridLayout *gridLayout_4;
    QPushButton *pB_load_sample;
    QVBoxLayout *verticalLayout;
    QGroupBox *gB_stopEducate;
    QGridLayout *gridLayout_3;
    QRadioButton *rB_stop_mse;
    QRadioButton *rB_stop_bit;
    QCheckBox *cB_set_weights;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *l_max_count_eras;
    QLineEdit *lE_max_count_eras;
    QHBoxLayout *horizontalLayout_2;
    QLabel *l_ouput_report_eras;
    QLineEdit *lE_ouput_report_eras;
    QHBoxLayout *horizontalLayout;
    QLabel *l_learning_error_value;
    QLineEdit *lE_learning_error_value;
    QPushButton *pB_educate;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pB_testing;
    QCheckBox *cB_take_sample;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1230, 629);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gB_create = new QGroupBox(centralwidget);
        gB_create->setObjectName(QString::fromUtf8("gB_create"));
        gB_create->setGeometry(QRect(70, 30, 464, 399));
        gridLayout_6 = new QGridLayout(gB_create);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalSpacer = new QSpacerItem(247, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 0, 0, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        l_number_input = new QLabel(gB_create);
        l_number_input->setObjectName(QString::fromUtf8("l_number_input"));
        l_number_input->setMinimumSize(QSize(100, 15));

        gridLayout->addWidget(l_number_input, 0, 0, 1, 1);

        sB_number_input = new QSpinBox(gB_create);
        sB_number_input->setObjectName(QString::fromUtf8("sB_number_input"));

        gridLayout->addWidget(sB_number_input, 0, 1, 1, 1);

        l_number_output = new QLabel(gB_create);
        l_number_output->setObjectName(QString::fromUtf8("l_number_output"));
        l_number_output->setMinimumSize(QSize(100, 15));

        gridLayout->addWidget(l_number_output, 1, 0, 1, 1);

        sB_number_output = new QSpinBox(gB_create);
        sB_number_output->setObjectName(QString::fromUtf8("sB_number_output"));

        gridLayout->addWidget(sB_number_output, 1, 1, 1, 1);

        l_number_layers = new QLabel(gB_create);
        l_number_layers->setObjectName(QString::fromUtf8("l_number_layers"));
        l_number_layers->setMinimumSize(QSize(100, 15));

        gridLayout->addWidget(l_number_layers, 2, 0, 1, 1);

        sB_number_layers = new QSpinBox(gB_create);
        sB_number_layers->setObjectName(QString::fromUtf8("sB_number_layers"));

        gridLayout->addWidget(sB_number_layers, 2, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout, 0, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_6->addItem(verticalSpacer_2, 1, 1, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        cB_all_or_alone = new QCheckBox(gB_create);
        cB_all_or_alone->setObjectName(QString::fromUtf8("cB_all_or_alone"));

        verticalLayout_5->addWidget(cB_all_or_alone);

        sW_neurons = new QStackedWidget(gB_create);
        sW_neurons->setObjectName(QString::fromUtf8("sW_neurons"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_5 = new QGridLayout(page);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        cmbB_select_neurons = new QComboBox(page);
        cmbB_select_neurons->setObjectName(QString::fromUtf8("cmbB_select_neurons"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbB_select_neurons->sizePolicy().hasHeightForWidth());
        cmbB_select_neurons->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(cmbB_select_neurons, 1, 0, 1, 1);

        l_number_neurons = new QLabel(page);
        l_number_neurons->setObjectName(QString::fromUtf8("l_number_neurons"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(l_number_neurons->sizePolicy().hasHeightForWidth());
        l_number_neurons->setSizePolicy(sizePolicy1);
        l_number_neurons->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(l_number_neurons, 0, 0, 1, 2);

        sB_number_neurons = new QSpinBox(page);
        sB_number_neurons->setObjectName(QString::fromUtf8("sB_number_neurons"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sB_number_neurons->sizePolicy().hasHeightForWidth());
        sB_number_neurons->setSizePolicy(sizePolicy2);
        sB_number_neurons->setWrapping(false);
        sB_number_neurons->setReadOnly(false);
        sB_number_neurons->setKeyboardTracking(true);

        gridLayout_2->addWidget(sB_number_neurons, 1, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 1, 0, 1, 1);

        sW_neurons->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_7 = new QGridLayout(page_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        l_all_layers_neuron = new QLabel(page_2);
        l_all_layers_neuron->setObjectName(QString::fromUtf8("l_all_layers_neuron"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(l_all_layers_neuron->sizePolicy().hasHeightForWidth());
        l_all_layers_neuron->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(l_all_layers_neuron);

        sB_all_neurons = new QSpinBox(page_2);
        sB_all_neurons->setObjectName(QString::fromUtf8("sB_all_neurons"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(sB_all_neurons->sizePolicy().hasHeightForWidth());
        sB_all_neurons->setSizePolicy(sizePolicy4);

        horizontalLayout_6->addWidget(sB_all_neurons);


        gridLayout_7->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        sW_neurons->addWidget(page_2);

        verticalLayout_5->addWidget(sW_neurons);


        gridLayout_6->addLayout(verticalLayout_5, 2, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_6->addItem(verticalSpacer, 3, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        l_fun_activation_layers = new QLabel(gB_create);
        l_fun_activation_layers->setObjectName(QString::fromUtf8("l_fun_activation_layers"));
        sizePolicy.setHeightForWidth(l_fun_activation_layers->sizePolicy().hasHeightForWidth());
        l_fun_activation_layers->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(l_fun_activation_layers);

        cmbB_fun_activation_layers = new QComboBox(gB_create);
        cmbB_fun_activation_layers->addItem(QString());
        cmbB_fun_activation_layers->addItem(QString());
        cmbB_fun_activation_layers->addItem(QString());
        cmbB_fun_activation_layers->setObjectName(QString::fromUtf8("cmbB_fun_activation_layers"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(cmbB_fun_activation_layers->sizePolicy().hasHeightForWidth());
        cmbB_fun_activation_layers->setSizePolicy(sizePolicy5);

        horizontalLayout_5->addWidget(cmbB_fun_activation_layers);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        l_fun_activation_outputs = new QLabel(gB_create);
        l_fun_activation_outputs->setObjectName(QString::fromUtf8("l_fun_activation_outputs"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(l_fun_activation_outputs->sizePolicy().hasHeightForWidth());
        l_fun_activation_outputs->setSizePolicy(sizePolicy6);

        horizontalLayout_4->addWidget(l_fun_activation_outputs);

        cmbB_fun_activation_outputs = new QComboBox(gB_create);
        cmbB_fun_activation_outputs->addItem(QString());
        cmbB_fun_activation_outputs->addItem(QString());
        cmbB_fun_activation_outputs->addItem(QString());
        cmbB_fun_activation_outputs->setObjectName(QString::fromUtf8("cmbB_fun_activation_outputs"));

        horizontalLayout_4->addWidget(cmbB_fun_activation_outputs);


        verticalLayout_4->addLayout(horizontalLayout_4);


        gridLayout_6->addLayout(verticalLayout_4, 4, 0, 1, 3);

        pB_create = new QPushButton(gB_create);
        pB_create->setObjectName(QString::fromUtf8("pB_create"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(pB_create->sizePolicy().hasHeightForWidth());
        pB_create->setSizePolicy(sizePolicy7);

        gridLayout_6->addWidget(pB_create, 5, 0, 1, 3);

        cB_load_from_file = new QCheckBox(gB_create);
        cB_load_from_file->setObjectName(QString::fromUtf8("cB_load_from_file"));

        gridLayout_6->addWidget(cB_load_from_file, 6, 0, 1, 1);

        gB_educate_and_test = new QGroupBox(centralwidget);
        gB_educate_and_test->setObjectName(QString::fromUtf8("gB_educate_and_test"));
        gB_educate_and_test->setEnabled(false);
        gB_educate_and_test->setGeometry(QRect(590, 30, 511, 371));
        gridLayout_4 = new QGridLayout(gB_educate_and_test);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pB_load_sample = new QPushButton(gB_educate_and_test);
        pB_load_sample->setObjectName(QString::fromUtf8("pB_load_sample"));

        gridLayout_4->addWidget(pB_load_sample, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gB_stopEducate = new QGroupBox(gB_educate_and_test);
        gB_stopEducate->setObjectName(QString::fromUtf8("gB_stopEducate"));
        sizePolicy7.setHeightForWidth(gB_stopEducate->sizePolicy().hasHeightForWidth());
        gB_stopEducate->setSizePolicy(sizePolicy7);
        gridLayout_3 = new QGridLayout(gB_stopEducate);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        rB_stop_mse = new QRadioButton(gB_stopEducate);
        rB_stop_mse->setObjectName(QString::fromUtf8("rB_stop_mse"));

        gridLayout_3->addWidget(rB_stop_mse, 0, 0, 1, 1);

        rB_stop_bit = new QRadioButton(gB_stopEducate);
        rB_stop_bit->setObjectName(QString::fromUtf8("rB_stop_bit"));

        gridLayout_3->addWidget(rB_stop_bit, 1, 0, 1, 1);


        verticalLayout->addWidget(gB_stopEducate);

        cB_set_weights = new QCheckBox(gB_educate_and_test);
        cB_set_weights->setObjectName(QString::fromUtf8("cB_set_weights"));

        verticalLayout->addWidget(cB_set_weights);


        gridLayout_4->addLayout(verticalLayout, 1, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(174, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        l_max_count_eras = new QLabel(gB_educate_and_test);
        l_max_count_eras->setObjectName(QString::fromUtf8("l_max_count_eras"));
        sizePolicy3.setHeightForWidth(l_max_count_eras->sizePolicy().hasHeightForWidth());
        l_max_count_eras->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(l_max_count_eras);

        lE_max_count_eras = new QLineEdit(gB_educate_and_test);
        lE_max_count_eras->setObjectName(QString::fromUtf8("lE_max_count_eras"));
        QSizePolicy sizePolicy8(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(lE_max_count_eras->sizePolicy().hasHeightForWidth());
        lE_max_count_eras->setSizePolicy(sizePolicy8);

        horizontalLayout_3->addWidget(lE_max_count_eras);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        l_ouput_report_eras = new QLabel(gB_educate_and_test);
        l_ouput_report_eras->setObjectName(QString::fromUtf8("l_ouput_report_eras"));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(l_ouput_report_eras->sizePolicy().hasHeightForWidth());
        l_ouput_report_eras->setSizePolicy(sizePolicy9);

        horizontalLayout_2->addWidget(l_ouput_report_eras);

        lE_ouput_report_eras = new QLineEdit(gB_educate_and_test);
        lE_ouput_report_eras->setObjectName(QString::fromUtf8("lE_ouput_report_eras"));
        sizePolicy8.setHeightForWidth(lE_ouput_report_eras->sizePolicy().hasHeightForWidth());
        lE_ouput_report_eras->setSizePolicy(sizePolicy8);

        horizontalLayout_2->addWidget(lE_ouput_report_eras);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        l_learning_error_value = new QLabel(gB_educate_and_test);
        l_learning_error_value->setObjectName(QString::fromUtf8("l_learning_error_value"));
        sizePolicy9.setHeightForWidth(l_learning_error_value->sizePolicy().hasHeightForWidth());
        l_learning_error_value->setSizePolicy(sizePolicy9);

        horizontalLayout->addWidget(l_learning_error_value);

        lE_learning_error_value = new QLineEdit(gB_educate_and_test);
        lE_learning_error_value->setObjectName(QString::fromUtf8("lE_learning_error_value"));
        sizePolicy8.setHeightForWidth(lE_learning_error_value->sizePolicy().hasHeightForWidth());
        lE_learning_error_value->setSizePolicy(sizePolicy8);

        horizontalLayout->addWidget(lE_learning_error_value);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout_4->addLayout(verticalLayout_2, 2, 1, 1, 1);

        pB_educate = new QPushButton(gB_educate_and_test);
        pB_educate->setObjectName(QString::fromUtf8("pB_educate"));
        sizePolicy6.setHeightForWidth(pB_educate->sizePolicy().hasHeightForWidth());
        pB_educate->setSizePolicy(sizePolicy6);

        gridLayout_4->addWidget(pB_educate, 3, 0, 1, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pB_testing = new QPushButton(gB_educate_and_test);
        pB_testing->setObjectName(QString::fromUtf8("pB_testing"));
        sizePolicy6.setHeightForWidth(pB_testing->sizePolicy().hasHeightForWidth());
        pB_testing->setSizePolicy(sizePolicy6);

        verticalLayout_3->addWidget(pB_testing);

        cB_take_sample = new QCheckBox(gB_educate_and_test);
        cB_take_sample->setObjectName(QString::fromUtf8("cB_take_sample"));

        verticalLayout_3->addWidget(cB_take_sample);


        gridLayout_4->addLayout(verticalLayout_3, 4, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1230, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        sW_neurons->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        gB_create->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \320\230\320\235\320\241", nullptr));
        l_number_input->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\321\205\320\276\320\264\320\276\320\262:", nullptr));
        l_number_output->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\321\213\321\205\320\276\320\264\320\276\320\262:", nullptr));
        l_number_layers->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\320\272\321\200\321\213\321\202\321\213\321\205 \321\201\320\273\320\276\320\265\320\262:", nullptr));
        cB_all_or_alone->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\262\320\260\321\202\321\214 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\275\320\265\320\271\321\200\320\276\320\275\320\276\320\262 \320\272\320\260\320\266\320\264\320\276\320\274\321\203 \321\201\320\273\320\276\321\216", nullptr));
        l_number_neurons->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\275\320\265\320\271\321\200\320\276\320\275\320\276\320\262 \320\262:", nullptr));
        l_all_layers_neuron->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\275\320\265\320\271\321\200\320\276\320\275\320\276\320\262 \320\262 \320\272\320\260\320\266\320\264\320\276\320\274 \321\201\320\273\320\276\320\265:", nullptr));
        l_fun_activation_layers->setText(QCoreApplication::translate("MainWindow", "\320\244\321\203\320\275\320\272\321\206\320\270\321\217 \320\260\320\272\321\202\320\270\320\262\320\260\321\206\320\270\320\270 \320\264\320\273\321\217 \321\201\320\273\320\276\321\221\320\262:", nullptr));
        cmbB_fun_activation_layers->setItemText(0, QCoreApplication::translate("MainWindow", "FANN_LINEAR", nullptr));
        cmbB_fun_activation_layers->setItemText(1, QCoreApplication::translate("MainWindow", "FANN_THRESHOLD", nullptr));
        cmbB_fun_activation_layers->setItemText(2, QCoreApplication::translate("MainWindow", "FANN_SIGMOID", nullptr));

        l_fun_activation_outputs->setText(QCoreApplication::translate("MainWindow", "\320\244\321\203\320\275\320\272\321\206\320\270\321\217 \320\260\320\272\321\202\320\270\320\262\320\260\321\206\320\270\320\270 \320\264\320\273\321\217 \320\262\321\213\321\205\320\276\320\264\320\276\320\262:", nullptr));
        cmbB_fun_activation_outputs->setItemText(0, QCoreApplication::translate("MainWindow", "FANN_LINEAR", nullptr));
        cmbB_fun_activation_outputs->setItemText(1, QCoreApplication::translate("MainWindow", "FANN_THRESHOLD", nullptr));
        cmbB_fun_activation_outputs->setItemText(2, QCoreApplication::translate("MainWindow", "FANN_SIGMOID", nullptr));

        pB_create->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\230\320\235\320\241", nullptr));
        cB_load_from_file->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260 (*.net)", nullptr));
        gB_educate_and_test->setTitle(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\203\321\207\320\265\320\275\320\270\320\265 \320\270 \321\202\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\230\320\235\320\241", nullptr));
        pB_load_sample->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\276\320\261\321\203\321\207\320\260\321\216\321\211\321\203\321\216 \320\262\321\213\320\261\320\276\321\200\320\272\321\203 (*.data)", nullptr));
        gB_stopEducate->setTitle(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\270\321\202\320\265\321\200\320\270\320\271 \320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\270 \320\276\320\261\321\203\321\217\320\265\320\275\320\270\321\217:", nullptr));
        rB_stop_mse->setText(QCoreApplication::translate("MainWindow", "FANN_STOPFUNC_MSE", nullptr));
        rB_stop_bit->setText(QCoreApplication::translate("MainWindow", "FANN_STOPFUNC_BIT", nullptr));
        cB_set_weights->setText(QCoreApplication::translate("MainWindow", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \320\262\320\265\321\201\320\260 \320\270\320\267 \320\276\320\261\321\203\321\207\320\260\321\216\321\211\320\265\320\271 \320\262\321\213\320\261\320\276\321\200\320\272\320\270", nullptr));
        l_max_count_eras->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \321\207\320\270\321\201\320\273\320\276 \321\215\320\277\320\276\321\205", nullptr));
        l_ouput_report_eras->setText(QCoreApplication::translate("MainWindow", "\320\224\320\270\321\201\320\272\321\200\320\265\321\202 \320\262\321\213\320\262\320\276\320\264\320\260 \320\276\321\202\321\207\321\221\321\202 \320\262 \321\215\320\277\320\276\321\205\320\260\321\205", nullptr));
        l_learning_error_value->setText(QCoreApplication::translate("MainWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\276\321\210\320\270\320\261\320\272\320\270 \320\276\320\261\321\203\321\207\320\265\320\275\320\270\321\217", nullptr));
        pB_educate->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\203\321\207\320\270\321\202\321\214 \320\230\320\235\320\241", nullptr));
        pB_testing->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\230\320\235\320\241", nullptr));
        cB_take_sample->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260 \320\276\321\201\320\275\320\276\320\262\320\265 \320\270\320\274\320\265\321\216\321\211\320\265\320\271\321\201\321\217 \320\262\321\213\320\261\320\276\321\200\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
