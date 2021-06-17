#include "datetoqml.h"

dateToQml::dateToQml()
{
    //    QString line;
    //    QFile cpuCoreFile("/proc/cpuinfo");
    //    if (cpuCoreFile.open(QIODevice::ReadOnly))
    //    {
    //        while(true)
    //        {
    //            line = cpuCoreFile.readLine();
    //            if (!line.isEmpty())
    //            {
    //                if (line.startsWith("siblings"))
    //                {
    //                    cpuCore = line.split(":")[1].trimmed().toInt();
    //                    break;
    //                }
    //            }
    //            else
    //                break;
    //        }
    //        cpuCoreFile.close();
    //    }
    cpuCore = coreNumber::number - 2;
}

QString dateToQml::test()
{
    QString line;
    for (int i = 0; i < cpuCore; i++)
    {
        QFile file(QString("/sys/devices/system/cpu/cpu%1/cpufreq/scaling_cur_freq").arg(i));
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
            return 0;
        QTextStream in(&file);
        line =in.readLine() + "," + line;
        file.close();
    }
    return line;
}

QString dateToQml::testTwo()
{
    return "22222";
}

int dateToQml::coreNumber()
{
    return cpuCore;
}
