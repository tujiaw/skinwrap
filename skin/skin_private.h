#pragma once
#include <QString>

class SkinPrivate
{
public:
	static SkinPrivate& instance();

	void setSkin(const QString &skinName);
	QString path(const QString &fileName);

private:
	SkinPrivate();

private:
	QString m_skinName;
};