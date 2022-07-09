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
  }
  else {
    if(ui->cB_all_or_alone->isChecked() == true) {
      //fann_create_standard_array
    }
    else {
      ann = fann_create_standard(ui->sB_number_layers->value(),
                                 ui->sB_number_input->value(),
                                 ui->sB_all_neurons->value(),
                                 ui->sB_number_output->value());
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
