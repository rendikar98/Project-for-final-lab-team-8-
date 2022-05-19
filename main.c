#include <stdio.h>
#include <stdlib.h>
#include <string.h>

COORD coord = {0,0};
#define x 28
//make function prototype, later make header file for all function

void gotoxy(int kolom, int baris)
{
    coord.X = kolom;
    coord.Y = baris;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


int main(int argc, char argv[])//argument for this program is username and pass
{ 
    // Login
    
    // Jika argumen yang diinput user kurang atau lebih dari 3 maka akses ditolak dan keluar dari program
    if (argc != 3)
    {
        printf("\tMaaf anda gagal untuk login!\n\tAkses lebih lanjut ditolak");
        printf("\t\nCara penggunaan : ./FileAplikasiProgramUtama username password");
    }

    // Menyalin dari argumen[1] dan argumen [2] yang diinput user
    char usernameInput[10], passwordInput[10];
    strcpy(usernameInput, argv[1]);
    strcpy(passwordInput, argv[2]);

    FILE *fpr;

    if ((fpr = fopen("Database/login.bin", "rb")) == NULL)
    {
        printf("\tgagal membuka FILE Database/login.bin\n");
        return EXIT_FAILURE;
    }

    char akun[25];
    fread(akun, sizeof(char), sizeof(akun) / sizeof(char), fpr);

    fclose(fpr);

    char *string[25];
    char username[25], password[25];
    int ctrl = 0;

    string[0] = strtok(akun, " ");
    while (string[ctrl++] != NULL)
    {
        string[ctrl] = strtok(NULL, " ");
    }

    strcpy(username, string[0]);
    strcpy(password, string[1]);

    if ((strcmp(usernameInput, username) == 0) && (strcmp(passwordInput, password) == 0))
    {
        printf("\tBerhasil Login!\n");
    }
    else
    {

        return EXIT_FAILURE;
    }
    //display main menu

    //quiz area(question and score)
    //display final score and details for user

    return 0;
}
