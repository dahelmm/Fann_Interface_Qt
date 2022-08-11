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
//  ui->cP_grapfic_1->xAxis->setRange(-5,5);
//  ui->cP_grapfic_1->yAxis->setRange(0,10);


  step = 0.1;
  xBegin = -4;
  xEnd = 4 + step;

  N = (xEnd - xBegin)/step + 2;
  for (X = xBegin; X <= xEnd; X += step) {
    x.push_back(X);
    y.push_back(X*X);
    x2.push_back(X);
    y2.push_back(10-(X*X));
  }

//  ui->cP_grapfic_1->addGraph();
//  ui->cP_grapfic_1->addGraph();
//  ui->cP_grapfic_1->graph(0)->setPen(QColor(Qt::red));
//  ui->cP_grapfic_1->graph(1)->setPen(QColor(Qt::blue));
//  ui->cP_grapfic_1->graph(0)->addData(x,y);
//  ui->cP_grapfic_1->graph(1)->addData(x2,y2);
//  ui->cP_grapfic_1->replot();

  connect(this, &MainWindow::signalTrue, this, &MainWindow::slotTrue);




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
    connect(checkBox, &QCheckBox::clicked, this, &MainWindow::slotChecked);
    gridLGraphics->addWidget(checkBox);
  }

  for (unsigned int j = 0; j < train_data->num_input; j++) {
    QCustomPlot *customPlot = new QCustomPlot(ui->tW_grapfics);

    customPlot->xAxis->setRange(0,train_data->num_data);
    customPlot->yAxis->setRange(-1,1);
    for(unsigned int i = 0; i < train_data->num_input; i++)
    {
      customPlot->addGraph();
      x.clear();
      y.clear();
      for (unsigned int k = 0; k < train_data->num_data; k++) {
          x.push_back(k);
          y.push_back(train_data->input[k][i]);
      }
      customPlot->graph(i)->addData(x,y);
      customPlot->graph(i)->setPen(QColor(rand()%255,rand()%255,rand()%255));
      customPlot->replot();

    }
    ui->tW_grapfics->addTab(customPlot,"График " + QString::number(j+1));

  }


  for (unsigned int j = train_data->num_input; j < (train_data->num_output + train_data->num_input); j++) {
    QCheckBox *checkBox = new QCheckBox(ui->tW_grapfics);
    checkBox->setText("Выход " + QString::number(j+1-train_data->num_input));
    checkBox->setObjectName(QString::number(j));
    connect(checkBox, &QCheckBox::clicked, this, &MainWindow::slotChecked);
    gridLGraphics->addWidget(checkBox);
  }

  QList<QCustomPlot*> plots = ui->tW_grapfics->findChildren<QCustomPlot*>();
  foreach(auto *item, plots)
  {
    for (unsigned int i = train_data->num_input; i <= train_data->num_input+train_data->num_output; i++)
    {
      item->addGraph();
      x.clear();
      y.clear();
      for (unsigned int k = 0; k < train_data->num_data; k++) {
          x.push_back(k);
          y.push_back(train_data->output[k][i]);
      }
      item->graph(i)->addData(x,y);
      item->graph(i)->setPen(QColor(rand()%255,rand()%255,rand()%255));
      item->replot();
    }
  }

//  for (unsigned int j = train_data->num_output; j <= train_data->num_input+train_data->num_output; j++) {
//    QCustomPlot *customPlot = new QCustomPlot(ui->tW_grapfics);

//    customPlot->xAxis->setRange(0,train_data->num_data);
//    customPlot->yAxis->setRange(-1,1);
//    for(unsigned int i = 0; i < train_data->num_output; i++)
//    {
//      customPlot->addGraph();
//      x.clear();
//      y.clear();
//      for (unsigned int k = 0; k < train_data->num_data; k++) {
//          x.push_back(k);
//          y.push_back(train_data->output[k][i]);
//      }
//      customPlot->graph(i)->addData(x,y);
//      customPlot->graph(i)->setPen(QColor(rand()%255,rand()%255,rand()%255));
//      customPlot->replot();

//    }
//    ui->tW_grapfics->addTab(customPlot,"График " + QString::number(j));

//  }


  ui->gB_training->setEnabled(true);

}



void MainWindow::slotChecked(bool state)
{
//  QCheckBox *box = (QCheckBox*) sender();
//  if(box->objectName().toUInt() < train_data->num_input)
//  {
//    QCustomPlot *plot = (QCustomPlot*) ui->tW_grapfics->widget(ui->tW_grapfics->currentIndex());
//    if(state)
//    {
//      plot->addGraph();
//      x.clear();
//      y.clear();
//      for (unsigned int i = 0; i < train_data->num_data; i++) {
//          x.push_back(i);
//          y.push_back(train_data->input[i][box->objectName().toInt()]);
//      }
//      plot->graph(plot->graphCount()-1)->addData(x,y);
//      plot->graph(plot->graphCount()-1)->setPen(QColor(rand()%255,rand()%255,rand()%255));
//      plot->graph(plot->graphCount()-1)->setName(box->objectName());
//      plot->replot();
//    }
//    else
//    {
////      if(plot->graph(box->objectName().toInt())->name() == box->objectName())
//      plot->removeGraph(box->objectName().toInt());
//    }
//  }
//  else if(box->objectName().toUInt() > train_data->num_input)
//  {
//    //Выходные каналы
//  }
}



void MainWindow::on_tW_grapfics_currentChanged(int index)
{
//  ui->gB_graphic_N->setTitle("График " + QString::number(index+1));
//  for(int i = 0; i < gridLGraphics->count(); i++)
//  {
//    QCheckBox *checkBox = qobject_cast<QCheckBox *> (gridLGraphics->itemAt(i)->widget());
//    if(index == checkBox->objectName().toInt())
//    {
//      checkBox->setChecked(true);
//    }
//    else
//    {
//      checkBox->setChecked(false);
//    }
//  }

}

void MainWindow::slotTrue(int id)
{
//  for (int j = 0; j < ui->tW_grapfics->count(); j++) {
//    QCustomPlot *customPlot = qobject_cast<QCustomPlot *> (ui->tW_grapfics->widget(j));
//    if(id == customPlot->objectName().toInt())
//    {
//      x.clear();
//      y.clear();
//      for (unsigned int k = 0; k < train_data->num_data; k++) {
//          x.push_back(k);
//          y.push_back(train_data->input[id][k]);
//      }
//      customPlot->addGraph();
//      customPlot->graph(customPlot->objectName().toInt())->addData(x,y);
//      customPlot->graph(customPlot->objectName().toInt())->setPen(QColor(rand()%255,rand()%255,rand()%255));
//      customPlot->replot();
//    }
//  }
}

