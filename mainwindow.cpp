#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFile>
#include <QFileDialog>
#include <QMessageBox>

/*
#ifdef __cplusplus
extern "C" {
#endif
    struct fann_train_data * fann_read_train_from_file(const char *filename);
    FANN_EXTERNAL struct fann *FANN_API fann_create_from_file(const char *configuration_file);
#ifdef __cplusplus
}
#endif*/


MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{

#ifdef __cplusplus
    printf(" version of CPP = %d\n", __cplusplus);
#endif
#ifdef __STDC_VERSION__
    printf(" version of C = %d\n", __STDC_VERSION__); //KAU 02.07.2022
#endif

  ui->setupUi(this);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_sB_number_layers_valueChanged(int value)
{
  num_layers = value;
  if(value>ui->cmbB_select_neurons->count()) {
    for (int i = (ui->cmbB_select_neurons->count()) + 1; i <= value; i++) {
      ui->cmbB_select_neurons->addItem("Слое " + QString::number(i));
    }
  }
  else {
    for (int i = (ui->cmbB_select_neurons->count()); i >= value; i--) {
      ui->cmbB_select_neurons->removeItem(i);
    }
  }
}

void MainWindow::on_pB_create_clicked()
{
  if(ui->cB_load_from_file->isChecked() == true) {
    QString file_path = QFileDialog::getOpenFileName(this,"Открыть файл ИНС",nullptr,"*.net");
    ann = fann_create_from_file(file_path.toUtf8().constData());

  }
  else {
    num_input = ui->sB_number_input->value();
    num_output = ui->sB_number_output->value();
    if(ui->cB_all_or_alone->isChecked() == true) {
      num_neurons[0] = num_input;
      num_neurons[num_layers-1] = num_output;
//      for (unsigned int i=1;i<num_layers-1;i++) {
//          //num_neurons[i] = ... здесь должна быть инициализация внутренних слоёва с формы,
//          //все слои кроме входного (нулевого) и выходного (последнего) - скрытые
//      }
      ann = fann_create_standard_array(num_layers, num_neurons);
    }
    else {
      num_neurons_std = ui->sB_all_neurons->value();
      ann = fann_create_standard(num_layers, num_input, num_neurons_std, num_output);
    }


    fann_set_activation_function_hidden(ann, fann_activationfunc_enum(ui->cmbB_fun_activation_layers->currentIndex()));
    fann_set_activation_function_output(ann, fann_activationfunc_enum(ui->cmbB_fun_activation_outputs->currentIndex()));
  }

  ui->gB_training_set->setEnabled(true);
}



void MainWindow::on_cB_all_or_alone_toggled(bool checked)
{
  if(checked == true) {
    ui->cB_all_or_alone->setText("Задавать количество нейронов всем слоям сразу");
    ui->sW_neurons->setCurrentIndex(0);
  }
  else {
    ui->cB_all_or_alone->setText("Задавать количество нейронов каждому слою");
    ui->sW_neurons->setCurrentIndex(1);
  }
}


void MainWindow::on_cB_all_or_alone_stateChanged(int value)
{
  if(value && num_layers)
      num_neurons = (unsigned int *)calloc(num_layers, sizeof(unsigned int));
}

void MainWindow::on_sB_number_neurons_valueChanged(int value)
{
  num_neurons[ui->cmbB_select_neurons->currentIndex()] = value;
}

void MainWindow::on_pB_load_sample_clicked()
{
    QString file_path = QFileDialog::getOpenFileName(this,"Открыть файл ИНС",nullptr,"*.train");
    train_data = fann_read_train_from_file(file_path.toUtf8());
    QFileInfo fileInfo(file_path);

    ui->lE_analysis_fileName->setText(fileInfo.fileName());
    ui->lE_analysis_count_pair->setText(QString::number(train_data->num_data));
    ui->lE_analysis_count_input->setText(QString::number(train_data->num_input));
    ui->lE_analysis_count_output->setText(QString::number(train_data->num_output));

    gridLGraphics = new QGridLayout(ui->gB_graphic_N);
    for (unsigned int j = 0; j < train_data->num_input; j++) {
      QCheckBox *checkBox = new QCheckBox;
      checkBox->setText("Вход " + QString::number(j+1));
      checkBox->setObjectName(QString::number(j));
      connect(checkBox, &QCheckBox::toggled, this, &MainWindow::slotChecked);
      gridLGraphics->addWidget(checkBox);
    }

    for (unsigned int j = train_data->num_input; j < (train_data->num_output + train_data->num_input); j++) {
      QCheckBox *checkBox = new QCheckBox(ui->tW_grapfics);
      checkBox->setText("Выход " + QString::number(j+1-train_data->num_input));
      checkBox->setObjectName(QString::number(j));
      connect(checkBox, &QCheckBox::clicked, this, &MainWindow::slotChecked);
      gridLGraphics->addWidget(checkBox);
    }
    for (unsigned int j = 0; j < train_data->num_input; j++) {
      QCustomPlot *customPlot = new QCustomPlot(ui->tW_grapfics);

      customPlot->xAxis->setRange(0,train_data->num_data);
      customPlot->yAxis->setRange(-1,1);
      customPlot->xAxis->setLabel("Данные");
      customPlot->yAxis->setLabel("Вход");
      for(unsigned int i = 0; i < train_data->num_input+train_data->num_output; i++)
      {
        customPlot->addGraph();
        x.clear();
        y.clear();
        for (unsigned int k = 0; k < train_data->num_data; k++) {
            x.push_back(k);
            if(i<train_data->num_input)
              y.push_back(train_data->input[k][i]);
            else
              y.push_back(train_data->output[k][i]);
        }
        if(i < train_data->num_input)
          customPlot->graph(i)->setName(QString("Вход %1").arg(i+1));
        else
          customPlot->graph(i)->setName(QString("Выход %1").arg(i+1));

        customPlot->legend->setVisible(true);
        QPen penPlot;
        penPlot.setWidth(3);
        penPlot.setColor(QColor((rand()%255),rand()%255,(rand()%255)));
        customPlot->graph(i)->addData(x,y);
        customPlot->graph(i)->setVisible(false);
        customPlot->graph(i)->setPen(penPlot);

      }
      customPlot->setObjectName(QString::number(j));

  //    customPlot->replot();
      ui->tW_grapfics->insertTab(j,customPlot,QString("График %1").arg(j+1));
    }

    ui->gB_training->setEnabled(true);

    for(int k = 0; k < ui->tW_grapfics->count(); k++)
    {
      QCustomPlot * plot = qobject_cast<QCustomPlot*>(ui->tW_grapfics->widget(k));
      for(int l = 0; l < plot->graphCount(); l++)
      {
        plot->graph(l)->setVisible(l == k);
        plot->replot();

      }
    }
    QCustomPlot * plot = qobject_cast<QCustomPlot*>(ui->tW_grapfics->widget(ui->tW_grapfics->currentIndex()));
    for(int i = 0; i < gridLGraphics->count(); i++)
    {
      QCheckBox *box = qobject_cast<QCheckBox*>(gridLGraphics->itemAt(i)->widget());
      box->setChecked(plot->graph(i)->visible());
    }

    ui->gB_training->setEnabled(true);
}



void MainWindow::slotChecked(bool state)
{
  QCheckBox *box = (QCheckBox*) sender();
  QCustomPlot * plot = qobject_cast<QCustomPlot*>(ui->tW_grapfics->widget(ui->tW_grapfics->currentIndex()));
  plot->graph(box->objectName().toInt())->setVisible(state);
  plot->replot();
}



void MainWindow::on_tW_grapfics_currentChanged(int index)
{
  ui->gB_graphic_N->setTitle(QString("График %1").arg(index+1));
  QCustomPlot * plot = qobject_cast<QCustomPlot*>(ui->tW_grapfics->widget(index));
  for(int i = 0; i < gridLGraphics->count(); i++)
  {
    QCheckBox *checkBox = qobject_cast<QCheckBox *> (gridLGraphics->itemAt(i)->widget());
    checkBox->setChecked(plot->graph(i)->visible());
  }
  ui->cB_zoom->setChecked(false);


}




void MainWindow::on_checkBox_stateChanged(int state)
{
  if(state)
    ui->pB_educate->setText("Обучить на частичной выборке");
  else
    ui->pB_educate->setText("Обучить на полной выборке");

}

void MainWindow::on_cB_zoom_stateChanged(int state)
{

  QCustomPlot * plot = qobject_cast<QCustomPlot*>(ui->tW_grapfics->widget(ui->tW_grapfics->currentIndex()));
  if(state)
    plot->setSelectionRectMode(QCP::srmZoom);
  else
  {
    plot->xAxis->setRange(0,train_data->num_data);
    plot->yAxis->setRange(-1,1);
    plot->setSelectionRectMode(QCP::srmNone);

  }
  plot->setInteraction(QCP::iRangeDrag,state);
  plot->setInteraction(QCP::iRangeZoom,state);
  plot->replot();
}
