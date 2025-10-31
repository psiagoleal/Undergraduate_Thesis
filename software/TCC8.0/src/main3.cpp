//BIBLIOTECAS
#include "Arduino.h"
#include "LiquidCrystal_I2C.h"
#include "mStepper.h"
#include "Config.h"
#include "Interface.h"
#include "InterfaceSerial.h"
#include "SoftwareCom.h"
#include "analogPins.h"
#include "CommandsBttnC.h"
#include "CommandsBttnD.h"
#include "CommandsBttnL.h"
#include "CommandsBttnR.h"
#include "CommandsBttnS.h"
#include "CommandsBttnU.h"

Data v;
UserInterface in;
InterfaceSerial ins;
Analog a;
Can c;
Down d;
Left l;
Right r;
Select s;
Up up;
SoftwareCom sc;

const int btnRIGHT = 0;
const int btnUP = 1;
const int btnDOWN = 2;
const int btnLEFT = 3;
const int btnSELECT = 4;
const int btnCANCEL = 5;
const int btnNONE = 6;

const int continueTrail = 0;
const int beginingTrail = 1;
const int endTrail = 2;
const int sensorNONE = 3;

const int SerialComNo = 0;
const int SerialComYes = 1;

//SETUP
void setup()
{
// INICIANDO PORTA SERIAL
    Serial.begin(9600);                 
    while (!Serial) {;}
    Serial.print("Iniciando Setup");
// FOR DEBUGGING
    //  for (unsigned int i = 0 ; i < EEPROM.length() ; i++)
    //  {
    //    EEPROM.write(i, 0);
    //  }
    sc.SerialComSetup();
    if(v.getSerialCom() == SerialComNo)
    {
    in.setup(); 
    a.trailSetup();
    delay(4000);
    in.mainScreen();
    }
    if(v.getSerialCom() == SerialComYes)
    {
    ins.setup();
    Serial.println(v.getScreenNumber()); 
    a.trailSetup();
    delay(4000);
    ins.mainScreen();
    }
    Serial.print(" >> ");
    Serial.println("Ok!");
//////////////////////////////////////////////////////
}

