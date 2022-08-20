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

void MainWindow::selectionChanged()
{
  QCustomPlot* plotSender = qobject_cast<QCustomPlot*>(sender());
  if(plotSender->xAxis->selectedParts().testFlag(QCPAxis::spAxis) ||
     plotSender->xAxis->selectedParts().testFlag(QCPAxis::spTickLabels))
  {
    plotSender->xAxis->setSelectedParts(QCPAxis::spAxis|QCPAxis::spTickLabels);
  }
  if(plotSender->yAxis->selectedParts().testFlag(QCPAxis::spAxis) ||
     plotSender->yAxis->selectedParts().testFlag(QCPAxis::spTickLabels))
  {
    plotSender->yAxis->setSelectedParts(QCPAxis::spAxis|QCPAxis::spTickLabels);
  }
  for (int i = 0; i < plotSender->graphCount(); i++) {
    QCPGraph *graph = plotSender->graph(i);
    QCPPlottableLegendItem *item = plotSender->legend->itemWithPlottable(graph);
    if(item->selected() || graph->selected())
    {
      item->setSelected(true);
      graph->setSelection(QCPDataSelection(graph->data()->dataRange()));
    }
  }
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

  for (unsigned int j = 0; j < train_data->num_output; j++) {
    QCustomPlot *customPlot = new QCustomPlot(ui->tW_grapfics);

    customPlot->xAxis->setRange(0,train_data->num_data);
    customPlot->yAxis->setRange(-1,1);
    customPlot->xAxis->setLabel("Данные");
    customPlot->yAxis->setLabel("Вход");
    for(unsigned int i = 0; i < train_data->num_input+train_data->num_output; i++) {
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
        customPlot->graph(i)->setName(QString("Выход %1").arg(i+1-train_data->num_input));
      customPlot->legend->setVisible(true);
      QPen penPlot;
      penPlot.setWidth(3);
      penPlot.setColor(QColor((rand()%255),rand()%255,(rand()%255)));
      customPlot->graph(i)->addData(x,y);
      customPlot->graph(i)->setVisible(false);
      customPlot->graph(i)->setPen(penPlot);
    }
    customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectAxes | QCP::iSelectLegend | QCP::iSelectPlottables);
    customPlot->legend->setSelectableParts(QCPLegend::spItems);
    customPlot->setObjectName(QString::number(j));
    connect(customPlot, &QCustomPlot::selectionChangedByUser, this, &MainWindow::selectionChanged);
    ui->tW_grapfics->insertTab(j,customPlot,QString("График %1").arg(j+1));
  }

  for(int k = 0; k < ui->tW_grapfics->count(); k++) {
    QCustomPlot * plot = qobject_cast<QCustomPlot*>(ui->tW_grapfics->widget(k));
    for(int l = 0; l < plot->graphCount(); l++) {
      plot->graph(l)->setVisible(static_cast<unsigned int>(l) == k+train_data->num_input);
      plot->replot();
    }
  }

  QCustomPlot * plot = qobject_cast<QCustomPlot*>(ui->tW_grapfics->widget(ui->tW_grapfics->currentIndex()));
  for(int i = 0; i < gridLGraphics->count(); i++) {
    QCheckBox *box = qobject_cast<QCheckBox*>(gridLGraphics->itemAt(i)->widget());
    box->setChecked(plot->graph(i)->visible());
  }
  ui->gB_training->setEnabled(true);
}

void MainWindow::slotChecked(bool state)
{
  QCheckBox *box = qobject_cast<QCheckBox*>(sender());
  QCustomPlot * plot = qobject_cast<QCustomPlot*>(ui->tW_grapfics->widget(ui->tW_grapfics->currentIndex()));
  plot->graph(box->objectName().toInt())->setVisible(state);
  plot->replot();
}

void MainWindow::on_tW_grapfics_currentChanged(int index)
{
  ui->gB_graphic_N->setTitle(QString("График %1").arg(index+1));
  QCustomPlot * plot = qobject_cast<QCustomPlot*>(ui->tW_grapfics->widget(index));
  for(int i = 0; i < gridLGraphics->count(); i++) {
    QCheckBox *checkBox = qobject_cast<QCheckBox *> (gridLGraphics->itemAt(i)->widget());
    checkBox->setChecked(plot->graph(i)->visible());
  }
  ui->cB_zoom->setChecked(false);
}

