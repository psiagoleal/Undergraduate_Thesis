#ifndef Variables_h
#define Variables_h
#include "Arduino.h"
#include <EEPROM.h>

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

    const int mpin1 = 5;
    const int mpin2 = 6;
    const int mpin3 = 7;
    const int mpin4 = 8;

    int driverConfig = 16; //configuração de micropassos do driver
    const int stepsPerRevolution = 200; //passos inteiros do motor de passos
    float driverSteps = stepsPerRevolution * driverConfig; //passos por revolução para o driver+motor
    float screwSteps = 1000; //passo da rosca em micrômetro
    float distancePerStep = screwSteps / driverSteps; //distância percorrida por passo pelo sistema
    float distanceUm;

    float retorno = 0;
    float stepCount = 0;
    unsigned long velStepManual = 16;
    unsigned long velStep = stepsPerRevolution;
    unsigned long velPPM = driverSteps;
    float totalSteps = 2000000;
    unsigned long maxVel = 10000;
    float progSteps = 0;
    float progVarStep = 0;
    int eeAdressStep = 0;
    float stepCountAbsoluto = EEPROM.get( eeAdressStep,  stepCountAbsoluto);
    int eeAdressPos1 = sizeof( stepCountAbsoluto) + 1;
    float posicao1 = EEPROM.get( eeAdressPos1,  posicao1);
    int eeAdressPos2 = sizeof( stepCountAbsoluto) + sizeof( posicao1) + 1;
    float posicao2 = EEPROM.get( eeAdressPos2,  posicao2);
    int eeAdressPos3 = sizeof( stepCountAbsoluto) + sizeof( posicao1) + sizeof( posicao2) + 1;
    float posicao3 = EEPROM.get( eeAdressPos3,  posicao3);
    float previousStepCount = 0;

    int SensorRead = 0;
    int sens = 0;
    int sensor = 0;
    // int SensorCode = 0;

    unsigned long ButtonDelay = 350;
    int ButtonCode = 0;
    int ButtonsRead = 0;

    int ScreenNumber = 0;
    bool isMainMenu = false;
    bool isBacklightOn = true;
    unsigned long previousMillis = 0;
#endif