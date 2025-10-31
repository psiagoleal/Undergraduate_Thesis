#include "Arduino.h"
#include "mStepper.h"
#include "CommandsBttnC.h"

Can::Can(){}

Can::~Can(){}

void Can::BttnC1(){}

void Can::BttnC10(){}

void Can::BttnC100(){}

void Can::BttnC101(){}

void Can::BttnC110()
{
    mStepper myStepper( getStepsPerRevolution() , getmpin1() , getmpin2() , getmpin3() , getmpin4() );
    myStepper.panic(1);
}

void Can::BttnC111(){}

void Can::BttnC20(){}

void Can::BttnC200(){}

void Can::BttnC201(){}

void Can::BttnC202(){}

void Can::BttnC210(){}

void Can::BttnC211(){}

void Can::BttnC212(){}

void Can::BttnC30(){}

void Can::BttnC300()
{
    mStepper myStepper( getStepsPerRevolution() , getmpin1() , getmpin2() , getmpin3() , getmpin4() );
    myStepper.panic(1); 
}

void Can::BttnC310(){}

void Can::BttnC311(){}

void Can::BttnC312(){}

void Can::BttnC40(){}

void Can::BttnC400()
{
    mStepper myStepper( getStepsPerRevolution() , getmpin1() , getmpin2() , getmpin3() , getmpin4() );
    myStepper.panic(1);       
}

void Can::BttnC50(){}

void Can::BttnC500(){}

void Can::BttnC501(){}

void Can::BttnC502(){}

void Can::BttnC503(){}

void Can::BttnC510(){}

void Can::BttnC511(){}

void Can::BttnC512(){}

void Can::BttnC513(){}

void Can::BttnC520()
{
    mStepper myStepper( getStepsPerRevolution() , getmpin1() , getmpin2() , getmpin3() , getmpin4() );
    myStepper.panic(1);       
}

void Can::BttnC521()
{
    mStepper myStepper( getStepsPerRevolution() , getmpin1() , getmpin2() , getmpin3() , getmpin4() ); 
    myStepper.panic(1);  
}

void Can::BttnC522()
{
    mStepper myStepper( getStepsPerRevolution() , getmpin1() , getmpin2() , getmpin3() , getmpin4() );
    myStepper.panic(1);  
}

void Can::BttnC523()
{
    mStepper myStepper( getStepsPerRevolution() , getmpin1() , getmpin2() , getmpin3() , getmpin4() );
    myStepper.panic(1);       
}

void Can::BttnC60(){}