void MainWindow::on_cB_subsample_stateChanged(int state)
{
  if(state)
    ui->pB_educate->setText("Обучить на частичной выборке");
  else
    ui->pB_educate->setText("Обучить на полной выборке");
  ui->gB_paraneters_subsample->setEnabled(state);
}

void MainWindow::on_cB_zoom_stateChanged(int state)
{
  QCustomPlot * plot = qobject_cast<QCustomPlot*>(ui->tW_grapfics->widget(ui->tW_grapfics->currentIndex()));
  if(state) {
    ui->cB_zoom->setText("Отключить масштабирование");
    plot->setSelectionRectMode(QCP::srmZoom);
  }
  else {
    plot->xAxis->setRange(0,train_data->num_data);
    plot->yAxis->setRange(-1,1);
    plot->setSelectionRectMode(QCP::srmNone);
    ui->cB_zoom->setText("Включить масштабирование");
  }
//  plot->setInteraction(QCP::iRangeDrag,state);
//  plot->setInteraction(QCP::iRangeZoom,state);
  plot->replot();
}

void MainWindow::on_lE_learning_error_value_editingFinished()
{
  if(!ui->lE_max_count_eras->text().isEmpty()        &&
     !ui->lE_ouput_report_eras->text().isEmpty()     &&
     !ui->lE_learning_error_value->text().isEmpty())
  {
    ui->pB_educate->setEnabled(true);
  }
}

void MainWindow::on_pB_educate_clicked()
{
  unsigned int start_num_train = 0;
  unsigned int finish_num_train = 0;
  if(ui->cB_subsample->isChecked()){
      start_num_train = ui->lE_interval_from->text().toUInt();
      finish_num_train = ui->lE_interval_before->text().toUInt();
      sub_train_data = fann_subset_train_data(train_data, start_num_train, finish_num_train);
  }
  else{
      finish_num_train = fann_length_train_data (train_data);
      sub_train_data = fann_duplicate_train_data(train_data);
  }

  fann_set_train_stop_function(ann, fann_stopfunc_enum(ui->cmbB_trainStop->currentIndex()));
  fann_set_bit_fail_limit(ann, 0.01f);

  fann_set_training_algorithm(ann, FANN_TRAIN_RPROP);
  if(ui->cB_set_weights->isChecked())
    fann_init_weights(ann, sub_train_data);

  printf("Training network.\n");
  const float desired_error = ui->lE_learning_error_value->text().toFloat();
  const unsigned int max_epochs = ui->lE_max_count_eras->text().toUInt();
  const unsigned int epochs_between_reports = ui->lE_ouput_report_eras->text().toUInt();
  //если FANN_STOPFUNC_MSE, то desired_error - это MSE,
  //если FANN_STOPFUNC_BIT, то desired_error - это кол-во BIT,
  fann_train_on_data(ann, sub_train_data, max_epochs, epochs_between_reports, desired_error);

  //вывод на графики
  fann_type *calc_out;
  fann_type *input;

  QCustomPlot * plot = qobject_cast<QCustomPlot*>(ui->tW_grapfics->widget(ui->tW_grapfics->currentIndex())); //k=0
  for(unsigned int j = train_data->num_input; j < train_data->num_input+train_data->num_output; j++) {
    if(plot->graph(j)->visible()) {
      plot->addGraph();
      int num_graph = plot->graphCount()-1;
      QPen penPlot;
      penPlot.setWidth(1);
      penPlot.setColor(QColor((rand()%255),rand()%255,(rand()%255)));
      plot->graph(num_graph)->setPen(penPlot);
      plot->graph(num_graph)->setName(QString("Новый график %1").arg(j-train_data->num_input+1));
      for(unsigned int i=start_num_train; i<finish_num_train; i++) {
        input = fann_get_train_output(sub_train_data,i);
        calc_out = fann_run(ann, input);
        plot->graph(num_graph)->addData(i,calc_out[j-train_data->num_input]);

      }
    }
  }
  plot->replot();
  fann_destroy_train(sub_train_data);
}

void MainWindow::on_pB_displayGraphic_clicked()
{

}
