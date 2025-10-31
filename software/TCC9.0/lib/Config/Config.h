#ifndef Config_h
#define Config_h

#include "mStepper.h"

namespace declare
{
        const int btnRIGHT = 0;
        const int btnUP = 1;
        const int btnDOWN = 2;
        const int btnLEFT = 3;
        const int btnSELECT = 4;
        const int btnCANCEL = 5;
        const int btnNONE = 6;

        const int continueTrail = 0;
        const int beginingTrail = 1;
        const int endTrail = 2;
        const int sensorNONE = 3;

        const int SerialComNo = 0;
        const int SerialComYes = 1;
}

class Data
{
    

    public:

        //mStepper myStepper;
        
        Data();
        ~Data();

        void cleanMemory();

        void setDebug(int pDebug);
        
        int getDebug();

        void setSerialCom(int pSerialCom);

        const int getSerialCom();

        void setSens(int psens);

        void setSensor(int psensor);

        // void setSensorCode(int pSensorCode);

        void setSensorRead(int pSensorRead);

        void setBttnDelay(unsigned long pButtonDelay);

        void setBttnCode(int pButtonCode);

        void setBttnRead(int pButtonsRead);

        void setTotalSteps(float ptotalSteps);

        void setDistanceUm();

        void setStepCount(float pstepCount);

        void setStepCountAbsoluto(float pstepCountAbsoluto);

        void setPosicao1(float pposicao1);

        void setPosicao2(float pposicao2);

        void setPosicao3(float pposicao3);

        void setDriverSteps(float pdriverSteps);

        void setPreviousStepCount(float ppreviousStepCount);

        void setVelStepManual(unsigned long pvelStepManual);

        void setVelPPM(unsigned long pvelPPM);

        void setVelStep(unsigned long pvelStep);

        void setMaxVel(unsigned long pmaxVel);

        void setScrewSteps(float pscrewSteps);

        void setProgSteps(float pprogSteps);

        void setProgVarStep(float pprogVarStep);

        void setRetorno(float pretorno);

        void setScreenNumber(int pScreenNumber);

        void setIsMainMenu(bool pisMainMenu);

        void setIsBacklightOn(bool pisBacklightOn);

        void setPreviousMillis(unsigned long ppreviousMillis);

        void setEeAdressStep(int peeAdressStep);

        void setEeAdressPos1(int peeAdressPos1);

        void setEeAdressPos2(int peeAdressPos2);

        void setEeAdressPos3(int peeAdressPos3);

        float getDriverSteps();

        const int getStepsPerRevolution();

        const int getbtnRIGHT();

        const int getbtnUP();

        const int getbtnDOWN();

        const int getbtnLEFT();

        const int getbtnSELECT();

        const int getbtnCANCEL();

        const int getbtnNONE();

        const int getcontinueTrail();

        const int getbeginingTrail();

        const int getendTrail();

        const int getsensorNONE();

        const int getcolLCD();

        const int getrowLCD();

        const int getaddrLCD();

        const int getpinEn();

        const int getpinRw();

        const int getpinRs();

        const int getpinD4();

        const int getpinD5();

        const int getpinD6();

        const int getpinD7();

        const int getpinBackLight();

        const int getmpin1();

        const int getmpin2();

        const int getmpin3();

        const int getmpin4();
        
        int getEeAdressStep();

        int getEeAdressPos1();

        int getEeAdressPos2();

        int getEeAdressPos3();

        int getSens();

        int getSensor();

        // int getSensorCode();

        int getSensorRead();

        unsigned long getBttnDelay();

        int getBttnCode();

        int getBttnRead();

        float getTotalSteps();

        float getDistanceUm();

        float getStepCount();

        float getStepCountAbsoluto();

        float getPosicao1();

        float getPosicao2();

        float getPosicao3();

        float getPreviousStepCount();

        unsigned long getVelStepManual();

        unsigned long getVelPPM();

        unsigned long getVelStep();

        unsigned long getMaxVel();

        float getScrewSteps();

        float getProgSteps();

        float getProgVarStep();

        float getRetorno();

        int getScreenNumber();

        bool getIsMainMenu();

        bool getIsBacklightOn();

        unsigned long getPreviousMillis();

        /*const int btnRIGHT = 0;
        const int btnUP = 1;
        const int btnDOWN = 2;
        const int btnLEFT = 3;
        const int btnSELECT = 4;
        const int btnCANCEL = 5;
        const int btnNONE = 6;

        const int continueTrail = 0;
        const int beginingTrail = 1;
        const int endTrail = 2;
        const int sensorNONE = 3;

        const int SerialComNo = 0;
        const int SerialComYes = 1;

        const int* pbtnRIGHT = &btnRIGHT;
        const int* pbtnUP = &btnUP;
        const int* pbtnDOWN = &btnDOWN;
        const int* pbtnLEFT = &btnLEFT;
        const int* pbtnSELECT = &btnSELECT;
        const int* pbtnCANCEL = &btnCANCEL;
        const int* pbtnNONE = &btnNONE;

        const int* pcontinueTrail = &continueTrail;
        const int* pbeginingTrail = &beginingTrail;
        const int* pendTrail = &endTrail;
        const int* psensorNONE = &sensorNONE;

        const int* pSerialComNo = &SerialComNo;
        const int* pSerialComYes = &SerialComYes;*/

    protected:
        int pSC;

};
#endif
