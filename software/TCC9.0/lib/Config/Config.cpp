#include "Arduino.h"
#include <Config.h>
#include <Variables.h>
#include <mStepper.h>
#include "EEPROM.h"

using namespace declare;

Data::Data()//: myStepper()
{
     //myStepper.setup(mpin1, mpin2);
    //myStepper.setMaxSpeed(maxVel);
    //myStepper.setSpeed(speed);
}

Data::~Data(){}

void Data::cleanMemory()
{
    for (unsigned int i = 0 ; i < EEPROM.length() ; i++)
      {
        EEPROM.write(i, 0);
      }
}

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

void Data::setBttnDelay( unsigned long pButtonDelay)
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

void Data::setTotalSteps(float ptotalSteps)
{
    totalSteps = ptotalSteps;
}

void Data::setDistanceUm()
{
    distanceUm = distancePerStep * stepCount;
}

void Data::setStepCount(float pstepCount)
{
    stepCount = pstepCount;
}

void Data::setStepCountAbsoluto(float pstepCountAbsoluto)
{
    stepCountAbsoluto = pstepCountAbsoluto;
}

void Data::setPosicao1(float pposicao1)
{
    posicao1 = pposicao1;
}

void Data::setPosicao2(float pposicao2)
{
    posicao2 = pposicao2;
}

void Data::setPosicao3(float pposicao3)
{
    posicao3 = pposicao3;
}

void Data::setPreviousStepCount(float ppreviousStepCount)
{
    previousStepCount = ppreviousStepCount;
}

void Data::setVelStepManual(unsigned long pvelStepManual)
{
    velStepManual = pvelStepManual;
}

void Data::setVelPPM(unsigned long pvelPPM)
{
    velPPM = pvelPPM;
}

void Data::setVelStep(unsigned long pvelStep)
{
    velStep = pvelStep;
}

void Data::setMaxVel(unsigned long pmaxVel)
{
    maxVel = pmaxVel;
}

void Data::setScrewSteps(float pscrewSteps)
{
    screwSteps = pscrewSteps;
}

void Data::setProgSteps(float pprogSteps)
{
    progSteps = pprogSteps;
}

void Data::setProgVarStep(float pprogVarStep)
{
    progVarStep = pprogVarStep;
}

void Data::setRetorno(float pretorno)
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

float Data::getDriverSteps()
{
    return driverSteps;
}

const int Data::getStepsPerRevolution()
{
    return stepsPerRevolution;
}

const int Data::getbtnRIGHT()
{
    return btnRIGHT;
}

const int Data::getbtnUP()
{
    return btnUP;
}

const int Data::getbtnDOWN()
{
    return btnDOWN;
}

const int Data::getbtnLEFT()
{
    return btnLEFT;
}

const int Data::getbtnSELECT()
{
    return btnSELECT;
}

const int Data::getbtnCANCEL()
{
    return btnCANCEL;
}

const int Data::getbtnNONE()
{
    return btnNONE;
}

const int Data::getcontinueTrail()
{
    return continueTrail;
}

const int Data::getbeginingTrail()
{
    return beginingTrail;
}

const int Data::getendTrail()
{
    return endTrail;
}

const int Data::getsensorNONE()
{
    return sensorNONE;
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

unsigned long Data::getBttnDelay()
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

float Data::getTotalSteps()
{
    return totalSteps;
}

float Data::getDistanceUm()
{
    return distanceUm;
}

float Data::getStepCount()
{
    return stepCount;
}

float Data::getStepCountAbsoluto()
{
    return stepCountAbsoluto;
}

float Data::getPosicao1()
{
    return posicao1;
}

float Data::getPosicao2()
{
    return posicao2;
}

float Data::getPosicao3()
{
    return posicao3;
}

float Data::getPreviousStepCount()
{
    return previousStepCount;
}

unsigned long Data::getVelStepManual()
{
    return velStepManual;
}

unsigned long Data::getVelPPM()
{
    return velPPM;
}

unsigned long Data::getVelStep()
{
    return velStep;
}

unsigned long Data::getMaxVel()
{
    return maxVel;
}

float Data::getScrewSteps()
{
    return screwSteps;
}


float Data::getProgSteps()
{
    return progSteps;
}

float Data::getProgVarStep()
{
    return progVarStep;
}

float Data::getRetorno()
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