//LOOP
void loop()
{
  unsigned long currentMillis = millis();

  switch (v.getSerialCom())
  {
    case SerialComNo:
    {
    //LEITURA DOS SENSORES NA TRILHA-PARADA TOTAL CASO CHEGUE EM ALGUMA EXTREMIDADE
      Serial.print("Processos");
      Serial.print(" >> ");
      Serial.print(v.getScreenNumber());
      Serial.print(" >> ");
      Serial.print(a.Read_Sensors());
      Serial.print(" >> ");
      v.setBttnCode(a.Read_Buttons());
      Serial.println(v.getBttnCode());

      switch (a.Read_Sensors())
      {
        case continueTrail:{break;}

        case beginingTrail:{in.Screen_beginingTrail();break;}

        case endTrail: {in.Screen_endTrail();break;}
      }
    //////////////////////////////////////////////////////

    //LEITURA DOS BOTÕES  

      switch (v.getBttnCode())
      {
        case btnRIGHT:
        {
          v.setPreviousMillis(currentMillis);
          v.setIsBacklightOn(true);
          // lcd.backlight();
          switch (v.getScreenNumber())
          {
            //MainMenu()
            case 1:{r.BttnR1();break;}
            //
            //ZeroAbs
            case 10:{r.BttnR10();break;}
            case 100:{r.BttnR100();break;}
            case 101:{r.BttnR101();break;}
            case 110:{r.BttnR110();break;}
            case 111:{r.BttnR111();break;}
            //
            //Config
            case 20:{r.BttnR20();break;}
            case 200:{r.BttnR200();break;}
            case 201:{r.BttnR201();break;}
            case 202:{r.BttnR202();break;}
            case 210:{r.BttnR210();break;}
            case 211:{r.BttnR211();break;}
            case 212:{r.BttnR212();break;}
            //
            //AjstFino
            case 30:{r.BttnR30();break;}
            case 300:{r.BttnR300();break;}
            case 310:{r.BttnR310();break;}
            case 311:{r.BttnR311();break;}
            case 312:{r.BttnR312();break;}
            //
            //AjstGrosso
            case 40:{r.BttnR40();break;}
            case 400:{r.BttnR400();break;}
            //
            //PosiçõesSalvas
            case 50:{r.BttnR50();break;}
            case 500:{r.BttnR500();break;}
            case 501:{r.BttnR501();break;}
            case 502:{r.BttnR502();break;}
            case 503:{r.BttnR503();break;}
            case 510:{r.BttnR510();break;}
            case 511:{r.BttnR511();break;}
            case 512:{r.BttnR512();break;}
            case 513:{r.BttnR513();break;}
            case 520:{r.BttnR520();break;}
            case 521:{r.BttnR521();break;}
            case 522:{r.BttnR522();break;}
            case 523:{r.BttnR523();break;}
            //
            //Exit
            case 60:{r.BttnR60();break;}
            //
          }       
          delay(v.getBttnDelay());
          break;
        }

        case btnLEFT:
        {
          v.setPreviousMillis(currentMillis);
          v.setIsBacklightOn(true);
          // lcd.backlight();
          switch (v.getScreenNumber())
          {
                    //MainMenu()
            case 1:{l.BttnL1();break;}
            //
            //ZeroAbs
            case 10:{l.BttnL10();break;}
            case 100:{l.BttnL100();break;}
            case 101:{l.BttnL101();break;}
            case 110:{l.BttnL110();break;}
            case 111:{l.BttnL111();break;}
            //
            //Config
            case 20:{l.BttnL20();break;}
            case 200:{l.BttnL200();break;}
            case 201:{l.BttnL201();break;}
            case 202:{l.BttnL202();break;}
            case 210:{l.BttnL210();break;}
            case 211:{l.BttnL211();break;}
            case 212:{l.BttnL212();break;}
            //
            //AjstFino
            case 30:{l.BttnL30();break;}
            case 300:{l.BttnL300();break;}
            case 310:{l.BttnL310();break;}
            case 311:{l.BttnL311();break;}
            case 312:{l.BttnL312();break;}
            //
            //AjstGrosso
            case 40:{l.BttnL40();break;}
            case 400:{l.BttnL400();break;}
            //
            //PosiçõesSalvas
            case 50:{l.BttnL50();break;}
            case 500:{l.BttnL500();break;}
            case 501:{l.BttnL501();break;}
            case 502:{l.BttnL502();break;}
            case 503:{l.BttnL503();break;}
            case 510:{l.BttnL510();break;}
            case 511:{l.BttnL511();break;}
            case 512:{l.BttnL512();break;}
            case 513:{l.BttnL513();break;}
            case 520:{l.BttnL520();break;}
            case 521:{l.BttnL521();break;}
            case 522:{l.BttnL522();break;}
            case 523:{l.BttnL523();break;}
            //
            //Exit
            case 60:{l.BttnL60();break;}
            //
          }
          delay(v.getBttnDelay());        
          break;
        }

        case btnUP:
        {
          v.setPreviousMillis(currentMillis);
          v.setIsBacklightOn(true);
          // lcd.backlight();
          switch (v.getScreenNumber())
          {
                    //MainMenu()
            case 1:{up.BttnU1();break;}
            //
            //ZeroAbs
            case 10:{up.BttnU10();break;}
            case 100:{up.BttnU100();break;}
            case 101:{up.BttnU101();break;}
            case 110:{up.BttnU110();break;}
            case 111:{up.BttnU111();break;}
            //
            //Config
            case 20:{up.BttnU20();break;}
            case 200:{up.BttnU200();break;}
            case 201:{up.BttnU201();break;}
            case 202:{up.BttnU202();break;}
            case 210:{up.BttnU210();break;}
            case 211:{up.BttnU211();break;}
            case 212:{up.BttnU212();break;}
            //
            //AjstFino
            case 30:{up.BttnU30();break;}
            case 300:{up.BttnU300();break;}
            case 310:{up.BttnU310();break;}
            case 311:{up.BttnU311();break;}
            case 312:{up.BttnU312();break;}
            //
            //AjstGrosso
            case 40:{up.BttnU40();break;}
            case 400:{up.BttnU400();break;}
            //
            //PosiçõesSalvas
            case 50:{up.BttnU50();break;}
            case 500:{up.BttnU500();break;}
            case 501:{up.BttnU501();break;}
            case 502:{up.BttnU502();break;}
            case 503:{up.BttnU503();break;}
            case 510:{up.BttnU510();break;}
            case 511:{up.BttnU511();break;}
            case 512:{up.BttnU512();break;}
            case 513:{up.BttnU513();break;}
            case 520:{up.BttnU520();break;}
            case 521:{up.BttnU521();break;}
            case 522:{up.BttnU522();break;}
            case 523:{up.BttnU523();break;}
            //
            //Exit
            case 60:{up.BttnU60();}
            //
          }
          delay(v.getBttnDelay());
          break;
        }

        case btnDOWN:
        {
          v.setPreviousMillis(currentMillis);
          v.setIsBacklightOn(true);
          // lcd.backlight();
          switch (v.getScreenNumber())
          {
                    //MainMenu()
            case 1:{d.BttnD1();}
            //
            //ZeroAbs
            case 10:{d.BttnD10();break;}
            case 100:{d.BttnD100();break;}
            case 101:{d.BttnD101();break;}
            case 110:{d.BttnD110();break;}
            case 111:{d.BttnD111();break;}
            //
            //Config
            case 20:{d.BttnD20();break;}
            case 200:{d.BttnD200();break;}
            case 201:{d.BttnD201();break;}
            case 202:{d.BttnD202();break;}
            case 210:{d.BttnD210();break;}
            case 211:{d.BttnD211();break;}
            case 212:{d.BttnD212();break;}
            //
            //AjstFino
            case 30:{d.BttnD30();break;}
            case 300:{d.BttnD300();break;}
            case 310:{d.BttnD310();break;}
            case 311:{d.BttnD311();break;}
            case 312:{d.BttnD312();break;}
            //
            //AjstGrosso
            case 40:{d.BttnD40();break;}
            case 400:{d.BttnD400();break;}
            //
            //PosiçõesSalvas
            case 50:{d.BttnD50();break;}
            case 500:{d.BttnD500();break;}
            case 501:{d.BttnD501();break;}
            case 502:{d.BttnD502();break;}
            case 503:{d.BttnD503();break;}
            case 510:{d.BttnD510();break;}
            case 511:{d.BttnD511();break;}
            case 512:{d.BttnD512();break;}
            case 513:{d.BttnD513();break;}
            case 520:{d.BttnD520();break;}
            case 521:{d.BttnD521();break;}
            case 522:{d.BttnD522();break;}
            case 523:{d.BttnD523();break;}
            //
            //Exit
            case 60:{d.BttnD60();break;}
            //
          }        
          delay(v.getBttnDelay());
          break;
        }

        case btnSELECT:
        {
          v.setPreviousMillis(currentMillis);
          v.setIsBacklightOn(true);
          // lcd.backlight();
          switch (v.getScreenNumber())
          {
                    //MainMenu()
            case 1:{s.BttnS1();break;}
            //
            //ZeroAbs
            case 10:{s.BttnS10();break;}
            case 100:{s.BttnS100();break;}
            case 101:{s.BttnS101();break;}
            case 110:{s.BttnS110();break;}
            case 111:{s.BttnS111();break;}
            //
            //Config
            case 20:{s.BttnS20();break;}
            case 200:{s.BttnS200();break;}
            case 201:{s.BttnS201();break;}
            case 202:{s.BttnS202();break;}
            case 210:{s.BttnS210();break;}
            case 211:{s.BttnS211();break;}
            case 212:{s.BttnS212();break;}
            //
            //AjstFino
            case 30:{s.BttnS30();break;}
            case 300:{s.BttnS300();break;}
            case 310:{s.BttnS310();break;}
            case 311:{s.BttnS311();break;}
            case 312:{s.BttnS312();break;}
            //
            //AjstGrosso
            case 40:{s.BttnS40();break;}
            case 400:{s.BttnS400();break;}
            //
            //PosiçõesSalvas
            case 50:{s.BttnS50();break;}
            case 500:{s.BttnS500();break;}
            case 501:{s.BttnS501();break;}
            case 502:{s.BttnS502();break;}
            case 503:{s.BttnS503();break;}
            case 510:{s.BttnS510();break;}
            case 511:{s.BttnS511();break;}
            case 512:{s.BttnS512();break;}
            case 513:{s.BttnS513();break;}
            case 520:{s.BttnS520();break;}
            case 521:{s.BttnS521();break;}
            case 522:{s.BttnS522();break;}
            case 523:{s.BttnS523();break;}
            //
            //Exit
            case 60:{s.BttnS60();break;}
            //
          }
          delay(v.getBttnDelay());
          break;
        }
        case btnCANCEL:
        {
          v.setPreviousMillis(currentMillis);
          v.setIsBacklightOn(true);
          // lcd.backlight();
          switch (v.getScreenNumber())
          {
            //MainMenu()
            case 1:{c.BttnC1();break;}
            //
            //ZeroAbs
            case 10:{c.BttnC10();break;}
            case 100:{c.BttnC100();break;}
            case 101:{c.BttnC101();break;}
            case 110:{c.BttnC110();break;}
            case 111:{c.BttnC111();break;}
            //
            //Config
            case 20:{c.BttnC20();break;}
            case 200:{c.BttnC200();break;}
            case 201:{c.BttnC201();break;}
            case 202:{c.BttnC202();break;}
            case 210:{c.BttnC210();break;}
            case 211:{c.BttnC211();break;}
            case 212:{c.BttnC212();break;}
            //
            //AjstFino
            case 30:{c.BttnC30();break;}
            case 300:{c.BttnC300();break;}
            case 310:{c.BttnC310();break;}
            case 311:{c.BttnC311();break;}
            case 312:{c.BttnC312();break;}
            //
            //AjstGrosso
            case 40:{c.BttnC40();break;}
            case 400:{c.BttnC400();break;}
            //
            //PosiçõesSalvas
            case 50:{c.BttnC50();break;}
            case 500:{c.BttnC500();break;}
            case 501:{c.BttnC501();break;}
            case 502:{c.BttnC502();break;}
            case 503:{c.BttnC503();break;}
            case 510:{c.BttnC510();break;}
            case 511:{c.BttnC511();break;}
            case 512:{c.BttnC512();break;}
            case 513:{c.BttnC513();break;}
            case 520:{c.BttnC520();break;}
            case 521:{c.BttnC521();break;}
            case 522:{c.BttnC522();break;}
            case 523:{c.BttnC523();break;}
            //
            //Exit
            case 60:{c.BttnC60();break;}
            //
          }
          delay(v.getBttnDelay());
          break;
        }
      }
    }

    case SerialComYes:
    {
      //LEITURA DOS SENSORES NA TRILHA-PARADA TOTAL CASO CHEGUE EM ALGUMA EXTREMIDADE
      if(v.getDebug() == 1)
      {
        Serial.print("Processos");
        Serial.print(" >> ");
        Serial.print(v.getScreenNumber());
        Serial.print(" >> ");
        Serial.print(a.Read_Sensors());
        Serial.print(" >> ");
        v.setBttnCode(a.Read_Buttons());
        Serial.println(v.getBttnCode());
      }
      else{;}

      switch (a.Read_Sensors())
      {
        case continueTrail:{break;}

        case beginingTrail:{ins.Screen_beginingTrail();break;}

        case endTrail: {ins.Screen_endTrail();break;}
      }
    //////////////////////////////////////////////////////

    //LEITURA DOS BOTÕES  
      sc.ReadBttn();

      switch (v.getBttnCode())
      {
        case btnRIGHT:
        {
          v.setPreviousMillis(currentMillis);
          v.setIsBacklightOn(true);
          // lcd.backlight();
          switch (v.getScreenNumber())
          {
            //MainMenu()
            case 1:{r.BttnR1();break;}
            //
            //ZeroAbs
            case 10:{r.BttnR10();break;}
            case 100:{r.BttnR100();break;}
            case 101:{r.BttnR101();break;}
            case 110:{r.BttnR110();break;}
            case 111:{r.BttnR111();break;}
            //
            //Config
            case 20:{r.BttnR20();break;}
            case 200:{r.BttnR200();break;}
            case 201:{r.BttnR201();break;}
            case 202:{r.BttnR202();break;}
            case 210:{r.BttnR210();break;}
            case 211:{r.BttnR211();break;}
            case 212:{r.BttnR212();break;}
            //
            //AjstFino
            case 30:{r.BttnR30();break;}
            case 300:{r.BttnR300();break;}
            case 310:{r.BttnR310();break;}
            case 311:{r.BttnR311();break;}
            case 312:{r.BttnR312();break;}
            //
            //AjstGrosso
            case 40:{r.BttnR40();break;}
            case 400:{r.BttnR400();break;}
            //
            //PosiçõesSalvas
            case 50:{r.BttnR50();break;}
            case 500:{r.BttnR500();break;}
            case 501:{r.BttnR501();break;}
            case 502:{r.BttnR502();break;}
            case 503:{r.BttnR503();break;}
            case 510:{r.BttnR510();break;}
            case 511:{r.BttnR511();break;}
            case 512:{r.BttnR512();break;}
            case 513:{r.BttnR513();break;}
            case 520:{r.BttnR520();break;}
            case 521:{r.BttnR521();break;}
            case 522:{r.BttnR522();break;}
            case 523:{r.BttnR523();break;}
            //
            //Exit
            case 60:{r.BttnR60();break;}
            //
          }       
          delay(v.getBttnDelay());
          break;
        }

        case btnLEFT:
        {
          v.setPreviousMillis(currentMillis);
          v.setIsBacklightOn(true);
          // lcd.backlight();
          switch (v.getScreenNumber())
          {
                    //MainMenu()
            case 1:{l.BttnL1();break;}
            //
            //ZeroAbs
            case 10:{l.BttnL10();break;}
            case 100:{l.BttnL100();break;}
            case 101:{l.BttnL101();break;}
            case 110:{l.BttnL110();break;}
            case 111:{l.BttnL111();break;}
            //
            //Config
            case 20:{l.BttnL20();break;}
            case 200:{l.BttnL200();break;}
            case 201:{l.BttnL201();break;}
            case 202:{l.BttnL202();break;}
            case 210:{l.BttnL210();break;}
            case 211:{l.BttnL211();break;}
            case 212:{l.BttnL212();break;}
            //
            //AjstFino
            case 30:{l.BttnL30();break;}
            case 300:{l.BttnL300();break;}
            case 310:{l.BttnL310();break;}
            case 311:{l.BttnL311();break;}
            case 312:{l.BttnL312();break;}
            //
            //AjstGrosso
            case 40:{l.BttnL40();break;}
            case 400:{l.BttnL400();break;}
            //
            //PosiçõesSalvas
            case 50:{l.BttnL50();break;}
            case 500:{l.BttnL500();break;}
            case 501:{l.BttnL501();break;}
            case 502:{l.BttnL502();break;}
            case 503:{l.BttnL503();break;}
            case 510:{l.BttnL510();break;}
            case 511:{l.BttnL511();break;}
            case 512:{l.BttnL512();break;}
            case 513:{l.BttnL513();break;}
            case 520:{l.BttnL520();break;}
            case 521:{l.BttnL521();break;}
            case 522:{l.BttnL522();break;}
            case 523:{l.BttnL523();break;}
            //
            //Exit
            case 60:{l.BttnL60();break;}
            //
          }
          delay(v.getBttnDelay());        
          break;
        }

        case btnUP:
        {
          v.setPreviousMillis(currentMillis);
          v.setIsBacklightOn(true);
          // lcd.backlight();
          switch (v.getScreenNumber())
          {
                    //MainMenu()
            case 1:{up.BttnU1();break;}
            //
            //ZeroAbs
            case 10:{up.BttnU10();break;}
            case 100:{up.BttnU100();break;}
            case 101:{up.BttnU101();break;}
            case 110:{up.BttnU110();break;}
            case 111:{up.BttnU111();break;}
            //
            //Config
            case 20:{up.BttnU20();break;}
            case 200:{up.BttnU200();break;}
            case 201:{up.BttnU201();break;}
            case 202:{up.BttnU202();break;}
            case 210:{up.BttnU210();break;}
            case 211:{up.BttnU211();break;}
            case 212:{up.BttnU212();break;}
            //
            //AjstFino
            case 30:{up.BttnU30();break;}
            case 300:{up.BttnU300();break;}
            case 310:{up.BttnU310();break;}
            case 311:{up.BttnU311();break;}
            case 312:{up.BttnU312();break;}
            //
            //AjstGrosso
            case 40:{up.BttnU40();break;}
            case 400:{up.BttnU400();break;}
            //
            //PosiçõesSalvas
            case 50:{up.BttnU50();break;}
            case 500:{up.BttnU500();break;}
            case 501:{up.BttnU501();break;}
            case 502:{up.BttnU502();break;}
            case 503:{up.BttnU503();break;}
            case 510:{up.BttnU510();break;}
            case 511:{up.BttnU511();break;}
            case 512:{up.BttnU512();break;}
            case 513:{up.BttnU513();break;}
            case 520:{up.BttnU520();break;}
            case 521:{up.BttnU521();break;}
            case 522:{up.BttnU522();break;}
            case 523:{up.BttnU523();break;}
            //
            //Exit
            case 60:{up.BttnU60();}
            //
          }
          delay(v.getBttnDelay());
          break;
        }

        case btnDOWN:
        {
          v.setPreviousMillis(currentMillis);
          v.setIsBacklightOn(true);
          // lcd.backlight();
          switch (v.getScreenNumber())
          {
                    //MainMenu()
            case 1:{d.BttnD1();}
            //
            //ZeroAbs
            case 10:{d.BttnD10();break;}
            case 100:{d.BttnD100();break;}
            case 101:{d.BttnD101();break;}
            case 110:{d.BttnD110();break;}
            case 111:{d.BttnD111();break;}
            //
            //Config
            case 20:{d.BttnD20();break;}
            case 200:{d.BttnD200();break;}
            case 201:{d.BttnD201();break;}
            case 202:{d.BttnD202();break;}
            case 210:{d.BttnD210();break;}
            case 211:{d.BttnD211();break;}
            case 212:{d.BttnD212();break;}
            //
            //AjstFino
            case 30:{d.BttnD30();break;}
            case 300:{d.BttnD300();break;}
            case 310:{d.BttnD310();break;}
            case 311:{d.BttnD311();break;}
            case 312:{d.BttnD312();break;}
            //
            //AjstGrosso
            case 40:{d.BttnD40();break;}
            case 400:{d.BttnD400();break;}
            //
            //PosiçõesSalvas
            case 50:{d.BttnD50();break;}
            case 500:{d.BttnD500();break;}
            case 501:{d.BttnD501();break;}
            case 502:{d.BttnD502();break;}
            case 503:{d.BttnD503();break;}
            case 510:{d.BttnD510();break;}
            case 511:{d.BttnD511();break;}
            case 512:{d.BttnD512();break;}
            case 513:{d.BttnD513();break;}
            case 520:{d.BttnD520();break;}
            case 521:{d.BttnD521();break;}
            case 522:{d.BttnD522();break;}
            case 523:{d.BttnD523();break;}
            //
            //Exit
            case 60:{d.BttnD60();break;}
            //
          }        
          delay(v.getBttnDelay());
          break;
        }

        case btnSELECT:
        {
          v.setPreviousMillis(currentMillis);
          v.setIsBacklightOn(true);
          // lcd.backlight();
          switch (v.getScreenNumber())
          {
                    //MainMenu()
            case 1:{s.BttnS1();break;}
            //
            //ZeroAbs
            case 10:{s.BttnS10();break;}
            case 100:{s.BttnS100();break;}
            case 101:{s.BttnS101();break;}
            case 110:{s.BttnS110();break;}
            case 111:{s.BttnS111();break;}
            //
            //Config
            case 20:{s.BttnS20();break;}
            case 200:{s.BttnS200();break;}
            case 201:{s.BttnS201();break;}
            case 202:{s.BttnS202();break;}
            case 210:{s.BttnS210();break;}
            case 211:{s.BttnS211();break;}
            case 212:{s.BttnS212();break;}
            //
            //AjstFino
            case 30:{s.BttnS30();break;}
            case 300:{s.BttnS300();break;}
            case 310:{s.BttnS310();break;}
            case 311:{s.BttnS311();break;}
            case 312:{s.BttnS312();break;}
            //
            //AjstGrosso
            case 40:{s.BttnS40();break;}
            case 400:{s.BttnS400();break;}
            //
            //PosiçõesSalvas
            case 50:{s.BttnS50();break;}
            case 500:{s.BttnS500();break;}
            case 501:{s.BttnS501();break;}
            case 502:{s.BttnS502();break;}
            case 503:{s.BttnS503();break;}
            case 510:{s.BttnS510();break;}
            case 511:{s.BttnS511();break;}
            case 512:{s.BttnS512();break;}
            case 513:{s.BttnS513();break;}
            case 520:{s.BttnS520();break;}
            case 521:{s.BttnS521();break;}
            case 522:{s.BttnS522();break;}
            case 523:{s.BttnS523();break;}
            //
            //Exit
            case 60:{s.BttnS60();break;}
            //
          }
          delay(v.getBttnDelay());
          break;
        }
        case btnCANCEL:
        {
          v.setPreviousMillis(currentMillis);
          v.setIsBacklightOn(true);
          // lcd.backlight();
          switch (v.getScreenNumber())
          {
            //MainMenu()
            case 1:{c.BttnC1();break;}
            //
            //ZeroAbs
            case 10:{c.BttnC10();break;}
            case 100:{c.BttnC100();break;}
            case 101:{c.BttnC101();break;}
            case 110:{c.BttnC110();break;}
            case 111:{c.BttnC111();break;}
            //
            //Config
            case 20:{c.BttnC20();break;}
            case 200:{c.BttnC200();break;}
            case 201:{c.BttnC201();break;}
            case 202:{c.BttnC202();break;}
            case 210:{c.BttnC210();break;}
            case 211:{c.BttnC211();break;}
            case 212:{c.BttnC212();break;}
            //
            //AjstFino
            case 30:{c.BttnC30();break;}
            case 300:{c.BttnC300();break;}
            case 310:{c.BttnC310();break;}
            case 311:{c.BttnC311();break;}
            case 312:{c.BttnC312();break;}
            //
            //AjstGrosso
            case 40:{c.BttnC40();break;}
            case 400:{c.BttnC400();break;}
            //
            //PosiçõesSalvas
            case 50:{c.BttnC50();break;}
            case 500:{c.BttnC500();break;}
            case 501:{c.BttnC501();break;}
            case 502:{c.BttnC502();break;}
            case 503:{c.BttnC503();break;}
            case 510:{c.BttnC510();break;}
            case 511:{c.BttnC511();break;}
            case 512:{c.BttnC512();break;}
            case 513:{c.BttnC513();break;}
            case 520:{c.BttnC520();break;}
            case 521:{c.BttnC521();break;}
            case 522:{c.BttnC522();break;}
            case 523:{c.BttnC523();break;}
            //
            //Exit
            case 60:{c.BttnC60();break;}
            //
          }
          delay(v.getBttnDelay());
          break;
        }
      }
    }
  }
}

