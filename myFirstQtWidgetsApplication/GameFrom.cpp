#pragma execution_character_set("utf-8")
#include "GameFrom.h"
#include <QtWidgets/QPushButton>
#include<QtWidgets/QHBOxLayout>
#include<QtWidgets/QVBOxLayout>
#include<qmessagebox.h>
#include<string>

GameFrom::GameFrom(QWidget* parent)
	: QWidget(parent)
{
	QPushButton** bt = new QPushButton * [16];
	QHBoxLayout* la = new QHBoxLayout[16];
	QVBoxLayout* va = new QVBoxLayout;
	for (int i = 0; i <= 15; i++) {
		bt[i] = new QPushButton[16];
		for (int j = 1; j <= 15; j++) {
			QSizePolicy tmp = bt[i][j].sizePolicy();
			tmp.setHorizontalPolicy(QSizePolicy::Minimum);
			tmp.setVerticalPolicy(QSizePolicy::Minimum);
			bt[i][j].setSizePolicy(tmp);
			la[i].addWidget(&bt[i][j]);
			connect(&bt[i][j], &QPushButton::clicked, this, [=]() {this->OnClick(i, j); });
			//connect(&bt[i][j], SIGNAL(clicked()), this, SLOT(c1()));
		}
		va->addLayout(&la[i]);
	}
	this->setWindowTitle("!!!");
	this->setLayout(va);
}

void GameFrom::OnClick(int x, int y) {
	mp[x][y] = 1;
	QString s;
	s = "";
	s += QString::number(x, 10);
	s += " ";
	s += QString::number(y, 10);
	QMessageBox::information(this, "标题", s, "我是文本");
}

GameFrom::~GameFrom()
{

}
