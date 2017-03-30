#include "editscreen.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EditScreen w;
    w.show();

    return a.exec();
}
