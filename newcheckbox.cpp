#include "newcheckbox.h"

NewCheckBox::NewCheckBox(QWidget *parent) :
  QCheckBox(parent)
{
  cbID++;
  checkID = cbID;
}

NewCheckBox::~NewCheckBox()
{

}

int NewCheckBox::getID()
{
  return checkID;
}

unsigned int NewCheckBox::cbID = 0;
