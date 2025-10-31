#include "Arduino.h"
#include <SoftwareSerial.h>
#include <LiquidCrystal_I2C.h>
#include "Interface.h"

UserInterface::UserInterface()//  : lcd()
{
    // lcd.config(getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7());
    // lcd.setBacklightPin(getpinBackLight() , POSITIVE);
    // lcd.begin(getcolLCD(), getrowLCD());
}

UserInterface::~UserInterface(){}

//TELA INICIAL
void UserInterface::setup()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(0);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.setCursor(3, 0);
    lcd.print(F("Iniciando"));
    lcd.setCursor(2, 1);
    lcd.print(F("Interferometro"));
    Serial.print(F(" Setup-> "));
    Serial.println(getScreenNumber());
}
//FUNÇÕES
//MENU INICIAL
void UserInterface::mainScreen()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE ); 
    setIsMainMenu(true);
    setScreenNumber(1);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("------Menu------"));
    lcd.setCursor(0, 1);
    lcd.print(F("--Tela Inicial--")); 
    setPreviousMillis(millis());
    Serial.print(F("MainScreen-> "));
    Serial.println(getScreenNumber());
}
//////////////////////////////////////////////////////

//ZERO RELATIVO
void UserInterface::Screen10()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(10);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("------Menu------"));
    lcd.setCursor(0, 1);
    lcd.print(F("-->Zero Relativo"));
    Serial.print("Screen-> ");
    Serial.println(getScreenNumber());
}

void UserInterface::Screen100()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(100);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("----Zero Rel.---"));
    lcd.setCursor(0, 1);
    lcd.print(F("-->Ajustar"));
    Serial.print("Screen-> ");
    Serial.println(getScreenNumber());
}

void UserInterface::Screen101()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(101);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("----Zero Rel.---"));
    lcd.setCursor(0, 1);
    lcd.print(F("-->Salvar"));
    Serial.print("Screen-> ");
    Serial.println(getScreenNumber());
}

void UserInterface::Screen110()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(110);
    setDistanceUm();
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("----Zero Rel.---"));
    lcd.setCursor(0, 1);
    lcd.print(F("P:"));
    lcd.setCursor(3, 1);
    lcd.print(getDistanceUm());
    Serial.print("Screen-> ");
    Serial.println(getScreenNumber());
}

void UserInterface::Screen111()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(111);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("----Zero Rel.---"));
    lcd.setCursor(0, 1);
    lcd.print(F("Salvar zero rel?"));
    Serial.print("Screen-> ");
    Serial.println(getScreenNumber());
}
//////////////////////////////////////////////////////

//CONFIGURAÇÕES
void UserInterface::Screen20()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(20);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("------Menu------"));
    lcd.setCursor(0, 1);
    lcd.print(F("-->Configuracoes"));
    Serial.print("Screen-> ");
    Serial.println(getScreenNumber());
}

void UserInterface::Screen200()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(200);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("--Configuracoes-"));
    lcd.setCursor(0, 1);
    lcd.print(F("-->Ajst Fino"));
    Serial.print("Screen-> ");
    Serial.println(getScreenNumber());
}

void UserInterface::Screen201()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(201);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("--Configuracoes-"));
    lcd.setCursor(0, 1);
    lcd.print(F("-->Ajst Grosso"));
    Serial.print("Screen-> ");
    Serial.println(getScreenNumber());
}

void UserInterface::Screen202()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(202);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("--Configuracoes-"));
    lcd.setCursor(0, 1);
    lcd.print(F("-->Passos/min"));
    Serial.print("Screen-> ");
    Serial.println(getScreenNumber());
}

void UserInterface::Screen210()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(210);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("-----Config.-----"));
    lcd.setCursor(0, 1);
    lcd.print(F("Ajst F: "));
    lcd.setCursor(8, 1);
    lcd.print(getVelStepManual());
    Serial.print("Screen-> ");
    Serial.println(getScreenNumber());
}

void UserInterface::Screen211()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(211);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("---Config.----");
    lcd.setCursor(0, 1);
    lcd.print("Ajst G: ");
    lcd.setCursor(8, 1);
    lcd.print(getVelStep());
    Serial.print("Screen-> ");
    Serial.println(getScreenNumber());
}

void UserInterface::Screen212()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(212);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("-----Config.-----"));
    lcd.setCursor(0, 1);
    lcd.print(F("Vel P: "));
    lcd.setCursor(7, 1);
    lcd.print(getVelPPM());
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}
//////////////////////////////////////////////////////

