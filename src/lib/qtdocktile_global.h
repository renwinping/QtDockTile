/****************************************************************************
**
** QtDockTile - crossplatform for the work this docks 
**
** Copyright © 1301 USA
** Copyright © 2012 Sidorov Aleksey <gorthauer87@ya.ru>
**
*****************************************************************************
**
** $QTDOCKTILE_BEGIN_LICENSE$
** This program is free software: you can redistribute it and/or modify
** it under the terms of the GNU Lesser General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
** See the GNU Lesser General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program.  If not, see http://www.gnu.org/licenses/.
** $QTDOCKTILE_END_LICENSE$
**
****************************************************************************/

#ifndef QTDOCKICON_GLOBAL_H
#define QTDOCKICON_GLOBAL_H

#include <QtCore/qglobal.h>

#ifndef QT_DOCKTILE_STATIC
#  if defined(QT_DOCKTILE_LIB)
#    define QTDOCKTILE_EXPORT Q_DECL_EXPORT
#  else
#    define QTDOCKTILE_EXPORT Q_DECL_IMPORT
#  endif
#else
#  define QTDOCKTILE_EXPORT
#endif

#endif // QTDOCKICON_GLOBAL_H

