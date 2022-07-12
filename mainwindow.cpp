#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFile>
#include <QFileDialog>
#include <QMessageBox>

#include "src/include/fann.h"
#include "src/include/fann_train.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  ui->cP_grapfic_1->xAxis->setRange(-5,5);
  ui->cP_grapfic_1->yAxis->setRange(0,10);
  ui->cP_grapfic_2->xAxis->setRange(-5,5);
  ui->cP_grapfic_2->yAxis->setRange(0,10);
  ui->cP_grapfic_3->xAxis->setRange(-5,5);
  ui->cP_grapfic_3->yAxis->setRange(0,10);

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

  ui->cP_grapfic_1->addGraph();
  ui->cP_grapfic_1->addGraph();
  ui->cP_grapfic_1->graph(0)->setPen(QColor(Qt::red));
  ui->cP_grapfic_1->graph(1)->setPen(QColor(Qt::blue));
  ui->cP_grapfic_1->graph(0)->addData(x,y);
  ui->cP_grapfic_1->graph(1)->addData(x2,y2);
  ui->cP_grapfic_1->replot();

  x.clear();
  y.clear();
  x2.clear();
  y2.clear();
  for (X = xBegin; X <= xEnd; X += step) {
    x.push_back(X+1);
    y.push_back(X*X);
    x2.push_back(X-1);
    y2.push_back(10-(X*X));
  }
  ui->cP_grapfic_2->addGraph();
  ui->cP_grapfic_2->addGraph();
  ui->cP_grapfic_2->graph(0)->setPen(QColor(Qt::red));
  ui->cP_grapfic_2->graph(1)->setPen(QColor(Qt::blue));
  ui->cP_grapfic_2->graph(0)->addData(x,y);
  ui->cP_grapfic_2->graph(1)->addData(x2,y2);
  ui->cP_grapfic_2->replot();

  x.clear();
  y.clear();
  x2.clear();
  y2.clear();
  for (X = xBegin; X <= xEnd; X += step) {
    x.push_back(X);
    y.push_back((X*X)+1);
    x2.push_back(X);
    y2.push_back((10-(X*X))-1);
  }
  ui->cP_grapfic_3->addGraph();
  ui->cP_grapfic_3->addGraph();
  ui->cP_grapfic_3->graph(0)->setPen(QColor(Qt::red));
  ui->cP_grapfic_3->graph(1)->setPen(QColor(Qt::blue));
  ui->cP_grapfic_3->graph(0)->addData(x,y);
  ui->cP_grapfic_3->graph(1)->addData(x2,y2);
  ui->cP_grapfic_3->replot();
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_sB_number_layers_valueChanged(int arg1)
{
  if(arg1>ui->cmbB_select_neurons->count()) {
    ui->cmbB_select_neurons->addItem("Слое " + QString::number(arg1));
  }
  else {
    ui->cmbB_select_neurons->removeItem(arg1);
  }
}

void MainWindow::on_pB_create_clicked()
{
  if(ui->cB_load_from_file->isChecked() == true) {
    QString file_path = QFileDialog::getOpenFileName(this,"Открыть файл ИНС",nullptr,"*.net");
    train_data = fann_read_train_from_file(file_path.toUtf8().constData());
    //???????????????????
  }
  else {
    if(ui->cB_all_or_alone->isChecked() == true) {
      //fann_create_standard_array
    }
    else {
      //fann_create_standart
    }
  }
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
