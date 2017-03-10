#include "skinwrap.h"
#include <QtWidgets/QApplication>
#include <QFile>
#include <QDebug>
#include "skin.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	setAppSkin("light");

	skinwrap w;
	w.show();
	return a.exec();
}
