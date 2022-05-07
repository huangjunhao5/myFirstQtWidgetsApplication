#include "myFirstQtWidgetsApplication.h"
#include"GameFrom.h"

myFirstQtWidgetsApplication::myFirstQtWidgetsApplication(QWidget *parent)
    : QMainWindow(parent)
{
    GameFrom * f1 = new GameFrom;
    f1->show();
    ui.setupUi(this);
    connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(OnClick()));
}

void myFirstQtWidgetsApplication::OnClick() {
    ui.textBrowser->setText("111");
}
