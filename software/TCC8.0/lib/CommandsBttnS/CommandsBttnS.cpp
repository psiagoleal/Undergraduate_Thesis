#include "Arduino.h"
#include <EEPROM.h>
#include "mStepper.h"
#include "Interface.h"
#include "CommandsBttnS.h"

Select::Select(){}

Select::~Select(){}

void Select::BttnS1()
{
    
    UserInterface& Screen10(); 
}

void Select::BttnS10()
{
    
    UserInterface& Screen100(); 
}

void Select::BttnS100()
{
    
    UserInterface& Screen110(); 
}

void Select::BttnS101(){}

void Select::BttnS110(){}

void Select::BttnS111()
{
    
    setStepCountAbsoluto(getStepCount());
    setStepCount(0);
    EEPROM.put(getEeAdressStep(), getStepCountAbsoluto());
    UserInterface& Screen101(); 
}

void Select::BttnS20()
{
    
    UserInterface& Screen200(); 
}

void Select::BttnS200(){}

void Select::BttnS201(){}

void Select::BttnS202(){}

void Select::BttnS210(){}

void Select::BttnS211(){}

void Select::BttnS212(){}

void Select::BttnS30()
{
    
    UserInterface& Screen300(); 
}

void Select::BttnS300()
{
    
    UserInterface& Screen310(); 
}

void Select::BttnS310()
{
    
    setEeAdressPos1(sizeof(getStepCountAbsoluto()) + 1);
    setPosicao1(getStepCount());
    EEPROM.put(getEeAdressPos1(), getPosicao1());
    //addr = addr + 1;
    UserInterface& Screen300(); 
}

void Select::BttnS311()
{
    
    setEeAdressPos2(sizeof(getStepCountAbsoluto()) + sizeof(getPosicao1()) + 1);
    setPosicao2(getStepCount());
    EEPROM.put(getEeAdressPos2(), getPosicao2());
    //addr = addr + 1;
    UserInterface& Screen300(); 
}

void Select::BttnS312()
{
    
    setEeAdressPos3(sizeof(getStepCountAbsoluto()) + sizeof(getPosicao1()) + sizeof(getPosicao2()) + 1);
    setPosicao3(getStepCount());
    EEPROM.put(getEeAdressPos3(), getPosicao3());
    UserInterface& Screen300(); 
}

void Select::BttnS40(){}

void Select::BttnS400(){}

void Select::BttnS50(){}

void Select::BttnS500(){}

void Select::BttnS501(){}

void Select::BttnS502(){}

void Select::BttnS503(){}

void Select::BttnS510(){}

void Select::BttnS511(){}

void Select::BttnS512(){}

void Select::BttnS513(){}

void Select::BttnS520()
{
    Data v;
    mStepper myStepper( getStepsPerRevolution() , getmpin1() , getmpin2() , getmpin3() , getmpin4() ); 
    setRetorno(getStepCount() - getStepCountAbsoluto());
    myStepper.setSpeed(getVelPPM());             
    myStepper.step(-getRetorno());
    setStepCount(getPosicao3());
    Serial.print("steps:");
    Serial.println(getStepCount()); 
}
void Select::BttnS521()
{
    mStepper myStepper( getStepsPerRevolution() , getmpin1() , getmpin2() , getmpin3() , getmpin4() ); 
    setRetorno(getStepCount() - getPosicao1());
    myStepper.setSpeed(getVelPPM());             
    myStepper.step(-getRetorno());
    setStepCount(getPosicao3());
    Serial.print("steps:");
    Serial.println(getStepCount()); 
}
void Select::BttnS522()
{
    mStepper myStepper( getStepsPerRevolution() , getmpin1() , getmpin2() , getmpin3() , getmpin4() ); 
    setRetorno(getStepCount() - getPosicao2());
    myStepper.setSpeed(getVelPPM());             
    myStepper.step(-getRetorno());
    setStepCount(getPosicao3());
    Serial.print("steps:");
    Serial.println(getStepCount()); 
}
void Select::BttnS523()
{
    mStepper myStepper( getStepsPerRevolution() , getmpin1() , getmpin2() , getmpin3() , getmpin4() ); 
    setRetorno(getStepCount() - getPosicao3());
    myStepper.setSpeed(getVelPPM());             
    myStepper.step(-getRetorno());
    setStepCount(getPosicao3());
    Serial.print("steps:");
    Serial.println(getStepCount()); 
}
void Select::BttnS60(){}
