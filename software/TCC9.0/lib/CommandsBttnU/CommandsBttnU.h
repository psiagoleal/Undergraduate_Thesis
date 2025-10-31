#ifndef CommandsBttnU_h
#define  CommandsBttnU_h

#include "Config.h"
#include "Interface.h"
#include "mStepper.h"

class Up: public Data
{
    public:
        mStepper myStepper;
        UserInterface Interface;
        Up();
        ~Up();

        void BttnU1();
        void BttnU10();
        void BttnU100();
        void BttnU101();
        void BttnU110();
        void BttnU111();
        void BttnU20();
        void BttnU200();
        void BttnU201();
        void BttnU202();
        void BttnU210();
        void BttnU211();
        void BttnU212();
        void BttnU30();
        void BttnU300();
        void BttnU310();
        void BttnU311();
        void BttnU312();
        void BttnU40();
        void BttnU400();
        void BttnU50();
        void BttnU500();
        void BttnU501();
        void BttnU502();
        void BttnU503();
        void BttnU510();
        void BttnU511();
        void BttnU60();
        void BttnU600();
        void BttnU601();
        void BttnU602();
        void BttnU603();
        void BttnU610();
        void BttnU611();
        void BttnU612();
        void BttnU613();
        void BttnU620();
        void BttnU621();
        void BttnU622();
        void BttnU623();
        void BttnU70();
};

// Up up;
#endif