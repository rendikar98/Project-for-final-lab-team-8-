#include <stdio.h>
#include <stdlib.h>
COORD coord = {0,0};
#define x 28
//make function prototype, later make header file for all function
void home_disp(int choice);
int quiz(int *score);
void sign_up(char *username, char *pass);
void log_in(FILE *fptr, char *usernameInput, char *passwordInput);

void gotoxy(int kolom, int baris)
{
    coord.X = kolom;
    coord.Y = baris;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


int main(int argc, char argv[])//argument for this program is username and pass
{ 
    // declaration for variable
    // int choice;
    // int sec;
    // int score = 0;

    //Signup & Login Area
    system("cls");
    gotoxy(x, 6);
    printf("=======Signup Session===========\n");
    printf("\t\nUsername:  \n");
    scanf("%d", &y);
    printf("\t\nPassword:  \n");
    scanf("%d", &y);
    printf("\t\nRe-confirm password:  \n");
    scanf("%d", &y);
    system("cls");
    //write to store user data to binary file
    gotoxy(x, 12);
    printf("=======Login Session==========\n");
    printf("\t\nUsername:  \n");
    scanf("%d", &y);
    printf("\t\nPassword:  \n");
    scanf("%d", &y);

    //compare data from binary file with user input

    //display main menu

    //quiz area(question and score)
    //display final score and details for user

    return 0;
}
