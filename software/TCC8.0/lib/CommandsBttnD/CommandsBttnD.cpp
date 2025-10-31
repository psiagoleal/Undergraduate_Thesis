#include "Arduino.h"
#include "mStepper.h"
#include "Interface.h"
#include "CommandsBttnD.h"

Down::Down(){}

Down::~Down(){}

void Down::BttnD1(){}

void Down::BttnD10()
{
    UserInterface& Screen20();
}

void Down::BttnD100()
{
    UserInterface& Screen101(); 
}

void Down::BttnD101()
{
    UserInterface& Screen100();
}

void Down::BttnD110()
{
    mStepper myStepper( getStepsPerRevolution() , getmpin1() , getmpin2() , getmpin3() , getmpin4() );
    if(myStepper.getCancel() == 0){setStepCount(getStepCount() - getVelStepManual());}
    else{setStepCount(getStepCount() - myStepper.getStepMissing());}
    myStepper.setSpeed(getVelPPM());            
    myStepper.step(-getVelStepManual());
    Serial.print("steps:");
    Serial.println(getStepCount());              
    if (getStepCount() <= -getTotalSteps())
    {
        setStepCount(-getTotalSteps());
    }
    UserInterface& Screen110();
}

void Down::BttnD111(){}

void Down::BttnD20()
{
    UserInterface& Screen30();
}

void Down::BttnD200()
{
    UserInterface& Screen201();  
}

void Down::BttnD201()
{
    UserInterface& Screen202();
}

void Down::BttnD202()
{
    UserInterface& Screen200();
}

void Down::BttnD210()
{
    mStepper myStepper( getStepsPerRevolution() , getmpin1() , getmpin2() , getmpin3() , getmpin4() );
    int i = getVelStepManual();
    setVelStepManual(i--);
    //getVelPPM() = getVelStepManual() / getStepsPerRevolution();
    //myStepper.setSpeed(getVelPPM());
    if (getVelStepManual() <= 0)
    {
        setVelStepManual(0);
    }
    UserInterface& Screen210();
}

void Down::BttnD211()
{
    mStepper myStepper( getStepsPerRevolution() , getmpin1() , getmpin2() , getmpin3() , getmpin4() );
    setVelStep(getVelStep() - getStepsPerRevolution()/2);
    setVelPPM(getVelStep() * 10 / getStepsPerRevolution());
    //myStepper.setSpeed(getVelPPM());
    if (getVelStep() <= 0)
    {
        setVelStep(0);
    }
    UserInterface& Screen211();
}

void Down::BttnD212()
{
    mStepper myStepper( getStepsPerRevolution() , getmpin1() , getmpin2() , getmpin3() , getmpin4() );
    setVelPPM(getVelPPM() - getVelStepManual());
    //getVelPPM() = getVelStepManual() / getStepsPerRevolution();
    myStepper.setSpeed(getVelPPM());
    if (getVelPPM() <= 0)
    {
        setVelPPM(0);
    }
    UserInterface& Screen212();
}

void Down::BttnD30()
{
    UserInterface& Screen40();
}

void Down::BttnD300()
{
    mStepper myStepper( getStepsPerRevolution() , getmpin1() , getmpin2() , getmpin3() , getmpin4() );
    if(myStepper.getCancel() == 0){setStepCount(getStepCount() - getVelStepManual());}
    else{setStepCount(getStepCount() - myStepper.getStepMissing());}
    myStepper.setSpeed(getVelPPM());             
    myStepper.step(-getVelStepManual());
    Serial.print("steps:");
    Serial.println(getStepCount());              
    if (getStepCount() <= -getTotalSteps())
    {
        setStepCount(-getTotalSteps());
    }
    UserInterface& Screen300();
}

void Down::BttnD310()
{
    UserInterface& Screen311();
}

void Down::BttnD311()
{
    UserInterface& Screen312();
}

void Down::BttnD312()
{
    UserInterface& Screen310();
}

void Down::BttnD40()
{
    UserInterface& Screen50();
}

void Down::BttnD400()
{
    mStepper myStepper( getStepsPerRevolution() , getmpin1() , getmpin2() , getmpin3() , getmpin4() );
    if(myStepper.getCancel() == 0){setStepCount(getStepCount() - getVelStep());}
    else{setStepCount(getStepCount() - myStepper.getStepMissing());}
    myStepper.setSpeed(getVelPPM());             
    myStepper.step(-getVelStep());
    Serial.print("steps:");
    Serial.println(getStepCount());              
    if (getStepCount() <= -getTotalSteps())
    {
        setStepCount(-getTotalSteps());
    }
    UserInterface& Screen400();
}

void Down::BttnD50()
{
    UserInterface& Screen60();
}

void Down::BttnD500()
{
    UserInterface& Screen501();
}

void Down::BttnD501()
{
    UserInterface& Screen502();
}

void Down::BttnD502()
{
    UserInterface& Screen503();
}

void Down::BttnD503()
{
    UserInterface& Screen500();
          
}

void Down::BttnD510()
{
    UserInterface& Screen511();
}

void Down::BttnD511()
{
    UserInterface& Screen512();
}

void Down::BttnD512()
{
    UserInterface& Screen513();
}

void Down::BttnD513()
{
    UserInterface& Screen510();
}

void Down::BttnD520(){}

void Down::BttnD521(){}

void Down::BttnD522(){}

void Down::BttnD523(){}

void Down::BttnD60()
{
    UserInterface& Screen10();
}
