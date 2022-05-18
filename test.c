// Works in Turbo C compiler only
#include <stdio.h>
#include <windows.h>
#include <conio.h>
COORD coord= {0,0};

void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
   int x, y;

   x = 25;
   y = 10;

   gotoxy(x, y);
   printf("\t\t===========================================================================================\n");
    gotoxy(x, 12);
   printf("C program to change cursor position.");

   getch();
   return 0;
}

