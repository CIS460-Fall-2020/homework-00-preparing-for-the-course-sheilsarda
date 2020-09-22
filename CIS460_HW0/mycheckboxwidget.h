# pragma once
#include <QCheckBox>>

class MyCheckBoxWidget : public QCheckBox
{
    Q_OBJECT
public:
    MyCheckBoxWidget(QCheckBox* parent = 0);

public slots:
    void slot_testSlot();
signals:
    void sig_testSignal(int);

};
