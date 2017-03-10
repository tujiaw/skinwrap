#include "skinwrap.h"
#include "skin.h"
#include <QtWidgets>

bool setAppSkin(const QString &skinName)
{
	set_skin(skinName);
	QFile file(skin("style.css"));
	if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
		qApp->setStyleSheet(file.readAll());
		return true;
	}
	return false;
}

skinwrap::skinwrap(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.pbDark, &QPushButton::clicked, this, &skinwrap::onDark);
	connect(ui.pbLight, &QPushButton::clicked, this, &skinwrap::onLight);
	initSkin();
}

void skinwrap::initSkin()
{
	ui.labelClose->setPixmap(QPixmap(skin("close.png")).scaled(50, 50));
}

void skinwrap::onDark()
{
	setAppSkin("dark");
	initSkin();
}

void skinwrap::onLight()
{
	setAppSkin("light");
	initSkin();
}