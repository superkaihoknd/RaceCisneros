#pragma once
#include <iostream>
using namespace std;
static void Car(int desp)
{
    char carOwn[][10] = { {' ', ' ', '_', '_', '_', '_', '_', '_', ' ', ' '},
                          { ' ', '/', ' ', ' ', '|', '_', '_', '_', '\\', ' ' },
                          { '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' |' },
                          { '-', '-', 'O', '-', '-', '-', '-', 'O', '-', '-' } };
    // Bucle para fila
    for (int i = 0; i < 4; i++)
    {
        //-- 
        for (int j = 0; j < desp; j++)
        {
            cout << ' ';
        }
        //Bucle para columna
        for (int j = 0; j < 10; j++)
        {
            cout << carOwn[i][j];
        }
        cout << endl;
    }

}