//AJUSTE FINO
void UserInterface::Screen30()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(30);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("------Menu------"));
    lcd.setCursor(0, 1);
    lcd.print(F("-->Ajuste Fino"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen300()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(300);
    setDistanceUm();
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("---Ajuste Fino--"));
    lcd.setCursor(0, 1);
    lcd.print(F("P:"));
    lcd.setCursor(3, 1);
    lcd.print(getDistanceUm());
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen310()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(310);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("---Ajuste Fino--"));
    lcd.setCursor(0, 1);
    lcd.print(F("-->Posicao 1"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen311()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(311);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("---Ajuste Fino--"));
    lcd.setCursor(0, 1);
    lcd.print(F("-->Posicao 2"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen312()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(312);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("---Ajuste Fino--"));
    lcd.setCursor(0, 1);
    lcd.print(F("-->Posicao 3"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}
//////////////////////////////////////////////////////

//AJUSTE GROSSO
void UserInterface::Screen40()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(40);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("------Menu------"));
    lcd.setCursor(0, 1);
    lcd.print(F("-->Ajuste Grosso"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen400()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(400);
    setDistanceUm();
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("---Ajuste Grosso--"));
    lcd.setCursor(0, 1);
    lcd.print(F("P:"));
    lcd.setCursor(3, 1);
    lcd.print(getDistanceUm());
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}
//////////////////////////////////////////////////////

//PASSOS PROGAMADOS
void UserInterface::Screen50()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(50);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("------Menu------"));
    lcd.setCursor(0, 1);
    lcd.print(F("-->Passos Prog"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen500()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(500);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("------Prog------"));
    lcd.setCursor(0, 1);
    lcd.print(F(">100  10  1"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen501()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(501);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("------Prog------"));
    lcd.setCursor(0, 1);
    lcd.print(F(" 100 >10  1"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen502()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(502);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("------Prog------"));
    lcd.setCursor(0, 1);
    lcd.print(F(" 100  10 >1"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen503()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(503);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("------Prog------"));
    lcd.setCursor(0, 1);
    lcd.print(F("P:"));
    lcd.setCursor(3, 1);
    lcd.print(getProgSteps());
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen510()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(510);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("------Prog------"));
    lcd.setCursor(0, 1);
    lcd.print(F("Andar?"));
    lcd.setCursor(7, 1);
    lcd.print(F(">+   -"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen511()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(511);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("------Prog------"));
    lcd.setCursor(0, 1);
    lcd.print(F("Andar?"));
    lcd.setCursor(7, 1);
    lcd.print(F(" +   >-"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

//////////////////////////////////////////////////////

//POSIÇÕES SALVAS
void UserInterface::Screen60()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(60);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("------Menu------"));
    lcd.setCursor(0, 1);
    lcd.print(F("-->Posicoes Salvas"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen600()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(600);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("-Posicoes Salvas"));
    lcd.setCursor(0, 1);
    lcd.print(F("-->Zero Relativo"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen601()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(601);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("-Posicoes Salvas"));
    lcd.setCursor(0, 1);
    lcd.print(F("-->Posicao 1"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen602()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(602);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("-Posicoes Salvas"));
    lcd.setCursor(0, 1);
    lcd.print(F("-->Posicao 2"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen603()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(603);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("-Posicoes Salvas"));
    lcd.setCursor(0, 1);
    lcd.print(F("-->Posicao 3"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen610()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(610);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("-----Pos. Salvas-----"));
    lcd.setCursor(0, 1);
    lcd.print(F("ZeroRel.: "));
    lcd.setCursor(9, 1);
    lcd.print(getStepCountAbsoluto());
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen611()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(611);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("-----Pos. Salvas-----"));
    lcd.setCursor(0, 1);
    lcd.print(F("Posicao 1: "));
    lcd.setCursor(10, 1);
    lcd.print(getPosicao1());
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen612()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(612);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("-----Pos. Salvas-----"));
    lcd.setCursor(0, 1);
    lcd.print(F("Posicao 2: "));
    lcd.setCursor(10, 1);
    lcd.print(getPosicao2());
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen613()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(613);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("-----Pos. Salvas-----"));
    lcd.setCursor(0, 1);
    lcd.print(F("Posicao 3: "));
    lcd.setCursor(10, 1);
    lcd.print(getPosicao3());
    Serial.print(F("Screen-> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen620()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(620);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("-----Pos. Salvas-----"));
    lcd.setCursor(0, 1);
    lcd.print(F("Ir p/ Zero Abs?"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen621()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(621);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("-----Pos. Salvas-----"));
    lcd.setCursor(0, 1);
    lcd.print(F("Ir p/ Posicao1?"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen622()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(622);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("-----Pos. Salvas-----"));
    lcd.setCursor(0, 1);
    lcd.print(F("Ir p/ Posicao2?"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen623()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(623);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("-----Pos. Salvas-----"));
    lcd.setCursor(0, 1);
    lcd.print(F("Ir p/ Posicao3?"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}
//////////////////////////////////////////////////////

//SAIR
void UserInterface::Screen70()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(70);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("------Menu------"));
    lcd.setCursor(0, 1);
    lcd.print(F("--> Exit        "));
    Serial.print(F("IntScreen5 -> "));
    Serial.println(getScreenNumber());
}

void UserInterface::Screen_beginingTrail()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(80);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("Inicio da trilha");
    delay(5000);
    UserInterface::mainScreen();
}
void UserInterface::Screen_endTrail()
{
    LiquidCrystal_I2C lcd( getaddrLCD() , getpinEn() , getpinRw() , getpinRs() , getpinD4() , getpinD5() , getpinD6() , getpinD7() , getpinBackLight() , POSITIVE );
    setIsMainMenu(false);
    setScreenNumber(81);
    lcd.begin(getcolLCD(), getrowLCD());
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("Fim da trilha");
    delay(5000);
    UserInterface::mainScreen();    
}
//////////////////////////////////////////////////////



/*
//MainMenu()
case 1:
//
//ZeroAbs
case 10:
case 100:
case 101:
case 110:
case 111:
//
//Config
case 20:
case 200:
case 201:
case 202:
case 210:
case 211:
case 212:
//
//AjstFino
case 30:
case 300:
case 310:
case 311:
case 312:
//
//AjstGrosso
case 40:
case 400:
//
//PosiçõesSalvas
case 50:
case 500:
case 501:
case 502:
case 503:
case 510:
case 511:
case 512:
case 513:
case 520:
case 521:
case 522:
case 523:
//
//Exit
case 60:
//
*/
