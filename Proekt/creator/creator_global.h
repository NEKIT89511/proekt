#ifndef CREATOR_GLOBAL_H
#define CREATOR_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CREATOR_LIBRARY)
#  define CREATOR_EXPORT Q_DECL_EXPORT
#else
#  define CREATOR_EXPORT Q_DECL_IMPORT
#endif

#endif // CREATOR_GLOBAL_H
