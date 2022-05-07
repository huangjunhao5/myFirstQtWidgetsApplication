#include "GameFrom.h"
#include <QtWidgets/QPushButton>
#include<QtWidgets/QHBOxLayout>
#include<QtWidgets/QVBOxLayout>

GameFrom::GameFrom(QWidget *parent)
	: QWidget(parent)
{
	QPushButton** bt = new QPushButton * [16];
	QHBoxLayout* la = new QHBoxLayout[16];
	QVBoxLayout* va = new QVBoxLayout;
	for (int i = 0; i <= 15; i++) {
		bt[i] = new QPushButton[16];
		for (int j = 1; j <= 15; j++) {
			la[i].addWidget(&bt[i][j]);
		}
		va->addLayout(&la[i]);
	}
	this->setWindowTitle("!!!");
	this->setLayout(va);
}

void OnClick(int x, int y) {
	mp[x][y] = 1;
}

GameFrom::~GameFrom()
{
}
