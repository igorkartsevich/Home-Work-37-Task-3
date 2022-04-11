#include "RemoteControl.h"

RemoteControl::RemoteControl(QWidget *parent) : QMainWindow(parent)
{
    ui.setupUi(this);
    
    ui.lcdNumber->setDigitCount(3);
    ui.lcdNumber_2->setDigitCount(3);
    
    is_Working = false;
    ui.lcdNumber->setVisible(is_Working);
    ui.lcdNumber_2->setVisible(is_Working);
}

void RemoteControl::but_On() {
    is_Working = !is_Working;

    ui.lcdNumber->setVisible(is_Working);
    ui.lcdNumber_2->setVisible(is_Working);

    currentProgram = 0; mon_program();
    currentVolume = 0; mon_volume();
}

void RemoteControl::but_0() {
    if (is_Working) { currentProgram = 0; mon_program(); }
}
void RemoteControl::but_1() {
    if (is_Working) { currentProgram = 1; mon_program(); }
}
void RemoteControl::but_2() {
    if (is_Working) { currentProgram = 2; mon_program(); }
}
void RemoteControl::but_3() {
    if (is_Working) { currentProgram = 3; mon_program(); }
}
void RemoteControl::but_4() {
    if (is_Working) { currentProgram = 4; mon_program(); }
}
void RemoteControl::but_5() {
    if (is_Working) { currentProgram = 5; mon_program(); }
}
void RemoteControl::but_6() {
    if (is_Working) { currentProgram = 6; mon_program(); }
}
void RemoteControl::but_7() {
    if (is_Working) { currentProgram = 7; mon_program(); }
}
void RemoteControl::but_8() {
    if (is_Working) { currentProgram = 8; mon_program(); }
}
void RemoteControl::but_9() {
    if (is_Working) { currentProgram = 9; mon_program(); }
}

void RemoteControl::but_progUp() {
    if (is_Working && currentProgram < 999) { ++currentProgram; mon_program(); }
}
void RemoteControl::but_progDown() {
    if (is_Working && currentProgram > 0) { --currentProgram; mon_program(); }
}

void RemoteControl::but_volumeUp() {
    if (is_Working && currentVolume < 100) { currentVolume += 10; mon_volume(); }
}
void RemoteControl::but_volumeDown() {
    if (is_Working && currentVolume > 0) { currentVolume -= 10; mon_volume(); }
}

void RemoteControl::mon_program() { ui.lcdNumber->display(currentProgram); }
void RemoteControl::mon_volume() { ui.lcdNumber_2->display(currentVolume); }