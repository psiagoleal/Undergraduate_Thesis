#include <stdio.h>
#include <cstdio>
#include <iostream>
#include "SerialClass.h"
#include <string>

using namespace std;

char SerialComSetup;
char comando;
int start;

int main(int argc, char* argv[])
{
	//open arduino device file (linux)
    std::ofstream arduino;
	arduino.open( "COM5");

    cout <<"Deseja iniciar controle do interferômetro pelo terminal?";
    cin >> SerialComSetup;
    arduino << SerialComSetup;

    //read it
    arduino.in() >> start;
    if(start == 1)
    {
        while(start = 1)
        {
            arduino.in();
            cout << "Comando: ";
            cin >> comando;
            arduino.in >> comando;
        }
    }

	return 0;
}