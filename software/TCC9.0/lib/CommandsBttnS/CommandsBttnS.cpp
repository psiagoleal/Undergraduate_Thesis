#include "Arduino.h"
#include <EEPROM.h>
#include "mStepper.h"
#include <Interface.h>
#include "CommandsBttnS.h"

Select::Select(){UserInterface Interface;}

Select::~Select(){}

void Select::BttnS1()
{
    
    Interface.Screen10(); 
}

void Select::BttnS10()
{
    
    Interface.Screen100(); 
}

void Select::BttnS100()
{
    
    Interface.Screen110(); 
}

void Select::BttnS101()
{
    Interface.Screen111();
}

void Select::BttnS110(){}

void Select::BttnS111()
{
    setStepCountAbsoluto(getStepCount());
    setStepCount(0);
    EEPROM.put(getEeAdressStep(), getStepCountAbsoluto());
    Interface.Screen101(); 
}

void Select::BttnS20()
{
    
    Interface.Screen200(); 
}

void Select::BttnS200(){}

void Select::BttnS201(){}

void Select::BttnS202(){}

void Select::BttnS210(){}

void Select::BttnS211(){}

void Select::BttnS212(){}

void Select::BttnS30()
{
    
    Interface.Screen300(); 
}

void Select::BttnS300()
{
    
    Interface.Screen310(); 
}

void Select::BttnS310()
{
    
    setEeAdressPos1(sizeof(getStepCountAbsoluto()) + 1);
    setPosicao1(getStepCount());
    EEPROM.put(getEeAdressPos1(), getPosicao1());
    //addr = addr + 1;
    Interface.Screen300(); 
}

void Select::BttnS311()
{
    
    setEeAdressPos2(sizeof(getStepCountAbsoluto()) + sizeof(getPosicao1()) + 1);
    setPosicao2(getStepCount());
    EEPROM.put(getEeAdressPos2(), getPosicao2());
    //addr = addr + 1;
    Interface.Screen300(); 
}

void Select::BttnS312()
{
    
    setEeAdressPos3(sizeof(getStepCountAbsoluto()) + sizeof(getPosicao1()) + sizeof(getPosicao2()) + 1);
    setPosicao3(getStepCount());
    EEPROM.put(getEeAdressPos3(), getPosicao3());
    Interface.Screen300(); 
}

void Select::BttnS40(){}

void Select::BttnS400(){}

void Select::BttnS50()
{
    
    Interface.Screen500();
}

void Select::BttnS500()
{
    setProgVarStep(100);
    Interface.Screen503();
}

void Select::BttnS501()
{
    setProgVarStep(10);
    Interface.Screen503();
}

void Select::BttnS502()
{
    setProgVarStep(1);
    Interface.Screen503();
}

void Select::BttnS503()
{
    Interface.Screen510();
}

void Select::BttnS510()
{
    mStepper myStepper( getmpin1() , getmpin2() );
    if(myStepper.getCancel() == false){setStepCount(getStepCount() + getVelStep());}
    else{setStepCount(getStepCount() + myStepper.getStepDone());}
    myStepper.setSpeed(getVelPPM());             
    myStepper.move(getProgSteps());
    //myStepper.runToPosition();
    Serial.print(F("steps:"));
    Serial.println(getStepCount());              
    if (getStepCount() >= getTotalSteps())
    {
        setStepCount(getTotalSteps());
    }
    Interface.Screen500(); 
}

void Select::BttnS511()
{
    mStepper myStepper( getmpin1() , getmpin2() );
    if(myStepper.getCancel() == false){setStepCount(getStepCount() + getVelStep());}
    else{setStepCount(getStepCount() + myStepper.getStepDone());}
    myStepper.setSpeed(getVelPPM());             
    myStepper.move(-getProgSteps());
    //myStepper.runToPosition();
    Serial.print(F("steps:"));
    Serial.println(getStepCount());              
    if (getStepCount() >= getTotalSteps())
    {
        setStepCount(getTotalSteps());
    }
    Interface.Screen500(); 
}

void Select::BttnS60(){}

void Select::BttnS600(){}

void Select::BttnS601(){}

void Select::BttnS602(){}

void Select::BttnS603(){}

void Select::BttnS610(){}

void Select::BttnS611(){}

void Select::BttnS612(){}

void Select::BttnS613(){}

void Select::BttnS620()
{
    mStepper myStepper( getmpin1() , getmpin2() );
    setRetorno(getStepCount() - getStepCountAbsoluto());
    myStepper.setSpeed(getVelPPM());             
    myStepper.move(-getRetorno());
    setStepCount(getPosicao3());
    Serial.print("steps:");
    Serial.println(getStepCount()); 
}
void Select::BttnS621()
{
    mStepper myStepper( getmpin1() , getmpin2() ); 
    setRetorno(getStepCount() - getPosicao1());
    myStepper.setSpeed(getVelPPM());             
    myStepper.move(-getRetorno());
    setStepCount(getPosicao3());
    Serial.print("steps:");
    Serial.println(getStepCount()); 
}
void Select::BttnS622()
{
    mStepper myStepper( getmpin1() , getmpin2() ); 
    setRetorno(getStepCount() - getPosicao2());
    myStepper.setSpeed(getVelPPM());             
    myStepper.move(-getRetorno());
    setStepCount(getPosicao3());
    Serial.print("steps:");
    Serial.println(getStepCount()); 
}
void Select::BttnS623()
{
    mStepper myStepper( getmpin1() , getmpin2() );
    setRetorno(getStepCount() - getPosicao3());
    myStepper.setSpeed(getVelPPM());             
    myStepper.move(-getRetorno());
    setStepCount(getPosicao3());
    Serial.print("steps:");
    Serial.println(getStepCount()); 
}
void Select::BttnS70(){}
