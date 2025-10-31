#ifndef Variables_h
#define Variables_h
#include "Arduino.h"
#include <EEPROM.h>

    const int pbtnRIGHT = 0;
    const int pbtnUP = 1;
    const int pbtnDOWN = 2;
    const int pbtnLEFT = 3;
    const int pbtnSELECT = 4;
    const int pbtnCANCEL = 5;
    const int pbtnNONE = 6;

    const int pcontinueTrail = 0;
    const int pbeginingTrail = 1;
    const int pendTrail = 2;
    const int psensorNONE = 3;

    const int SerialComNo = 0;
    const int SerialComYes = 1;

    int Debug = 0;

    const int colLCD = 16;
    const int rowLCD = 2;
    const int addrLCD = 0x27;
    const int pinEn = 2;
    const int pinRw = 1;
    const int pinRs = 0;
    const int pinD4 = 4;
    const int pinD5 = 5;
    const int pinD6 = 6;
    const int pinD7 = 7;
    const int pinBackLight = 3;

    const int mpin1 = 8;
    const int mpin2 = 9;
    const int mpin3 = 10;
    const int mpin4 = 11;

    const int stepsPerRevolution = 64;

    int retorno = 0;
    int stepCount = 0;
    int velStepManual = 16;
    int velStep =  stepsPerRevolution;
    long velPPM = 30 *  stepsPerRevolution;
    int totalSteps;
    int maxVel = 360 *  stepsPerRevolution;
    int progSteps = 0;
    int eeAdressStep = 0;
    int stepCountAbsoluto = EEPROM.get( eeAdressStep,  stepCountAbsoluto);
    int eeAdressPos1 = sizeof( stepCountAbsoluto) + 1;
    int posicao1 = EEPROM.get( eeAdressPos1,  posicao1);
    int eeAdressPos2 = sizeof( stepCountAbsoluto) + sizeof( posicao1) + 1;
    int posicao2 = EEPROM.get( eeAdressPos2,  posicao2);
    int eeAdressPos3 = sizeof( stepCountAbsoluto) + sizeof( posicao1) + sizeof( posicao2) + 1;
    int posicao3 = EEPROM.get( eeAdressPos3,  posicao3);
    int previousStepCount = 0;

    int SensorRead = 0;
    int sens = 0;
    int sensor = 0;
    // int SensorCode = 0;

    int ButtonDelay = 350;
    int ButtonCode = 0;
    int ButtonsRead = 0;

    int ScreenNumber = 0;
    bool isMainMenu = false;
    bool isBacklightOn = true;
    unsigned long previousMillis = 0;
#endif