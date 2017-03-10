#pragma once

#include <QtWidgets/QDialog>
#include "ui_skinwrap.h"

bool setAppSkin(const QString &skinName);

class skinwrap : public QDialog
{
	Q_OBJECT

public:
	skinwrap(QWidget *parent = Q_NULLPTR);
	void initSkin();

private:
	void onDark();
	void onLight();

private:
	Ui::skinwrapClass ui;
};
