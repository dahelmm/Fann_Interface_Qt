#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <src/include/fann.h>

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
  unsigned int num_neurons;
  struct fann  *ann;
  struct fann_train_data *train_data, *test_data;

};
#endif // MAINWINDOW_H
