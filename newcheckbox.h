#ifndef NEWCHECKBOX_H
#define NEWCHECKBOX_H

#include <QCheckBox>

class NewCheckBox : public QCheckBox
{
  Q_OBJECT
public:
  explicit NewCheckBox(QWidget *parent = 0);
  ~NewCheckBox();

  static unsigned int cbID;
  int getID();


private:
  unsigned int checkID = 0;
};

#endif // NEWCHECKBOX_H
