#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qcustomplot.h"
#include <QVector>
#include <QMap>
#include <QWidget>

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
  void selectionChanged();
  void slotChecked(bool state);
  void doubleCkickSlot(QMouseEvent* event);
  void pressEventSlot(QMouseEvent* event);
  void releaseEventSlot(QMouseEvent* event);

  void on_sB_number_layers_valueChanged(int arg1);
  void on_pB_create_clicked();
  void on_cB_all_or_alone_toggled(bool checked);
  void on_sB_number_neurons_valueChanged(int arg1);
  void on_pB_load_sample_clicked();
  void on_tW_grapfics_currentChanged(int index);
  void on_cB_subsample_stateChanged(int arg1);
  void on_lE_learning_error_value_editingFinished();
  void on_pB_educate_clicked();
  void on_pB_displayGraphic_clicked();
  void on_cB_all_or_alone_stateChanged(int arg1);
  void on_cmbB_select_neurons_currentIndexChanged(int index);

private:
  Ui::MainWindow *ui;
  unsigned int    num_layers, num_latent_layers;
  unsigned int    *num_neurons;
  unsigned int    num_neurons_std;
  unsigned int    num_output, num_input;
  struct fann     *ann;

  QGridLayout     *gridLGraphics;
  QString         name_train_data; // эта переменная инициализируется
                           //при нажатии кнопки "Загрузить обучающую выборку"
  struct          fann_train_data *train_data, *sub_train_data;

  unsigned int start_num_train = 0;
  unsigned int finish_num_train = 0;
  QVector<double> x,y;

};
#endif // MAINWINDOW_H
