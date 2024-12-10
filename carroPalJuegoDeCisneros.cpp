#include <iostream>
#include <conio.h>
#include <windows.h>
#include "Header.h"
#include "gotoxy.h"
#include "CartMyself.cpp"

using namespace std;


int main()
{
    int y = 0;
    const int  x = 200;
    char key;

    //Carro jugador
    for (int i = 0; i < 100; i ++)
    {
        system("cls");
        gotoxy(0, y);
        CartMyself();
       
        if (_kbhit())
        {
            key = _getch();
            switch (key)
            {
            case 'j':
                y-=5;
                break;
            case 'k':
                y+=5;
                break;
            }
        }
        Sleep(100);
    }

    //Generar carro carril Superior
    for (int i = 0; i < 200; i += 10)
    {
        y = 5;
        system("cls");
        gotoxy(x, y);
        Car(i);

    }
    //Generacion de carros
    for (int i = 0; i < 200; i+=10)
    {
        y = 20;
        system("cls");
        gotoxy(x, y);
        Car(i);
       
    }
    //Generar carro carril 2 
    
    //Fin del ciclo

    //Cambio desde githuyY
    //Cambio desde vs2022
    //Cambioi con push

    // Cambio en la ramma example >D
}
//TODO: 
/* //Cambio de posicion del carro por teclado
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
 }*/