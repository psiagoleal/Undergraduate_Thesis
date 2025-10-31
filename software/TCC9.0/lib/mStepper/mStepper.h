#ifndef mStepper_h
#define mStepper_h
#include "Arduino.h"

class mStepper
{
public:
    mStepper();
    mStepper(int dirPin , int stepPin);
    ~mStepper();

    void setup(int dirPin, int stepPin);

    void move(int step);

    void setSpeed(int speed);
    
    void setPanic(bool panic);

    bool getCancel();

    unsigned long getStepDone();

    bool cancel = false;

    unsigned long stepDone;

protected:
    int dirPin;

    int stepPin;

    int step;

    int speed;

    bool panic;

    unsigned long stepMicrosec;

};
#endif