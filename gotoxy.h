#pragma once
void gotoxy(int x, int y)
{
    printf("\033[%d;%dH", y, x);
}