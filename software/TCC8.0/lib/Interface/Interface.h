#ifndef Interface_h
#define Interface_h

#include "LiquidCrystal_I2C.h"
#include "Config.h"

class UserInterface: public Data
{
    

    public:
//        LiquidCrystal_I2C lcd;

        UserInterface();
        ~UserInterface();

        void setup();

        void mainScreen();

        void Screen10();
        void Screen100();
        void Screen101();
        void Screen110();
        void Screen111();

        void Screen20();
        void Screen200();
        void Screen201();
        void Screen202();
        void Screen210();
        void Screen211();
        void Screen212();

        void Screen30();
        void Screen300();
        void Screen310();
        void Screen311();
        void Screen312();

        void Screen40();
        void Screen400();

        void Screen50();
        void Screen500();
        void Screen501();
        void Screen502();
        void Screen503();
        void Screen510();
        void Screen511();
        void Screen512();
        void Screen513();
        void Screen520();
        void Screen521();
        void Screen522();
        void Screen523();

        void Screen60();

        void Screen_beginingTrail();

        void Screen_endTrail();

        // class Data *pv;
        // class LiquidCrystal_I2C *plcd;
        
        // private:
        // class Data{Data *v;};
        // class Analog{Analog *a;};
        // class Can{Can *c;};
        // class Down{Down *d;};
        // class Left{Left *l;};
        // class Right{Right *r;};
        // class Select{Select *s;};
        // class Up{Up *up;};
        // // class Interface{Interface *in;};
};

// Interface in;
#endif
