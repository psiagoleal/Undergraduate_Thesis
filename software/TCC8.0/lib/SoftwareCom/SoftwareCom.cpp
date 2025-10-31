#include "SoftwareCom.h"
#include "Arduino.h"
#include "SoftwareSerial.h"

SoftwareCom::SoftwareCom()
{
	Serial.begin(19200);
}

SoftwareCom::~SoftwareCom(){}

void SoftwareCom::SerialComSetup()
{
	if(Serial.readString() == "y")
	{
		setSerialCom(1);
		Serial.write(1);
	}
	else
	{
		setSerialCom(0);
	}
	
}

void SoftwareCom::ReadBttn()
{
	if(Serial.readString() == "debug")
	{
		setDebug(1);
	}
	if(Serial.readString() == "r")
	{
		setBttnRead(0);
	}
	if(Serial.readString() == "u")
	{
		setBttnRead(1);
	}
	if(Serial.readString() == "d")
	{
		setBttnRead(2);
	}
	if(Serial.readString() == "l")
	{
		setBttnRead(3);
	}
	if(Serial.readString() == "s")
	{
		setBttnRead(4);
	}
	if(Serial.readString() == "c")
	{
		setBttnRead(5);
	}
	else
	{
		setBttnRead(6);
	}
}