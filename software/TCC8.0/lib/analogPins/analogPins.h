#ifndef analogPins_h
#define analogPins_h

#include "Config.h"

class Analog: public Data
{
    public:
        Analog();
        ~Analog();

        int Read_Buttons();
        int Read_Sensors();
        void trailSetup();
};

#endif
