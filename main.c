#include <stdio.h>
#include <stdlib.h>
//make function prototype, later make header file for all function
void home_disp(int choice);
int quiz(int *score);
void sign_up(char *username, char *pass);
void log_in(FILE *fptr, char *usernameInput, char *passwordInput);


int main(int argc, char argv[])//argument for this program is username and pass
{ 
    // declaration for variable
    // int choice;
    // int sec;
    // int score = 0;

    //Signup & Login Area
    printf("=======Signup Session===========\n");
    printf("\tUsername:  \n");
    printf("\tPassword:  \n");
    printf("\tRe-confirm password:  \n");
    //write to store user data to binary file
    printf("=======Login Session==========");
    printf("\tUsername:  \n");
    printf("\tPassword:  \n");
    //compare data from binary file with user input

    //display main menu

    //quiz area(question and score)
    //display final score and details for user

    return 0;
}
