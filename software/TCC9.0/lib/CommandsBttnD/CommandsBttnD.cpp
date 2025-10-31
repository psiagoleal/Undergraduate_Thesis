#include "Arduino.h"
#include "mStepper.h"
#include "Interface.h"
#include "CommandsBttnD.h"

Down::Down(){UserInterface Interface;}

Down::~Down(){}

void Down::BttnD1(){}

void Down::BttnD10()
{
    Interface.Screen20();
}

void Down::BttnD100()
{
    Interface.Screen101(); 
}

void Down::BttnD101()
{
    Interface.Screen100();
}

void Down::BttnD110()
{
    mStepper myStepper( getmpin1() , getmpin2() );
    if(myStepper.getCancel() == 0){setStepCount(getStepCount() - getVelStepManual());}
    else{setStepCount(getStepCount() - myStepper.getStepDone());}
    myStepper.setSpeed(getVelPPM());            
    myStepper.move(-getVelStepManual());
    Serial.print("steps:");
    Serial.println(getStepCount());              
    if (getStepCount() <= -getTotalSteps())
    {
        setStepCount(-getTotalSteps());
    }
    Interface.Screen110();
}

void Down::BttnD111(){}

void Down::BttnD20()
{
    Interface.Screen30();
}

void Down::BttnD200()
{
    Interface.Screen201();  
}

void Down::BttnD201()
{
    Interface.Screen202();
}

void Down::BttnD202()
{
    Interface.Screen200();
}

void Down::BttnD210()
{
    mStepper myStepper( getmpin1() , getmpin2() );
    int i = getVelStepManual();
    setVelStepManual(i-1);
    //getVelPPM() = getVelStepManual() / getStepsPerRevolution();
    //myStepper.setSpeed(getVelPPM());
    if (getVelStepManual() <= 0)
    {
        setVelStepManual(0);
    }
    Interface.Screen210();
}

void Down::BttnD211()
{
    mStepper myStepper( getmpin1() , getmpin2() );
    setVelStep(getVelStep() - getStepsPerRevolution()/2);
    setVelPPM(getVelStep() * 10 / getStepsPerRevolution());
    //myStepper.setSpeed(getVelPPM());
    if (getVelStep() <= 0)
    {
        setVelStep(0);
    }
    Interface.Screen211();
}

void Down::BttnD212()
{
    mStepper myStepper( getmpin1() , getmpin2() );
    setVelPPM(getVelPPM() - getVelStepManual());
    //getVelPPM() = getVelStepManual() / getStepsPerRevolution();
    myStepper.setSpeed(getVelPPM());
    if (getVelPPM() <= 0)
    {
        setVelPPM(0);
    }
    Interface.Screen212();
}

void Down::BttnD30()
{
    Interface.Screen40();
}

void Down::BttnD300()
{
    mStepper myStepper( getmpin1() , getmpin2() );
    if(myStepper.getCancel() == 0){setStepCount(getStepCount() - getVelStepManual());}
    else{setStepCount(getStepCount() - myStepper.getStepDone());}
    myStepper.setSpeed(getVelPPM());             
    myStepper.move(-getVelStepManual());
    Serial.print("steps:");
    Serial.println(getStepCount());              
    if (getStepCount() <= -getTotalSteps())
    {
        setStepCount(-getTotalSteps());
    }
    Interface.Screen300();
}

void Down::BttnD310()
{
    Interface.Screen311();
}

void Down::BttnD311()
{
    Interface.Screen312();
}

void Down::BttnD312()
{
    Interface.Screen310();
}

void Down::BttnD40()
{
    Interface.Screen50();
}

void Down::BttnD400()
{
    mStepper myStepper( getmpin1() , getmpin2() );
    if(myStepper.getCancel() == 0){setStepCount(getStepCount() - getVelStep());}
    else{setStepCount(getStepCount() - myStepper.getStepDone());}
    myStepper.setSpeed(getVelPPM());             
    myStepper.move(-getVelStep());
    Serial.print("steps:");
    Serial.println(getStepCount());              
    if (getStepCount() <= -getTotalSteps())
    {
        setStepCount(-getTotalSteps());
    }
    Interface.Screen400();
}

void Down::BttnD50()
{
    
    Interface.Screen60();
}

void Down::BttnD500()
{
    
    Interface.Screen502();
}

void Down::BttnD501()
{
    
    Interface.Screen500();
}

void Down::BttnD502()
{
    
    Interface.Screen501();
}

void Down::BttnD503()
{
    int i = getProgSteps();
    setProgSteps(i - getProgVarStep());
    //getVelPPM() = getVelStepManual() / getStepsPerRevolution();
    //myStepper.setSpeed(getVelPPM());
    if (getProgSteps() <= -getTotalSteps())
    {
        setProgSteps(-getTotalSteps());
    }
    Interface.Screen503();
}

void Down::BttnD510()
{
    
    Interface.Screen511();
}

void Down::BttnD511()
{
    
    Interface.Screen510();
}

void Down::BttnD60()
{
    Interface.Screen70();
}

void Down::BttnD600()
{
    Interface.Screen601();
}

void Down::BttnD601()
{
    Interface.Screen602();
}

void Down::BttnD602()
{
    Interface.Screen603();
}

void Down::BttnD603()
{
    Interface.Screen600();
          
}

void Down::BttnD610()
{
    Interface.Screen611();
}

void Down::BttnD611()
{
    Interface.Screen612();
}

void Down::BttnD612()
{
    Interface.Screen613();
}

void Down::BttnD613()
{
    Interface.Screen610();
}

void Down::BttnD620(){}

void Down::BttnD621(){}

void Down::BttnD622(){}

void Down::BttnD623(){}

void Down::BttnD70()
{
    Interface.Screen10();
}
