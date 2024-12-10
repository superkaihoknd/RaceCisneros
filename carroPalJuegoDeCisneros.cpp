#include <iostream>
#include <conio.h>
#include <windows.h>
#include "Header.h"
#include "gotoxy.h"

using namespace std;


int main()
{
    int y=10, x=200;
    char key;
   
    //Generacion de carros
    for (int i = 0; i < 200; i+=10)
    {
        system("cls");
        gotoxy(x, y);
        Car(i);
        Sleep(100);

        //Cambio de posicion del carro por teclado
        if (_kbhit())//--Correccion del metodo Faltaba ()
        {
            key = _getch();
            switch (key) 
            {
            case 'j':
                y--;
                break;
            case 'k':
                y++;
                break;
            }
        }

       
    }
    //Fin del ciclo

    //Cambio desde githuyY
    //Cambio desde vs2022
    //Cambioi con push

    // Cambio en la ramma example >D
}
