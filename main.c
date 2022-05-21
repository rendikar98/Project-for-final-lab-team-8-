#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <windows.h>

COORD coord = {0,0};
#define x 28

//make function prototype, later make header file for all function

int detik;
void delay(int detik)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * detik;
    // Storing start time
    clock_t start_time = clock();
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}

void gotoxy(int kolom, int baris)
{
    coord.X = kolom;
    coord.Y = baris;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void *soal(int *score,int *count){
  char pilihan1,pilihan2,pilihan3,pilihan4,pilihan5;
  system("cls");
    gotoxy(36, 6);
    printf("=======================================================================================");
    gotoxy(36, 7);
    printf("                          Quiz dimulai dalam hitungan...\n");
    delay(2);
    system("cls");
    gotoxy(36, 8);
    printf("                                     3\n");
    delay(1);
    system("cls");
    gotoxy(36, 8);
    printf("                                     2\n");
    delay(1);
    system("cls");
    gotoxy(36, 8);
    printf("                                     1\n");
    delay(1);
    system("cls");
    gotoxy(36, 8);
    printf("========================================================================\n");
    gotoxy(36, 9);
    printf("----------------------------Soal Pertama--------------------------------\n");
    gotoxy(36, 10);
    printf("========================================================================\n");
    delay(1);
    gotoxy(36, 11);
    printf("=======================================================================================\n");
    gotoxy(36, 12);
    printf("Manakah karakter disney yang terkenal meninggalkan sepatu kaca pada saat pesta dansa?\n");
    gotoxy(36, 13);
    printf("=======================================================================================\n");
    gotoxy(36, 14);
    printf("A. Pochatonas\t||\tB. Putri Tidur\n");
    gotoxy(36, 15);
    printf("C. Cinderella\t||\tD. Elsa\n");
    gotoxy(36, 16);
    printf("--------------------------------------\n");
    gotoxy(36, 17);
    printf("Pilihan Jawaban: ");
    scanf("%c",&pilihan1);
    delay(1);
    gotoxy(36, 18);
    if (toupper(pilihan1)=='C')
    {
        printf("Anda Benar\n");
        gotoxy(36, 19);
        printf("Poin yang anda dapatkan sebesar 20\n");
        *score +=20;
        *count +=1;
    }
    else
    {
        printf("Anda Salah\n");
        gotoxy(36, 19);
        printf("Poin yang anda dapatkan sebesar 0\n");
    }

    gotoxy(36, 8);
    delay(1);
    system("cls");
    gotoxy(36, 8);
    printf("========================================================================\n");
    gotoxy(36, 9);
    printf("----------------------------Soal Selanjutnya----------------------------\n");
    gotoxy(36, 10);
    printf("========================================================================\n");
    delay(1);
    gotoxy(36, 11);
    printf("=============================================================================\n");
    gotoxy(36, 12);
    printf("Siapakah yang membuat marah Zinedine Zidane sehinnga Zidane melakukan tragedi\n");
    gotoxy(36, 13);
    printf("penyundulan terhadapnya pada final Piala Dunia 2006?\n");
    gotoxy(36, 14);
    printf("=============================================================================\n");
    gotoxy(36, 15);
    printf("A. Marco Materazzi\t||\tB. Fabio Cannavaro\n");
    gotoxy(36, 16);
    printf("C. Gianluigi Buffon\t||\tD. Filippo Inzaghi\n");
    gotoxy(36, 17);
    printf("--------------------------------------------------\n");
    gotoxy(36, 18);
    printf("Pilihan Jawaban: ");
    scanf(" %c",&pilihan2);
    delay(1);
    gotoxy(36, 19);
    if (toupper(pilihan2)=='A')
    {
        printf("Anda Benar\n");
        gotoxy(36, 20);
        printf("Poin yang anda dapatkan sebesar 20\n");
        *score +=20;
        *count +=1;
    }
    else
    {
        printf("Anda Salah\n");
        gotoxy(36, 20);
        printf("Poin yang anda dapatkan sebesar 0\n");
        *score +=20;
        *count +=1;
    }

    gotoxy(36, 8);
    delay(1);
    system("cls");
    gotoxy(36, 8);
    printf("========================================================================\n");
    gotoxy(36, 9);
    printf("----------------------------Soal Selanjutnya----------------------------\n");
    gotoxy(36, 10);
    printf("========================================================================\n");
    delay(1);
    gotoxy(36, 11);
    printf("========================================================================\n");
    gotoxy(36, 12);
    printf("Siapakah penemu bahasa C dalam pemograman?\n");
    gotoxy(36, 13);
    printf("========================================================================\n");
    gotoxy(36, 14);
    printf("A. Graydon Hoare\t||\tB. James Gosling\n");
    gotoxy(36, 15);
    printf("C. Guido Van Rossum\t||\tD. Dennis Ritchie\n");
    gotoxy(36, 16);
    printf("-------------------------------------------------\n");
    gotoxy(36, 17);
    printf("Pilihan Jawaban: ");
    scanf(" %c",&pilihan3);
    delay(1);
    gotoxy(36, 18);
    if (toupper(pilihan3)=='D')
    {
        printf("Anda Benar\n");
        gotoxy(36, 19);
        printf("Poin yang anda dapatkan sebesar 20\n");
        *score +=20;
        *count +=1;
    }
    else
    {
        printf("Anda Salah\n");
        gotoxy(36, 19);
        printf("Poin yang anda dapatkan sebesar 0\n");
        *score +=20;
        *count +=1;
    }

    gotoxy(36, 8);
    delay(1);
    system("cls");
    gotoxy(36, 8);
    printf("========================================================================\n");
    gotoxy(36, 9);
    printf("----------------------------Soal Selanjutnya----------------------------\n");
    gotoxy(36, 10);
    printf("========================================================================\n");
    delay(1);
    gotoxy(36, 11);
    printf("========================================================================\n");
    gotoxy(36, 12);
    printf("Manakah makanan yang tidak perlu menggunakan bumbu kacang?\n");
    gotoxy(36, 13);
    printf("========================================================================\n");
    gotoxy(36, 14);
    printf("A. Gado-gado\t||\tB. Rujak Ulek\n");
    gotoxy(36, 15);
    printf("C. Lumpia Basah\t||\tD. Sate\n");
    gotoxy(36, 16);
    printf("-------------------------------------\n");
    gotoxy(36, 17);
    printf("Pilihan Jawaban: ");
    scanf(" %c",&pilihan4);
    delay(1);
    gotoxy(36, 18);
    if (toupper(pilihan4)=='C')
    {
        printf("Anda Benar\n");
        gotoxy(36, 19);
        printf("Poin yang anda dapatkan sebesar 20\n");
        *score +=20;
        *count +=1;
    }
    else
    {
        printf("Anda Salah\n");
        gotoxy(36, 19);
        printf("Poin yang anda dapatkan sebesar 0\n");
        *score +=20;
        *count +=1;
    }

    gotoxy(36, 8);
    delay(1);
    system("cls");
    gotoxy(36, 8);
    printf("========================================================================\n");
    gotoxy(36, 9);
    printf("----------------------------Soal Selanjutnya----------------------------\n");
    gotoxy(36, 10);
    printf("========================================================================\n");
    delay(1);
    gotoxy(36, 11);
    printf("========================================================================\n");
    gotoxy(36, 12);
    printf("Siapakah pengarang dari serial manga berjudul One Piece?\n");
    gotoxy(36, 13);
    printf("========================================================================\n");
    gotoxy(36, 14);
    printf("A. Kazuki Takahashi\t||\tB. Saijyo Shinji\n");
    gotoxy(36, 15);
    printf("C. Tsunoda Jirou\t||\tD. Eiichiro Oda\n");
    gotoxy(36, 16);
    printf("------------------------------------------------\n");
    gotoxy(36, 17);
    printf("Pilihan Jawaban: ");
    scanf(" %c",&pilihan5);
    delay(1);
    gotoxy(36, 18);
    if (toupper(pilihan5)=='D')
    {
        printf("Anda Benar\n");
        gotoxy(36, 19);
        printf("Poin yang anda dapatkan sebesar 20\n");
        *score +=20;
        *count +=1;
    }
    else
    {
        printf("Anda Salah\n");
        gotoxy(36, 19);
        printf("Poin yang anda dapatkan sebesar 0\n");
        *score +=20;
        *count +=1;
    }
    delay(1);
    return 0;
}

int main(int argc, char* argv[])//argument for this program is username and pass
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
    delay(1);
    //display main menu

    //quiz area(question and score)
    int score=0,count=0;
    soal(&score,&count);
    system("cls");
    gotoxy(36, 8);
    printf("Soal yang benar %d\n",count);
    gotoxy(36, 10);
    printf("Total skor anda adalah %d\n",score);
    
    return EXIT_SUCCESS;
}
