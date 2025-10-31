#include "Arduino.h"
#include "SoftwareSerial.h"
#include "mStepper.h"
#include "analogPins.h"

Analog::Analog(){}

Analog::~Analog(){}

int Analog::Read_Buttons()
{
    setBttnRead(analogRead(0));
    if (getBttnRead() > 975) return getbtnNONE();
    if (getBttnRead() < 25)   return getbtnRIGHT();   //0.01V
    if (getBttnRead() < 75)  return getbtnUP();      //0.25V
    if (getBttnRead() < 125)  return getbtnDOWN();   //0.50V
    if (getBttnRead() < 175)  return getbtnLEFT();   //0.70V
    if (getBttnRead() < 225)  return getbtnSELECT(); //0.90V
    if (getBttnRead() < 300)  return getbtnCANCEL(); //1.10V
    return getbtnNONE();
}

int Analog::Read_Sensors()
{
    setSensorRead(analogRead(1));
    if (getSensorRead() < 80) return getcontinueTrail();
    if (getSensorRead() < 590)  return getbeginingTrail();
    if (getSensorRead() < 900)  return getendTrail();
    return getsensorNONE();
}

void Analog::trailSetup()
{
    mStepper myStepper( getStepsPerRevolution() , getmpin1() , getmpin2() , getmpin3() , getmpin4() );
    int i = getStepCount();
    for ( setSensorRead(analogRead(1)); getSensorRead() > 80; setStepCount(i--)) 
    {
        myStepper.setSpeed(getVelPPM());
        myStepper.step(-1);
        Serial.print("steps:");
        Serial.println(getStepCount());
        setSens(analogRead(1));  
        if(getSens() < 80)
        {
            setStepCount(0);
            break;
        }
    }
}
