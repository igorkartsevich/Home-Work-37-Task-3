#pragma once

#include <QMainWindow>
#include <QLCDNumber>
#include "ui_RemoteControl.h"

class RemoteControl : public QMainWindow
{
    Q_OBJECT

public:
    RemoteControl(QWidget *parent = Q_NULLPTR);

public slots:
    void but_On();

    void but_0();
    void but_1();
    void but_2();
    void but_3();
    void but_4();
    void but_5();
    void but_6();
    void but_7();
    void but_8();
    void but_9();

    void but_progUp();
    void but_progDown();

    void but_volumeUp();
    void but_volumeDown();

    void mon_program();
    void mon_volume();

private:
    Ui::RemoteControlClass ui;
    int currentProgram, currentVolume;
    bool is_Working;
};
