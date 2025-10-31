#include "Arduino.h"
#include "mStepper.h"
#include "Interface.h"
#include "CommandsBttnU.h"

Up::Up(){UserInterface Interface;}

Up::~Up(){}

void Up::BttnU1(){}

void Up::BttnU10()
{
    
    Interface.Screen70(); 
}

void Up::BttnU100()
{
    
    Interface.Screen101(); 
}

void Up::BttnU101()
{
    
    Interface.Screen100(); 
}

void Up::BttnU110()
{
    
    mStepper myStepper( getmpin1() , getmpin2() );
    if(myStepper.getCancel() == 0){setStepCount(getStepCount() + getVelStepManual());}
    else{setStepCount(getStepCount() + myStepper.getStepDone());}
    myStepper.setSpeed(getVelPPM());           
    myStepper.move(getVelStepManual());
    Serial.print(F("steps:"));
    Serial.println(getStepCount());              
    if (getStepCount() >= getTotalSteps())
    {
        setStepCount(getTotalSteps());
    }
    Interface.Screen110();        
}

void Up::BttnU111(){}

void Up::BttnU20()
{
    
    Interface.Screen10();

}

void Up::BttnU200()
{
    
    Interface.Screen202();

}

void Up::BttnU201()
{
    
    Interface.Screen200();

}

void Up::BttnU202()
{
    
    Interface.Screen201();

}

void Up::BttnU210()
{
    
    int i = getVelStepManual();
    setVelStepManual(i+1);
    //getVelPPM() = getVelStepManual() / getStepsPerRevolution();
    //myStepper.setSpeed(getVelPPM());
    if (getVelStepManual() >= getMaxVel())
    {
        setVelStepManual(getMaxVel());
    }
    Interface.Screen210();
}

void Up::BttnU211()
{
    
    setVelStep(getVelStep() + getStepsPerRevolution()/2);
    setVelPPM(getVelStep() * 10 / getStepsPerRevolution());
    //myStepper.setSpeed(getVelPPM());
    if (getVelStep() >= getMaxVel())
    {
        setVelStep(getMaxVel());
    }
    Interface.Screen211();
}

void Up::BttnU212()
{
    
    mStepper myStepper( getmpin1() , getmpin2() );
    setVelPPM(getVelPPM() + getVelStepManual());
    //getVelPPM() = getVelStepManual() / getStepsPerRevolution();
    myStepper.setSpeed(getVelPPM());
    if (getVelPPM() >= getMaxVel())
    {
        setVelPPM(getMaxVel());
    }
    Interface.Screen212();
}

void Up::BttnU30()
{
    
    Interface.Screen20();
}

void Up::BttnU300()
{
    
    mStepper myStepper( getmpin1() , getmpin2() );
    if(myStepper.getCancel() == 0){setStepCount(getStepCount() + getVelStepManual());}
    else{setStepCount(getStepCount() + myStepper.getStepDone());}
    myStepper.setSpeed(getVelPPM());             
    myStepper.move(getVelStepManual());
    //myStepper.runToPosition();
    Serial.print(F("steps:"));
    Serial.println(getStepCount());              
    if (getStepCount() >= getTotalSteps())
    {
        setStepCount(getTotalSteps());
    }
    Interface.Screen300();
}

void Up::BttnU310()
{
    
    Interface.Screen312();
}

void Up::BttnU311()
{
    
    Interface.Screen310();
}

void Up::BttnU312()
{
    
    Interface.Screen311();
}

void Up::BttnU40()
{
    
    Interface.Screen30();
}

void Up::BttnU400()
{
    
    mStepper myStepper( getmpin1() , getmpin2() );
    if(myStepper.getCancel() == false)
    {
        setStepCount(getStepCount() + getVelStep());
        myStepper.setSpeed(getVelPPM());             
        myStepper.move(getVelStep());
        //myStepper.runToPosition();
        Serial.print(F("steps:"));
        Serial.println(getStepCount());              
        if (getStepCount() >= getTotalSteps())
        {
            setStepCount(getTotalSteps());
        }
        Interface.Screen400();
    }
    else{setStepCount(getStepCount() + myStepper.getStepDone());}
    
}

void Up::BttnU50()
{
    
    Interface.Screen40();
}

void Up::BttnU500()
{
    
    Interface.Screen501();
}

void Up::BttnU501()
{
    
    Interface.Screen502();
}

void Up::BttnU502()
{
    
    Interface.Screen500();
}

void Up::BttnU503()
{
    int i = getProgSteps();
    setProgSteps(i + getProgVarStep());
    //getVelPPM() = getVelStepManual() / getStepsPerRevolution();
    //myStepper.setSpeed(getVelPPM());
    if (getProgSteps() >= getTotalSteps())
    {
        setProgSteps(getTotalSteps());
    }
    Interface.Screen503();
}

void Up::BttnU510()
{
    
    Interface.Screen511();
}

void Up::BttnU511()
{
    
    Interface.Screen510();
}

void Up::BttnU60()
{
    
    Interface.Screen50();
}

void Up::BttnU600()
{
    
    Interface.Screen603();
}

void Up::BttnU601()
{
    
    Interface.Screen600();
}

void Up::BttnU602()
{
    
    Interface.Screen601();
}

void Up::BttnU603()
{
    
    Interface.Screen602();
}

void Up::BttnU610(){}

void Up::BttnU611(){}

void Up::BttnU612(){}

void Up::BttnU613(){}

void Up::BttnU620(){}

void Up::BttnU621(){}

void Up::BttnU622(){}

void Up::BttnU623(){}

void Up::BttnU70()
{
    
    Interface.Screen60();
}
