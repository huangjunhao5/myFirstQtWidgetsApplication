#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_myFirstQtWidgetsApplication.h"

class myFirstQtWidgetsApplication : public QMainWindow
{
    Q_OBJECT

public:
    myFirstQtWidgetsApplication(QWidget *parent = Q_NULLPTR);
private slots:
    void OnClick();
private:
    Ui::myFirstQtWidgetsApplicationClass ui;
};
