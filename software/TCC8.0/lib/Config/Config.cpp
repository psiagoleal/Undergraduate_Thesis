#include "Arduino.h"
#include <Config.h>
#include <Variables.h>
#include <mStepper.h>

Data::Data(): myStepper()
{
    myStepper.setup(stepsPerRevolution , mpin1 , mpin2 , mpin3 , mpin4);
}

Data::~Data(){}

void Data::setDebug(int pDebug)
{
    Debug = pDebug;
}

int Data::getDebug()
{
    return Debug;
}

void Data::setSerialCom(int pSerialCom)
{
    if(pSerialCom == 0)
    {
        pSC = SerialComNo;
    }
    if(pSerialCom == 1)
    {
        pSC =  SerialComYes;
    }
}

const int Data::getSerialCom()
{
    return pSC;
}

void Data::setSens(int psens)
{
    sens = psens;
}

void Data::setSensor(int psensor)
{
    sensor = psensor;
}

// void Data::setSensorCode(int pSensorCode)
// {
//     SensorCode = pSensorCode;
// }

void Data::setSensorRead(int pSensorRead)
{
    SensorRead = pSensorRead;
}

void Data::setBttnDelay(int pButtonDelay)
{
    ButtonDelay = pButtonDelay;
}

void Data::setBttnCode(int pButtonCode)
{
    ButtonCode   = pButtonCode;
}

void Data::setBttnRead(int pButtonsRead)
{
    ButtonsRead  = pButtonsRead;
}

void Data::setTotalSteps(int ptotalSteps)
{
    totalSteps = ptotalSteps;
}

void Data::setStepCount(int pstepCount)
{
    stepCount = pstepCount;
}

void Data::setStepCountAbsoluto(int pstepCountAbsoluto)
{
    stepCountAbsoluto = pstepCountAbsoluto;
}

void Data::setPosicao1(int pposicao1)
{
    posicao1 = pposicao1;
}

void Data::setPosicao2(int pposicao2)
{
    posicao2 = pposicao2;
}

void Data::setPosicao3(int pposicao3)
{
    posicao3 = pposicao3;
}

void Data::setPreviousStepCount(int ppreviousStepCount)
{
    previousStepCount = ppreviousStepCount;
}

void Data::setVelStepManual(int pvelStepManual)
{
    velStepManual = pvelStepManual;
}

void Data::setVelPPM(long pvelPPM)
{
    velPPM = pvelPPM;
}

void Data::setVelStep(int pvelStep)
{
    velStep = pvelStep;
}

void Data::setMaxVel(int pmaxVel)
{
    maxVel = pmaxVel;
}

void Data::setProgSteps(int pprogSteps)
{
    progSteps = pprogSteps;
}

void Data::setRetorno(int pretorno)
{
    retorno = pretorno;
}

void Data::setScreenNumber(int pScreenNumber)
{
    ScreenNumber = pScreenNumber;
}

void Data::setIsMainMenu(bool pisMainMenu)
{
    isMainMenu = pisMainMenu;
}

void Data::setIsBacklightOn(bool pisBacklightOn)
{
    isBacklightOn = pisBacklightOn;
    // lcd.backlight();
}

void Data::setPreviousMillis(unsigned long ppreviousMillis)
{
    previousMillis = ppreviousMillis;
}

void Data::setEeAdressStep(int peeAdressStep)
{
    eeAdressStep = peeAdressStep;
}

void Data::setEeAdressPos1(int peeAdressPos1)
{
    eeAdressPos1 = peeAdressPos1;
}

void Data::setEeAdressPos2(int peeAdressPos2)
{
    eeAdressPos2 = peeAdressPos2;
}

void Data::setEeAdressPos3(int peeAdressPos3)
{
    eeAdressPos3 = peeAdressPos3;
}

const int Data::getStepsPerRevolution()
{
    return stepsPerRevolution;
}

const int Data::getbtnRIGHT()
{
    return pbtnRIGHT;
}

const int Data::getbtnUP()
{
    return pbtnUP;
}

const int Data::getbtnDOWN()
{
    return pbtnDOWN;
}

const int Data::getbtnLEFT()
{
    return pbtnLEFT;
}

const int Data::getbtnSELECT()
{
    return pbtnSELECT;
}

const int Data::getbtnCANCEL()
{
    return pbtnCANCEL;
}

const int Data::getbtnNONE()
{
    return pbtnNONE;
}

const int Data::getcontinueTrail()
{
    return pcontinueTrail;
}

const int Data::getbeginingTrail()
{
    return pbeginingTrail;
}

const int Data::getendTrail()
{
    return pendTrail;
}

const int Data::getsensorNONE()
{
    return psensorNONE;
}

const int Data::getcolLCD()
{
    return colLCD;
}

const int Data::getrowLCD()
{
    return rowLCD;
}

const int Data::getaddrLCD()
{
    return addrLCD;
}

const int Data::getpinEn()
{
    return pinEn;
}

const int Data::getpinRw()
{
    return pinRw;
}

const int Data::getpinRs()
{
    return pinRs;
}

const int Data::getpinD4()
{
    return pinD4;
}

const int Data::getpinD5()
{
    return pinD5;
}

const int Data::getpinD6()
{
    return pinD6;
}

const int Data::getpinD7()
{
    return pinD7;
}

const int Data::getpinBackLight()
{
    return pinBackLight;
}

const int Data::getmpin1()
{
    return mpin1;
}

const int Data::getmpin2()
{
    return mpin2;
}

const int Data::getmpin3()
{
    return mpin3;
}

const int Data::getmpin4()
{
    return mpin4;
}

int Data::getEeAdressStep()
{
    return eeAdressStep;
}

int Data::getEeAdressPos1()
{
    return eeAdressPos1;
}

int Data::getEeAdressPos2()
{
    return eeAdressPos2;
}

int Data::getEeAdressPos3()
{
    return eeAdressPos3;
}

int Data::getSens()
{
    return sens;
}

int Data::getSensor()
{
    return sensor;
}

// int Data::getSensorCode()
// {
//     return SensorCode;
// }

int Data::getSensorRead()
{
    return SensorRead;
}

int Data::getBttnDelay()
{
    return ButtonDelay;
}

int Data::getBttnCode()
{
    return ButtonCode;
}

int Data::getBttnRead()
{
    return ButtonsRead;
}

int Data::getTotalSteps()
{
    return totalSteps;
}

int Data::getStepCount()
{
    return stepCount;
}

int Data::getStepCountAbsoluto()
{
    return stepCountAbsoluto;
}

int Data::getPosicao1()
{
    return posicao1;
}

int Data::getPosicao2()
{
    return posicao2;
}

int Data::getPosicao3()
{
    return posicao3;
}

int Data::getPreviousStepCount()
{
    return previousStepCount;
}

int Data::getVelStepManual()
{
    return velStepManual;
}

long Data::getVelPPM()
{
    return velPPM;
}

int Data::getVelStep()
{
    return velStep;
}

int Data::getMaxVel()
{
    return maxVel;
}

int Data::getProgSteps()
{
    return progSteps;
}

int Data::getRetorno()
{
    return retorno;
}

int Data::getScreenNumber()
{
    return ScreenNumber;
}

bool Data::getIsMainMenu()
{
    return isMainMenu;
}

bool Data::getIsBacklightOn()
{
    return isBacklightOn;
}

unsigned long Data::getPreviousMillis()
{
    return previousMillis;
}


