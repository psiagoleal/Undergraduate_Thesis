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
    mStepper myStepper( getmpin1() , getmpin2() );
    myStepper.setPanic(true);
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
    mStepper myStepper( getmpin1() , getmpin2() );
    myStepper.setPanic(true); 
}

void Can::BttnC310(){}

void Can::BttnC311(){}

void Can::BttnC312(){}

void Can::BttnC40(){}

void Can::BttnC400()
{
    mStepper myStepper( getmpin1() , getmpin2() );
    myStepper.setPanic(true);       
}

void Can::BttnC50(){}

void Can::BttnC500(){}

void Can::BttnC501(){}

void Can::BttnC502(){}

void Can::BttnC503()
{
    mStepper myStepper( getmpin1() , getmpin2() );
    myStepper.setPanic(true); 
}

void Can::BttnC510()
{
    mStepper myStepper( getmpin1() , getmpin2() );
    myStepper.setPanic(true); 
}

void Can::BttnC511()
{
    mStepper myStepper( getmpin1() , getmpin2() );
    myStepper.setPanic(true); 
}

void Can::BttnC60(){}

void Can::BttnC600(){}

void Can::BttnC601(){}

void Can::BttnC602(){}

void Can::BttnC603(){}

void Can::BttnC610(){}

void Can::BttnC611(){}

void Can::BttnC612(){}

void Can::BttnC613(){}

void Can::BttnC620()
{
    mStepper myStepper( getmpin1() , getmpin2() );
    myStepper.setPanic(true);       
}

void Can::BttnC621()
{
    mStepper myStepper( getmpin1() , getmpin2() );
    myStepper.setPanic(true);  
}

void Can::BttnC622()
{
    mStepper myStepper( getmpin1() , getmpin2() );
    myStepper.setPanic(true);  
}

void Can::BttnC623()
{
    mStepper myStepper( getmpin1() , getmpin2() );
    myStepper.setPanic(true);       
}

void Can::BttnC70(){}
