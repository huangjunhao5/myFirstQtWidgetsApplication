#pragma once

#include <QWidget>

class GameFrom : public QWidget
{
	Q_OBJECT

public:
	GameFrom(QWidget* parent = Q_NULLPTR);
	~GameFrom();
	int mp[16][16];
public slots:
	void OnClick(int x, int y);
};
