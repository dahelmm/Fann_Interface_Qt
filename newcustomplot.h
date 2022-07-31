#ifndef NEWCUSTOMPLOT_H
#define NEWCUSTOMPLOT_H

#include <qcustomplot.h>

class NewCustomPlot : public QCustomPlot
{
  Q_OBJECT
public:
  explicit NewCustomPlot(QWidget *parent = 0);
  ~NewCustomPlot();

  static int cpID;
  int getID();

private:
  int plotID = 0;
};

#endif // NEWCUSTOMPLOT_H
