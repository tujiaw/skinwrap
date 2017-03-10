#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(SKIN_LIB)
#  define SKIN_EXPORT Q_DECL_EXPORT
# else
#  define SKIN_EXPORT Q_DECL_IMPORT
# endif
#else
# define SKIN_EXPORT
#endif
