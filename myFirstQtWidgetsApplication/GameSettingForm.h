#pragma once

#include <QWidget>
#include "ui_GameSettingForm.h"

class GameSettingForm : public QWidget
{
	Q_OBJECT

public:
	GameSettingForm(QWidget *parent = Q_NULLPTR);
	~GameSettingForm();

private:
	Ui::GameSettingForm ui;
};
