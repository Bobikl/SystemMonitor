#include "getsiblings.h"

int coreNumber::number = 0;
getSiblings::getSiblings()
{
    QDir m_cpuDir("/sys/devices/system/cpu");
    int k = 0;
    auto dirlist = m_cpuDir.entryList(QDir::Dirs);
    for (auto &fileName : dirlist)
    {
        if (fileName.startsWith("cpu"))
        {
            k++;
        }
    }
    coreNumber::number = k;
}
