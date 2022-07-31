#include "newcustomplot.h"

NewCustomPlot::NewCustomPlot(QWidget *parent) :
  QCustomPlot(parent)
{
  cpID++;
  plotID = cpID;
}

NewCustomPlot::~NewCustomPlot()
{

}

int NewCustomPlot::getID()
{
  return plotID;

}
int NewCustomPlot::cpID = 0;
