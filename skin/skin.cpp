#include "skin.h"
#include "skin_private.h"

void set_skin(const QString &skinName)
{
	SkinPrivate::instance().setSkin(skinName);
}

QString skin(const QString &fileName)
{
	return SkinPrivate::instance().path(fileName);
}