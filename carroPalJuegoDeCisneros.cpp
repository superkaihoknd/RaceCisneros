#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "Header.h"
using namespace std;


int main()
{

    for (int i = 0; i < 100; i++)
    {
        system("cls");
        Car(i);
        Sleep(100);
    }

    
}