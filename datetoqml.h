#ifndef DATETOQML_H
#define DATETOQML_H
#include <QObject>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <getsiblings.h>

class dateToQml : public QObject
{
    Q_OBJECT
public:
    int cpuCore;
    dateToQml();
    Q_INVOKABLE QString test();
    Q_INVOKABLE QString testTwo();
    Q_INVOKABLE int coreNumber();
};

#endif // DATETOQML_H
