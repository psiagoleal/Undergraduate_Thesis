#ifndef SoftwareCom_h
#define SoftwareCom_h

#include "Config.h"

class SoftwareCom: public Data
{
    public:
    SoftwareCom();
    ~SoftwareCom();

    void SerialComSetup();

    void ReadBttn();
};
#endif