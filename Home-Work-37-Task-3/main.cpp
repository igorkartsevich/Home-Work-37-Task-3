#include "RemoteControl.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RemoteControl remoteControl;
    remoteControl.show();
    return a.exec();
}
