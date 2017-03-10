#include "skin_private.h"
#include <QtWidgets/QApplication>
#include <QFile>

SkinPrivate::SkinPrivate()
{
}

SkinPrivate& SkinPrivate::instance()
{
	static SkinPrivate s_obj;
	return s_obj;
}

void SkinPrivate::setSkin(const QString &skinName)
{
	m_skinName = skinName;
}

QString SkinPrivate::path(const QString &fileName)
{
	return QString(":/%1/%2").arg(m_skinName).arg(fileName);
}