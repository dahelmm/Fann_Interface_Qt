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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_9;
    QGroupBox *gB_training;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *gB_stopEducate;
    QGridLayout *gridLayout_3;
    QRadioButton *rB_stop_bit;
    QRadioButton *rB_stop_mse;
    QCheckBox *cB_set_weights;
    QWidget *layoutWidget_2;
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
    QCheckBox *checkBox;
    QGroupBox *gB_paraneters_subsample;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QGroupBox *gB_training_set;
    QGridLayout *gridLayout_12;
    QGroupBox *gB_analysis;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *l_analysis_fileName;
    QLabel *l_analysis_count_pair;
    QLabel *l_analysis_count_input;
    QLabel *l_analysis_count_output;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lE_analysis_fileName;
    QLineEdit *lE_analysis_count_pair;
    QLineEdit *lE_analysis_count_input;
    QLineEdit *lE_analysis_count_output;
    QPushButton *pB_load_sample;
    QGroupBox *gB_graphic_N;
    QGroupBox *gB_create;
    QGridLayout *gridLayout_6;
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
    QCheckBox *cB_load_from_file;
    QPushButton *pB_create;
    QTabWidget *tW_grapfics;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1295, 665);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_9 = new QGridLayout(centralwidget);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gB_training = new QGroupBox(centralwidget);
        gB_training->setObjectName(QString::fromUtf8("gB_training"));
        gB_training->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gB_training->sizePolicy().hasHeightForWidth());
        gB_training->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(gB_training);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 20, 235, 98));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gB_stopEducate = new QGroupBox(layoutWidget);
        gB_stopEducate->setObjectName(QString::fromUtf8("gB_stopEducate"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gB_stopEducate->sizePolicy().hasHeightForWidth());
        gB_stopEducate->setSizePolicy(sizePolicy1);
        gridLayout_3 = new QGridLayout(gB_stopEducate);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        rB_stop_bit = new QRadioButton(gB_stopEducate);
        rB_stop_bit->setObjectName(QString::fromUtf8("rB_stop_bit"));

        gridLayout_3->addWidget(rB_stop_bit, 1, 0, 1, 1);

        rB_stop_mse = new QRadioButton(gB_stopEducate);
        rB_stop_mse->setObjectName(QString::fromUtf8("rB_stop_mse"));

        gridLayout_3->addWidget(rB_stop_mse, 0, 0, 1, 1);


        verticalLayout->addWidget(gB_stopEducate);

        cB_set_weights = new QCheckBox(layoutWidget);
        cB_set_weights->setObjectName(QString::fromUtf8("cB_set_weights"));

        verticalLayout->addWidget(cB_set_weights);

        layoutWidget_2 = new QWidget(gB_training);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 120, 308, 80));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        l_max_count_eras = new QLabel(layoutWidget_2);
        l_max_count_eras->setObjectName(QString::fromUtf8("l_max_count_eras"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(l_max_count_eras->sizePolicy().hasHeightForWidth());
        l_max_count_eras->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(l_max_count_eras);

        lE_max_count_eras = new QLineEdit(layoutWidget_2);
        lE_max_count_eras->setObjectName(QString::fromUtf8("lE_max_count_eras"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lE_max_count_eras->sizePolicy().hasHeightForWidth());
        lE_max_count_eras->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(lE_max_count_eras);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        l_ouput_report_eras = new QLabel(layoutWidget_2);
        l_ouput_report_eras->setObjectName(QString::fromUtf8("l_ouput_report_eras"));
        sizePolicy.setHeightForWidth(l_ouput_report_eras->sizePolicy().hasHeightForWidth());
        l_ouput_report_eras->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(l_ouput_report_eras);

        lE_ouput_report_eras = new QLineEdit(layoutWidget_2);
        lE_ouput_report_eras->setObjectName(QString::fromUtf8("lE_ouput_report_eras"));
        sizePolicy3.setHeightForWidth(lE_ouput_report_eras->sizePolicy().hasHeightForWidth());
        lE_ouput_report_eras->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(lE_ouput_report_eras);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        l_learning_error_value = new QLabel(layoutWidget_2);
        l_learning_error_value->setObjectName(QString::fromUtf8("l_learning_error_value"));
        sizePolicy.setHeightForWidth(l_learning_error_value->sizePolicy().hasHeightForWidth());
        l_learning_error_value->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(l_learning_error_value);

        lE_learning_error_value = new QLineEdit(layoutWidget_2);
        lE_learning_error_value->setObjectName(QString::fromUtf8("lE_learning_error_value"));
        sizePolicy3.setHeightForWidth(lE_learning_error_value->sizePolicy().hasHeightForWidth());
        lE_learning_error_value->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(lE_learning_error_value);


        verticalLayout_2->addLayout(horizontalLayout);

        pB_educate = new QPushButton(gB_training);
        pB_educate->setObjectName(QString::fromUtf8("pB_educate"));
        pB_educate->setGeometry(QRect(0, 210, 399, 23));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pB_educate->sizePolicy().hasHeightForWidth());
        pB_educate->setSizePolicy(sizePolicy4);
        checkBox = new QCheckBox(gB_training);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(10, 240, 201, 17));
        gB_paraneters_subsample = new QGroupBox(gB_training);
        gB_paraneters_subsample->setObjectName(QString::fromUtf8("gB_paraneters_subsample"));
        gB_paraneters_subsample->setGeometry(QRect(0, 260, 411, 131));
        layoutWidget1 = new QWidget(gB_paraneters_subsample);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 30, 380, 22));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_7->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_7->addWidget(lineEdit);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_7->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_7->addWidget(lineEdit_2);


        gridLayout_9->addWidget(gB_training, 0, 2, 1, 1);

        gB_training_set = new QGroupBox(centralwidget);
        gB_training_set->setObjectName(QString::fromUtf8("gB_training_set"));
        gB_training_set->setEnabled(false);
        sizePolicy.setHeightForWidth(gB_training_set->sizePolicy().hasHeightForWidth());
        gB_training_set->setSizePolicy(sizePolicy);
        gridLayout_12 = new QGridLayout(gB_training_set);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gB_analysis = new QGroupBox(gB_training_set);
        gB_analysis->setObjectName(QString::fromUtf8("gB_analysis"));
        gridLayout_4 = new QGridLayout(gB_analysis);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        l_analysis_fileName = new QLabel(gB_analysis);
        l_analysis_fileName->setObjectName(QString::fromUtf8("l_analysis_fileName"));

        verticalLayout_7->addWidget(l_analysis_fileName);

        l_analysis_count_pair = new QLabel(gB_analysis);
        l_analysis_count_pair->setObjectName(QString::fromUtf8("l_analysis_count_pair"));
        sizePolicy2.setHeightForWidth(l_analysis_count_pair->sizePolicy().hasHeightForWidth());
        l_analysis_count_pair->setSizePolicy(sizePolicy2);

        verticalLayout_7->addWidget(l_analysis_count_pair);

        l_analysis_count_input = new QLabel(gB_analysis);
        l_analysis_count_input->setObjectName(QString::fromUtf8("l_analysis_count_input"));
        sizePolicy2.setHeightForWidth(l_analysis_count_input->sizePolicy().hasHeightForWidth());
        l_analysis_count_input->setSizePolicy(sizePolicy2);

        verticalLayout_7->addWidget(l_analysis_count_input);

        l_analysis_count_output = new QLabel(gB_analysis);
        l_analysis_count_output->setObjectName(QString::fromUtf8("l_analysis_count_output"));
        sizePolicy2.setHeightForWidth(l_analysis_count_output->sizePolicy().hasHeightForWidth());
        l_analysis_count_output->setSizePolicy(sizePolicy2);

        verticalLayout_7->addWidget(l_analysis_count_output);


        gridLayout_4->addLayout(verticalLayout_7, 0, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        lE_analysis_fileName = new QLineEdit(gB_analysis);
        lE_analysis_fileName->setObjectName(QString::fromUtf8("lE_analysis_fileName"));

        verticalLayout_6->addWidget(lE_analysis_fileName);

        lE_analysis_count_pair = new QLineEdit(gB_analysis);
        lE_analysis_count_pair->setObjectName(QString::fromUtf8("lE_analysis_count_pair"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lE_analysis_count_pair->sizePolicy().hasHeightForWidth());
        lE_analysis_count_pair->setSizePolicy(sizePolicy5);

        verticalLayout_6->addWidget(lE_analysis_count_pair);

        lE_analysis_count_input = new QLineEdit(gB_analysis);
        lE_analysis_count_input->setObjectName(QString::fromUtf8("lE_analysis_count_input"));

        verticalLayout_6->addWidget(lE_analysis_count_input);

        lE_analysis_count_output = new QLineEdit(gB_analysis);
        lE_analysis_count_output->setObjectName(QString::fromUtf8("lE_analysis_count_output"));

        verticalLayout_6->addWidget(lE_analysis_count_output);


        gridLayout_4->addLayout(verticalLayout_6, 0, 1, 1, 1);


        gridLayout_12->addWidget(gB_analysis, 1, 1, 1, 1);

        pB_load_sample = new QPushButton(gB_training_set);
        pB_load_sample->setObjectName(QString::fromUtf8("pB_load_sample"));

        gridLayout_12->addWidget(pB_load_sample, 0, 0, 1, 2);

        gB_graphic_N = new QGroupBox(gB_training_set);
        gB_graphic_N->setObjectName(QString::fromUtf8("gB_graphic_N"));

        gridLayout_12->addWidget(gB_graphic_N, 2, 1, 1, 1);


        gridLayout_9->addWidget(gB_training_set, 0, 1, 1, 1);

        gB_create = new QGroupBox(centralwidget);
        gB_create->setObjectName(QString::fromUtf8("gB_create"));
        sizePolicy.setHeightForWidth(gB_create->sizePolicy().hasHeightForWidth());
        gB_create->setSizePolicy(sizePolicy);
        gridLayout_6 = new QGridLayout(gB_create);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        l_number_input = new QLabel(gB_create);
        l_number_input->setObjectName(QString::fromUtf8("l_number_input"));
        sizePolicy2.setHeightForWidth(l_number_input->sizePolicy().hasHeightForWidth());
        l_number_input->setSizePolicy(sizePolicy2);
        l_number_input->setMinimumSize(QSize(100, 15));

        gridLayout->addWidget(l_number_input, 0, 0, 1, 1);

        sB_number_input = new QSpinBox(gB_create);
        sB_number_input->setObjectName(QString::fromUtf8("sB_number_input"));
        sB_number_input->setValue(0);

        gridLayout->addWidget(sB_number_input, 0, 1, 1, 1);

        l_number_output = new QLabel(gB_create);
        l_number_output->setObjectName(QString::fromUtf8("l_number_output"));
        sizePolicy2.setHeightForWidth(l_number_output->sizePolicy().hasHeightForWidth());
        l_number_output->setSizePolicy(sizePolicy2);
        l_number_output->setMinimumSize(QSize(100, 15));

        gridLayout->addWidget(l_number_output, 1, 0, 1, 1);

        sB_number_output = new QSpinBox(gB_create);
        sB_number_output->setObjectName(QString::fromUtf8("sB_number_output"));
        sB_number_output->setValue(0);

        gridLayout->addWidget(sB_number_output, 1, 1, 1, 1);

        l_number_layers = new QLabel(gB_create);
        l_number_layers->setObjectName(QString::fromUtf8("l_number_layers"));
        sizePolicy2.setHeightForWidth(l_number_layers->sizePolicy().hasHeightForWidth());
        l_number_layers->setSizePolicy(sizePolicy2);
        l_number_layers->setMinimumSize(QSize(100, 15));

        gridLayout->addWidget(l_number_layers, 2, 0, 1, 1);

        sB_number_layers = new QSpinBox(gB_create);
        sB_number_layers->setObjectName(QString::fromUtf8("sB_number_layers"));
        sB_number_layers->setFrame(true);
        sB_number_layers->setReadOnly(false);
        sB_number_layers->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        sB_number_layers->setAccelerated(false);
        sB_number_layers->setSingleStep(1);
        sB_number_layers->setValue(0);

        gridLayout->addWidget(sB_number_layers, 2, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout, 0, 1, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_6->addItem(verticalSpacer_2, 1, 2, 1, 1);

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
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(cmbB_select_neurons->sizePolicy().hasHeightForWidth());
        cmbB_select_neurons->setSizePolicy(sizePolicy6);

        gridLayout_2->addWidget(cmbB_select_neurons, 1, 0, 1, 1);

        l_number_neurons = new QLabel(page);
        l_number_neurons->setObjectName(QString::fromUtf8("l_number_neurons"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(l_number_neurons->sizePolicy().hasHeightForWidth());
        l_number_neurons->setSizePolicy(sizePolicy7);
        l_number_neurons->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(l_number_neurons, 0, 0, 1, 2);

        sB_number_neurons = new QSpinBox(page);
        sB_number_neurons->setObjectName(QString::fromUtf8("sB_number_neurons"));
        QSizePolicy sizePolicy8(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(sB_number_neurons->sizePolicy().hasHeightForWidth());
        sB_number_neurons->setSizePolicy(sizePolicy8);
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
        sizePolicy2.setHeightForWidth(l_all_layers_neuron->sizePolicy().hasHeightForWidth());
        l_all_layers_neuron->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(l_all_layers_neuron);

        sB_all_neurons = new QSpinBox(page_2);
        sB_all_neurons->setObjectName(QString::fromUtf8("sB_all_neurons"));
        sizePolicy5.setHeightForWidth(sB_all_neurons->sizePolicy().hasHeightForWidth());
        sB_all_neurons->setSizePolicy(sizePolicy5);
        sB_all_neurons->setValue(0);

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
        sizePolicy6.setHeightForWidth(l_fun_activation_layers->sizePolicy().hasHeightForWidth());
        l_fun_activation_layers->setSizePolicy(sizePolicy6);

        horizontalLayout_5->addWidget(l_fun_activation_layers);

        cmbB_fun_activation_layers = new QComboBox(gB_create);
        cmbB_fun_activation_layers->addItem(QString());
        cmbB_fun_activation_layers->addItem(QString());
        cmbB_fun_activation_layers->addItem(QString());
        cmbB_fun_activation_layers->addItem(QString());
        cmbB_fun_activation_layers->addItem(QString());
        cmbB_fun_activation_layers->addItem(QString());
        cmbB_fun_activation_layers->addItem(QString());
        cmbB_fun_activation_layers->addItem(QString());
        cmbB_fun_activation_layers->addItem(QString());
        cmbB_fun_activation_layers->setObjectName(QString::fromUtf8("cmbB_fun_activation_layers"));
        QSizePolicy sizePolicy9(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(cmbB_fun_activation_layers->sizePolicy().hasHeightForWidth());
        cmbB_fun_activation_layers->setSizePolicy(sizePolicy9);
        cmbB_fun_activation_layers->setEditable(false);
        cmbB_fun_activation_layers->setFrame(true);

        horizontalLayout_5->addWidget(cmbB_fun_activation_layers);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        l_fun_activation_outputs = new QLabel(gB_create);
        l_fun_activation_outputs->setObjectName(QString::fromUtf8("l_fun_activation_outputs"));
        sizePolicy4.setHeightForWidth(l_fun_activation_outputs->sizePolicy().hasHeightForWidth());
        l_fun_activation_outputs->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(l_fun_activation_outputs);

        cmbB_fun_activation_outputs = new QComboBox(gB_create);
        cmbB_fun_activation_outputs->addItem(QString());
        cmbB_fun_activation_outputs->addItem(QString());
        cmbB_fun_activation_outputs->addItem(QString());
        cmbB_fun_activation_outputs->addItem(QString());
        cmbB_fun_activation_outputs->addItem(QString());
        cmbB_fun_activation_outputs->addItem(QString());
        cmbB_fun_activation_outputs->addItem(QString());
        cmbB_fun_activation_outputs->addItem(QString());
        cmbB_fun_activation_outputs->addItem(QString());
        cmbB_fun_activation_outputs->setObjectName(QString::fromUtf8("cmbB_fun_activation_outputs"));

        horizontalLayout_4->addWidget(cmbB_fun_activation_outputs);


        verticalLayout_4->addLayout(horizontalLayout_4);


        gridLayout_6->addLayout(verticalLayout_4, 4, 0, 1, 3);

        cB_load_from_file = new QCheckBox(gB_create);
        cB_load_from_file->setObjectName(QString::fromUtf8("cB_load_from_file"));

        gridLayout_6->addWidget(cB_load_from_file, 6, 0, 1, 2);

        pB_create = new QPushButton(gB_create);
        pB_create->setObjectName(QString::fromUtf8("pB_create"));
        sizePolicy1.setHeightForWidth(pB_create->sizePolicy().hasHeightForWidth());
        pB_create->setSizePolicy(sizePolicy1);

        gridLayout_6->addWidget(pB_create, 5, 0, 1, 2);


        gridLayout_9->addWidget(gB_create, 0, 0, 1, 1);

        tW_grapfics = new QTabWidget(centralwidget);
        tW_grapfics->setObjectName(QString::fromUtf8("tW_grapfics"));
        QSizePolicy sizePolicy10(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(tW_grapfics->sizePolicy().hasHeightForWidth());
        tW_grapfics->setSizePolicy(sizePolicy10);

        gridLayout_9->addWidget(tW_grapfics, 1, 0, 1, 3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1295, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        sW_neurons->setCurrentIndex(1);
        cmbB_fun_activation_layers->setCurrentIndex(0);
        tW_grapfics->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        gB_training->setTitle(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\203\321\207\320\265\320\275\320\270\320\265 \320\230\320\235\320\241", nullptr));
        gB_stopEducate->setTitle(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\270\321\202\320\265\321\200\320\270\320\271 \320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\270 \320\276\320\261\321\203\321\207\320\265\320\275\320\270\321\217:", nullptr));
        rB_stop_bit->setText(QCoreApplication::translate("MainWindow", "FANN_STOPFUNC_BIT", nullptr));
        rB_stop_mse->setText(QCoreApplication::translate("MainWindow", "FANN_STOPFUNC_MSE", nullptr));
        cB_set_weights->setText(QCoreApplication::translate("MainWindow", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \320\262\320\265\321\201\320\260 \320\270\320\267 \320\276\320\261\321\203\321\207\320\260\321\216\321\211\320\265\320\271 \320\262\321\213\320\261\320\276\321\200\320\272\320\270", nullptr));
        l_max_count_eras->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \321\207\320\270\321\201\320\273\320\276 \321\215\320\277\320\276\321\205", nullptr));
        l_ouput_report_eras->setText(QCoreApplication::translate("MainWindow", "\320\224\320\270\321\201\320\272\321\200\320\265\321\202 \320\262\321\213\320\262\320\276\320\264\320\260 \320\276\321\202\321\207\321\221\321\202 \320\262 \321\215\320\277\320\276\321\205\320\260\321\205", nullptr));
        l_learning_error_value->setText(QCoreApplication::translate("MainWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\276\321\210\320\270\320\261\320\272\320\270 \320\276\320\261\321\203\321\207\320\265\320\275\320\270\321\217", nullptr));
        pB_educate->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\203\321\207\320\270\321\202\321\214 \320\275\320\260 \320\277\320\276\320\273\320\275\320\276\320\271 \320\262\321\213\320\261\320\276\321\200\320\272\320\265", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\321\214 \321\207\320\260\321\201\321\202\320\270\321\207\320\275\321\203\321\216 \320\262\321\213\320\261\320\276\321\200\320\272\321\203", nullptr));
        gB_paraneters_subsample->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\277\320\276\320\264\320\262\321\213\320\261\320\276\321\200\320\272\320\270", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\202\320\262\320\265\321\200\320\260\320\273 \320\277\320\260\321\200, \320\276\321\202:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\264\320\276:", nullptr));
        gB_training_set->setTitle(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\203\321\207\320\260\321\216\321\211\320\260\321\217 \320\262\321\213\320\261\320\276\321\200\320\272\320\260", nullptr));
        gB_analysis->setTitle(QCoreApplication::translate("MainWindow", "\320\220\320\275\320\260\320\273\320\270\320\267 \320\262\321\213\320\261\320\276\321\200\320\272\320\270", nullptr));
        l_analysis_fileName->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \321\204\320\260\320\271\320\273\320\260", nullptr));
        l_analysis_count_pair->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\320\260\321\200", nullptr));
        l_analysis_count_input->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\321\205\320\276\320\264\320\276\320\262", nullptr));
        l_analysis_count_output->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\321\213\321\205\320\276\320\264\320\276\320\262", nullptr));
        pB_load_sample->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\276\320\261\321\203\321\207\320\260\321\216\321\211\321\203\321\216 \320\262\321\213\320\261\320\276\321\200\320\272\321\203 (*.train)", nullptr));
        gB_graphic_N->setTitle(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272 N", nullptr));
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
        cmbB_fun_activation_layers->setItemText(2, QCoreApplication::translate("MainWindow", "FANN_THRESHOLD_SYMMETRIC", nullptr));
        cmbB_fun_activation_layers->setItemText(3, QCoreApplication::translate("MainWindow", "FANN_SIGMOID", nullptr));
        cmbB_fun_activation_layers->setItemText(4, QCoreApplication::translate("MainWindow", "FANN_SIGMOID_STEPWISE", nullptr));
        cmbB_fun_activation_layers->setItemText(5, QCoreApplication::translate("MainWindow", "FANN_SIGMOID_SYMMETRIC", nullptr));
        cmbB_fun_activation_layers->setItemText(6, QCoreApplication::translate("MainWindow", "FANN_SIGMOID_SYMMETRIC_STEPWISE", nullptr));
        cmbB_fun_activation_layers->setItemText(7, QCoreApplication::translate("MainWindow", "FANN_GAUSSIAN", nullptr));
        cmbB_fun_activation_layers->setItemText(8, QCoreApplication::translate("MainWindow", "FANN_GAUSSIAN_SYMMETRIC", nullptr));

        l_fun_activation_outputs->setText(QCoreApplication::translate("MainWindow", "\320\244\321\203\320\275\320\272\321\206\320\270\321\217 \320\260\320\272\321\202\320\270\320\262\320\260\321\206\320\270\320\270 \320\264\320\273\321\217 \320\262\321\213\321\205\320\276\320\264\320\276\320\262:", nullptr));
        cmbB_fun_activation_outputs->setItemText(0, QCoreApplication::translate("MainWindow", "FANN_LINEAR", nullptr));
        cmbB_fun_activation_outputs->setItemText(1, QCoreApplication::translate("MainWindow", "FANN_THRESHOLD", nullptr));
        cmbB_fun_activation_outputs->setItemText(2, QCoreApplication::translate("MainWindow", "FANN_THRESHOLD_SYMMETRIC", nullptr));
        cmbB_fun_activation_outputs->setItemText(3, QCoreApplication::translate("MainWindow", "FANN_SIGMOID", nullptr));
        cmbB_fun_activation_outputs->setItemText(4, QCoreApplication::translate("MainWindow", "FANN_SIGMOID_STEPWISE", nullptr));
        cmbB_fun_activation_outputs->setItemText(5, QCoreApplication::translate("MainWindow", "FANN_SIGMOID_SYMMETRIC", nullptr));
        cmbB_fun_activation_outputs->setItemText(6, QCoreApplication::translate("MainWindow", "FANN_SIGMOID_SYMMETRIC_STEPWISE", nullptr));
        cmbB_fun_activation_outputs->setItemText(7, QCoreApplication::translate("MainWindow", "FANN_GAUSSIAN", nullptr));
        cmbB_fun_activation_outputs->setItemText(8, QCoreApplication::translate("MainWindow", "FANN_GAUSSIAN_SYMMETRIC", nullptr));

        cB_load_from_file->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260 (*.net)", nullptr));
        pB_create->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\230\320\235\320\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
