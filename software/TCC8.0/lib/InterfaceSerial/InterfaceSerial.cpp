#include "Arduino.h"
#include <SoftwareSerial.h>
#include "InterfaceSerial.h"

InterfaceSerial::InterfaceSerial(){}

InterfaceSerial::~InterfaceSerial(){}

//TELA INICIAL
void InterfaceSerial::setup()
{
    setIsMainMenu(false);
    setScreenNumber(0);
    Serial.print(F("Iniciando"));
    Serial.println(F("Interferometro"));
    Serial.print(F("Setup-> "));
    Serial.println(getScreenNumber());
}
//FUNÇÕES
//MENU INICIAL
void InterfaceSerial::mainScreen()
{
    setIsMainMenu(true);
    setScreenNumber(1);
    Serial.print(F("------Menu------"));
    Serial.print(F("--Tela Inicial--")); 
    setPreviousMillis(millis());
    Serial.print(F("MainScreen-> "));
    Serial.println(getScreenNumber());
}
//////////////////////////////////////////////////////

//ZERO RELATIVO
void InterfaceSerial::Screen10()
{
    setIsMainMenu(false);
    setScreenNumber(10);
    Serial.print(F("------Menu------"));
    Serial.print(F("-->Zero Relativo"));
    Serial.print("Screen-> ");
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen100()
{
    setIsMainMenu(false);
    setScreenNumber(100);
    Serial.print(F("----Zero Rel.---"));
    Serial.print(F("-->Ajustar"));
    Serial.print("Screen-> ");
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen101()
{
    setIsMainMenu(false);
    setScreenNumber(101);
    Serial.print(F("----Zero Rel.---"));
    Serial.print(F("-->Salvar"));
    Serial.print("Screen-> ");
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen110()
{
    setIsMainMenu(false);
    setScreenNumber(110);
    Serial.print(F("----Zero Rel.---"));
    Serial.print(F("Passos:"));
    Serial.print(getStepCount());
    Serial.print("Screen-> ");
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen111()
{
    setIsMainMenu(false);
    setScreenNumber(111);
    Serial.print(F("----Zero Rel.---"));
    Serial.print(F("Salvar zero rel?"));
    Serial.print("Screen-> ");
    Serial.println(getScreenNumber());
}
//////////////////////////////////////////////////////

//CONFIGURAÇÕES
void InterfaceSerial::Screen20()
{
    setIsMainMenu(false);
    setScreenNumber(20);
    Serial.print(F("------Menu------"));
    Serial.print(F("-->Configuracoes"));
    Serial.print("Screen-> ");
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen200()
{
    setIsMainMenu(false);
    setScreenNumber(200);
    Serial.print(F("--Configuracoes-"));
    Serial.print(F("-->Vel Ajst Fino"));
    Serial.print("Screen-> ");
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen201()
{
    setIsMainMenu(false);
    setScreenNumber(201);
    Serial.print(F("--Configuracoes-"));
    Serial.print(F("-->Vel Ajst Grosso"));
    Serial.print("Screen-> ");
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen202()
{
    setIsMainMenu(false);
    setScreenNumber(202);
    Serial.print(F("--Configuracoes-"));
    Serial.print(F("-->Passos/min"));
    Serial.print("Screen-> ");
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen210()
{
    setIsMainMenu(false);
    setScreenNumber(210);
    Serial.print(F("-----Config.-----"));
    Serial.print(F("Ajst Fino: "));
    Serial.print(getVelStepManual());
    Serial.print("Screen-> ");
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen211()
{
    setIsMainMenu(false);
    setScreenNumber(211);
    Serial.print("---Config.----");
    Serial.print("Ajst Grosso: ");
    Serial.print(getVelStep());
    Serial.print("Screen-> ");
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen212()
{
    setIsMainMenu(false);
    setScreenNumber(212);
    Serial.print(F("-----Config.-----"));
    Serial.print(F("Vel Passos: "));
    Serial.print(getVelPPM());
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}
//////////////////////////////////////////////////////

//AJUSTE FINO
void InterfaceSerial::Screen30()
{
    setIsMainMenu(false);
    setScreenNumber(30);
    Serial.print(F("------Menu------"));
    Serial.print(F("-->Ajuste Fino"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen300()
{
    setIsMainMenu(false);
    setScreenNumber(300);
    Serial.print(F("---Ajuste Fino--"));
    Serial.print(F("Passos:"));
    Serial.print(getStepCount());
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen310()
{
    setIsMainMenu(false);
    setScreenNumber(310);
    Serial.print(F("---Ajuste Fino--"));
    Serial.print(F("-->Posicao 1"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen311()
{
    setIsMainMenu(false);
    setScreenNumber(311);
    Serial.print(F("---Ajuste Fino--"));
    Serial.print(F("-->Posicao 2"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen312()
{
    setIsMainMenu(false);
    setScreenNumber(312);
    Serial.print(F("---Ajuste Fino--"));
    Serial.print(F("-->Posicao 3"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}
//////////////////////////////////////////////////////

//AJUSTE GROSSO
void InterfaceSerial::Screen40()
{
    setIsMainMenu(false);
    setScreenNumber(40);
    Serial.print(F("------Menu------"));
    Serial.print(F("-->Ajuste Grosso"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen400()
{
    setIsMainMenu(false);
    setScreenNumber(400);
    Serial.print(F("---Ajuste Grosso--"));
    Serial.print(F("Passos:"));
    Serial.print(getStepCount());
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}
//////////////////////////////////////////////////////

//POSIÇÕES SALVAS
void InterfaceSerial::Screen50()
{
    setIsMainMenu(false);
    setScreenNumber(50);
    Serial.print(F("------Menu------"));
    Serial.print(F("-->Posicoes Salvas"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen500()
{
    setIsMainMenu(false);
    setScreenNumber(500);
    Serial.print(F("-Posicoes Salvas"));
    Serial.print(F("-->Zero Relativo"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen501()
{
    setIsMainMenu(false);
    setScreenNumber(501);
    Serial.print(F("-Posicoes Salvas"));
    Serial.print(F("-->Posicao 1"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen502()
{
    setIsMainMenu(false);
    setScreenNumber(502);
    Serial.print(F("-Posicoes Salvas"));
    Serial.print(F("-->Posicao 2"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen503()
{
    setIsMainMenu(false);
    setScreenNumber(503);
    Serial.print(F("-Posicoes Salvas"));
    Serial.print(F("-->Posicao 3"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen510()
{
    setIsMainMenu(false);
    setScreenNumber(510);
    Serial.print(F("-----Pos. Salvas-----"));
    Serial.print(F("ZeroRel.: "));
    Serial.print(getStepCountAbsoluto());
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen511()
{
    setIsMainMenu(false);
    setScreenNumber(511);
    Serial.print(F("-----Pos. Salvas-----"));
    Serial.print(F("Posicao 1: "));
    Serial.print(getPosicao1());
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen512()
{
    setIsMainMenu(false);
    setScreenNumber(512);
    Serial.print(F("-----Pos. Salvas-----"));
    Serial.print(F("Posicao 2: "));
    Serial.print(getPosicao2());
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen513()
{
    setIsMainMenu(false);
    setScreenNumber(513);
    Serial.print(F("-----Pos. Salvas-----"));
    Serial.print(F("Posicao 3: "));
    Serial.print(getPosicao3());
    Serial.print(F("Screen-> "));
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen520()
{
    setIsMainMenu(false);
    setScreenNumber(520);
    Serial.print(F("-----Pos. Salvas-----"));
    Serial.print(F("Ir p/ Zero Abs?"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen521()
{
    setIsMainMenu(false);
    setScreenNumber(521);
    Serial.print(F("-----Pos. Salvas-----"));
    Serial.print(F("Ir p/ Posicao1?"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen522()
{
    setIsMainMenu(false);
    setScreenNumber(522);
    Serial.print(F("-----Pos. Salvas-----"));
    Serial.print(F("Ir p/ Posicao2?"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen523()
{
    setIsMainMenu(false);
    setScreenNumber(523);
    Serial.print(F("-----Pos. Salvas-----"));
    Serial.print(F("Ir p/ Posicao3?"));
    Serial.print(F("Screen -> "));
    Serial.println(getScreenNumber());
}
//////////////////////////////////////////////////////

//SAIR
void InterfaceSerial::Screen60()
{
    setIsMainMenu(false);
    setScreenNumber(60);
    Serial.print(F("------Menu------"));
    Serial.print(F("--> Exit        "));
    Serial.print(F("IntScreen5 -> "));
    Serial.println(getScreenNumber());
}

void InterfaceSerial::Screen_beginingTrail()
{
    setIsMainMenu(false);
    setScreenNumber(70);
    Serial.print("Inicio da trilha");
    delay(5000);
    InterfaceSerial::mainScreen();
}
void InterfaceSerial::Screen_endTrail()
{
    setIsMainMenu(false);
    setScreenNumber(71);
    Serial.print("Fim da trilha");
    delay(5000);
    InterfaceSerial::mainScreen();      
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
