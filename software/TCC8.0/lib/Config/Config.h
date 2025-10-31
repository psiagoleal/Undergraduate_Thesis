#ifndef Config_h
#define Config_h

#include "mStepper.h"

class Data
{
    mStepper myStepper;

    public:
        
        Data();
        ~Data();

        void setDebug(int pDebug);
        
        int getDebug();

        void setSerialCom(int pSerialCom);

        const int getSerialCom();

        void setSens(int psens);

        void setSensor(int psensor);

        // void setSensorCode(int pSensorCode);

        void setSensorRead(int pSensorRead);

        void setBttnDelay(int pButtonDelay);

        void setBttnCode(int pButtonCode);

        void setBttnRead(int pButtonsRead);

        void setTotalSteps(int ptotalSteps);

        void setStepCount(int pstepCount);

        void setStepCountAbsoluto(int pstepCountAbsoluto);

        void setPosicao1(int pposicao1);

        void setPosicao2(int pposicao2);

        void setPosicao3(int pposicao3);

        void setPreviousStepCount(int ppreviousStepCount);

        void setVelStepManual(int pvelStepManual);

        void setVelPPM(long pvelPPM);

        void setVelStep(int pvelStep);

        void setMaxVel(int pmaxVel);

        void setProgSteps(int pprogSteps);

        void setRetorno(int pretorno);

        void setScreenNumber(int pScreenNumber);

        void setIsMainMenu(bool pisMainMenu);

        void setIsBacklightOn(bool pisBacklightOn);

        void setPreviousMillis(unsigned long ppreviousMillis);

        void setEeAdressStep(int peeAdressStep);

        void setEeAdressPos1(int peeAdressPos1);

        void setEeAdressPos2(int peeAdressPos2);

        void setEeAdressPos3(int peeAdressPos3);

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

        int getBttnDelay();

        int getBttnCode();

        int getBttnRead();

        int getTotalSteps();

        int getStepCount();

        int getStepCountAbsoluto();

        int getPosicao1();

        int getPosicao2();

        int getPosicao3();

        int getPreviousStepCount();

        int getVelStepManual();

        long getVelPPM();

        int getVelStep();

        int getMaxVel();

        int getProgSteps();

        int getRetorno();

        int getScreenNumber();

        bool getIsMainMenu();

        bool getIsBacklightOn();

        unsigned long getPreviousMillis();

    private:
        int pSC;

        // const int stepsPerRevolution;

        // int retorno;
        // int stepCount;
        // int velStepManual;
        // int velStep;
        // long velPPM;
        // int totalSteps;
        // int maxVel;
        // int progSteps;
        // int eeAdressStep;
        // int stepCountAbsoluto;
        // int eeAdressPos1;
        // int posicao1;
        // int eeAdressPos2;
        // int posicao2;
        // int eeAdressPos3;
        // int posicao3;
        // int previousStepCount;

        // int SensorRead;
        // int sens;
        // int sensor;
        // int SensorCode;

        // int ButtonDelay;
        // int ButtonCode;
        // int ButtonsRead;

        // int ScreenNumber;
        // bool isMainMenu;
        // bool isBacklightOn;
        // unsigned long previousMillis;
};
#endif
        // int&  pretorno;
        // int&  pstepCount;
        // int&  pvelStepManual;
        // int&  pvelStep;
        // long&  pvelPPM;
        // int&  ptotalSteps;
        // int&  pmaxVel;
        // int&  pprogSteps;
        // int&  peeAdressStep;
        // int&  pstepCountAbsoluto;
        // int&  peeAdressPos1;
        // int&  pposicao1;
        // int&  peeAdressPos2;
        // int&  pposicao2;
        // int&  peeAdressPos3;
        // int&  pposicao3;
        // int&  ppreviousStepCount;

        // int&  pSensorRead;
        // int&  psens;
        // int&  psensor;
        // int&  pSensorCode;

        // int&  pButtonDelay;
        // int&  pButtonCode;
        // int&  pButtonsRead;

        // int&  pScreenNumber;
        // bool&  pisMainMenu;
        // bool&  pisBacklightOn;
        // unsigned long&  ppreviousMillis;

        // int retorno = 0;
        // int stepCount = 0;
        // int velStepManual = 16;
        // int velStep =  stepsPerRevolution;
        // long velPPM = 30 *  stepsPerRevolution;
        // int totalSteps;
        // int maxVel = 360 *  stepsPerRevolution;
        // int progSteps = 0;
        // int eeAdressStep = 0;
        // int stepCountAbsoluto = EEPROM.get( eeAdressStep,  stepCountAbsoluto);
        // int eeAdressPos1 = sizeof( stepCountAbsoluto) + 1;
        // int posicao1 = EEPROM.get( eeAdressPos1,  posicao1);
        // int eeAdressPos2 = sizeof( stepCountAbsoluto) + sizeof( posicao1) + 1;
        // int posicao2 = EEPROM.get( eeAdressPos2,  posicao2);
        // int eeAdressPos3 = sizeof( stepCountAbsoluto) + sizeof( posicao1) + sizeof( posicao2) + 1;
        // int posicao3 = EEPROM.get( eeAdressPos3,  posicao3);
        // int previousStepCount = 0;

        // int SensorRead = 0;
        // int sens = 0;
        // int sensor = 0;
        // int SensorCode = 0;

        // int ButtonDelay = 350;
        // int ButtonCode = 0;
        // int ButtonsRead = 0;

        // int ScreenNumber = 0;
        // bool isMainMenu = false;
        // bool isBacklightOn = true;
        // unsigned long previousMillis = 0;
