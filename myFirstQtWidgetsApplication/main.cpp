#include "myFirstQtWidgetsApplication.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myFirstQtWidgetsApplication w;
    w.show();
    return a.exec();
}
