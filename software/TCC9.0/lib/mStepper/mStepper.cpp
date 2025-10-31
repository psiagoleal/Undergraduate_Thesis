#include "Arduino.h"
#include "mStepper.h"
#include "analogPins.h"
#include "Config.h"

mStepper::mStepper(){}

mStepper::mStepper(int dirPin , int stepPin)
{
    this->dirPin = dirPin;
    this->stepPin = stepPin;
    
}

mStepper::~mStepper(){}

void mStepper::setup(int dirPin , int stepPin)
{
    this->dirPin = dirPin;
    this->stepPin = stepPin;
    //pinMode(dirPin, OUTPUT);
    //pinMode(stepPin, OUTPUT);
}

void mStepper::move(int step)
{
    Analog a;
    Data v;
    setPanic(false);
    if(step >= 0)
    {
    digitalWrite(dirPin, HIGH);
  // Spin the stepper motor 1 revolution slowly:
        for (int i = 0; i < step && getCancel() == false; i++)
        {
            a.Read_Buttons();
            if(v.getBttnRead()==5){i = step; setPanic(true); break;}
            else
            {
                    // These four lines result in 1 step:
                digitalWrite(stepPin, HIGH);
                delayMicroseconds(this->stepMicrosec);
                digitalWrite(stepPin, LOW);
                delayMicroseconds(this->stepMicrosec);
            }
        }
  }
  else
  {
      digitalWrite(dirPin, LOW);
  // Spin the stepper motor 1 revolution slowly:
        for (int i = 0; i > step && getCancel() == false; i--)
        {
            a.Read_Buttons();
            if(v.getBttnRead()==5){i = step; setPanic(true); break;}
            else
            {
            // These four lines result in 1 step:
                digitalWrite(stepPin, HIGH);
                delayMicroseconds(this->stepMicrosec);
                digitalWrite(stepPin, LOW);
                delayMicroseconds(this->stepMicrosec);
                stepDone = i;
            }
        }
  }
}

void mStepper::setSpeed(int speed)
{

    stepMicrosec = 1000000/speed;

}

void mStepper::setPanic(bool panic)
{
    cancel = panic;
}

bool mStepper::getCancel()
{
    return cancel;
}

unsigned long mStepper::getStepDone()
{
    return stepDone;
}
