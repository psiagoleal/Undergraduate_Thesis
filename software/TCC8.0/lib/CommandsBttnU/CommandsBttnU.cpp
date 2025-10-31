#include "Arduino.h"
#include "mStepper.h"
#include "Interface.h"
#include "CommandsBttnU.h"

Up::Up(){}

Up::~Up(){}

void Up::BttnU1(){}

void Up::BttnU10()
{
    
    UserInterface& Screen60(); 
}

void Up::BttnU100()
{
    
    UserInterface& Screen101(); 
}

void Up::BttnU101()
{
    
    UserInterface& Screen100(); 
}

void Up::BttnU110()
{
    
    mStepper myStepper( getStepsPerRevolution() , getmpin1() , getmpin2() , getmpin3() , getmpin4() );
    if(myStepper.getCancel() == 0){setStepCount(getStepCount() + getVelStepManual());}
    else{setStepCount(getStepCount() + myStepper.getStepMissing());}
    myStepper.setSpeed(getVelPPM());           
    myStepper.step(getVelStepManual());
    Serial.print(F("steps:"));
    Serial.println(getStepCount());              
    if (getStepCount() >= getTotalSteps())
    {
        setStepCount(getTotalSteps());
    }
    UserInterface& Screen110();        
}

void Up::BttnU111(){}

void Up::BttnU20()
{
    
    UserInterface& Screen10();

}

void Up::BttnU200()
{
    
    UserInterface& Screen202();

}

void Up::BttnU201()
{
    
    UserInterface& Screen200();

}

void Up::BttnU202()
{
    
    UserInterface& Screen201();

}

void Up::BttnU210()
{
    
    int i = getVelStepManual();
    setVelStepManual(i++);
    //getVelPPM() = getVelStepManual() / getStepsPerRevolution();
    //myStepper.setSpeed(getVelPPM());
    if (getVelStepManual() >= getMaxVel())
    {
        setVelStepManual(getMaxVel());
    }
    UserInterface& Screen210();
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
    UserInterface& Screen211();
}

void Up::BttnU212()
{
    
    mStepper myStepper( getStepsPerRevolution() , getmpin1() , getmpin2() , getmpin3() , getmpin4() );
    setVelPPM(getVelPPM() + getVelStepManual());
    //getVelPPM() = getVelStepManual() / getStepsPerRevolution();
    myStepper.setSpeed(getVelPPM());
    if (getVelPPM() >= getMaxVel())
    {
        setVelPPM(getMaxVel());
    }
    UserInterface& Screen212();
}

void Up::BttnU30()
{
    
    UserInterface& Screen20();
}

void Up::BttnU300()
{
    
    mStepper myStepper( getStepsPerRevolution() , getmpin1() , getmpin2() , getmpin3() , getmpin4() );
    if(myStepper.getCancel() == 0){setStepCount(getStepCount() + getVelStepManual());}
    else{setStepCount(getStepCount() + myStepper.getStepMissing());}
    myStepper.setSpeed(getVelPPM());             
    myStepper.step(getVelStepManual());
    Serial.print(F("steps:"));
    Serial.println(getStepCount());              
    if (getStepCount() >= getTotalSteps())
    {
        setStepCount(getTotalSteps());
    }
    UserInterface& Screen300();
}

void Up::BttnU310()
{
    
    UserInterface& Screen312();
}

void Up::BttnU311()
{
    
    UserInterface& Screen310();
}

void Up::BttnU312()
{
    
    UserInterface& Screen311();
}

void Up::BttnU40()
{
    
    UserInterface& Screen30();
}

void Up::BttnU400()
{
    
    mStepper myStepper( getStepsPerRevolution() , getmpin1() , getmpin2() , getmpin3() , getmpin4() );
    if(myStepper.getCancel() == 0){setStepCount(getStepCount() + getVelStep());}
    else{setStepCount(getStepCount() + myStepper.getStepMissing());}
    myStepper.setSpeed(getVelPPM());             
    myStepper.step(getVelStep());
    Serial.print(F("steps:"));
    Serial.println(getStepCount());              
    if (getStepCount() >= getTotalSteps())
    {
        setStepCount(getTotalSteps());
    }
    UserInterface& Screen400();
}

void Up::BttnU50()
{
    
    UserInterface& Screen40();
}

void Up::BttnU500()
{
    
    UserInterface& Screen503();
}

void Up::BttnU501()
{
    
    UserInterface& Screen500();
}

void Up::BttnU502()
{
    
    UserInterface& Screen501();
}

void Up::BttnU503()
{
    
    UserInterface& Screen502();
}

void Up::BttnU510(){}

void Up::BttnU511(){}

void Up::BttnU512(){}

void Up::BttnU513(){}

void Up::BttnU520(){}

void Up::BttnU521(){}

void Up::BttnU522(){}

void Up::BttnU523(){}

void Up::BttnU60()
{
    
    UserInterface& Screen50();
}
