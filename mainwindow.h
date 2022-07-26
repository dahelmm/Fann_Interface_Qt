#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qcustomplot.h"
#include <QVector>

#include "src/include/floatfann.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private slots:
  void on_sB_number_layers_valueChanged(int arg1);
  void on_pB_create_clicked();
  void on_cB_all_or_alone_toggled(bool checked);

private:
  Ui::MainWindow *ui;
  unsigned int num_layers;
  unsigned int * num_neurons;
  unsigned int num_neurons_std;
  unsigned int num_output, num_input;
  struct fann  *ann;

  QString name_train_data; // эта переменная инициализируется
                           //при нажатии кнопки "Загрузить обучающую выборку"
  struct fann_train_data *train_data, *test_data;

  double xBegin, xEnd, step, X;
  int N;

  QVector<double> x,y;
  QVector<double> x2,y2;

};
#endif // MAINWINDOW_H
