#ifndef _CITPLIB_H_
#define _CITPLIB_H_

#include <qglobal.h>

#ifdef CITPLIB_LIB
# define CITPLIB_EXPORT Q_DECL_EXPORT
#else
# define CITPLIB_EXPORT Q_DECL_IMPORT
#endif

#include <QObject>
#include <QScriptable>

class CITPLIB_EXPORT CITPLib : public QObject, public QScriptable
{
  Q_OBJECT    
public:
  CITPLib();
  virtual ~CITPLib();
};

#endif // _CITPLIB_H_