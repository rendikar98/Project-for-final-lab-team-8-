#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include<time.h>

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
  puts("Quiz dimulai");
  delay(2);
  puts("Soal Pertama");
  delay(1);
  puts("=======================================================================================");
  printf("Manakah karakter disney yang terkenal meninggalkan sepatu kaca pada saat pesta dansa?\n");
  puts("=======================================================================================");
  puts("A. Pochatonas\t||\tB. Putri Tidur");
  puts("C. Cinderella\t||\tD. Elsa");
  puts("--------------------------------------");
  printf("Pilihan Jawaban: ");
  scanf("%c",&pilihan1);
  delay(1);
  if (toupper(pilihan1)=='C')
  {
      printf("Anda Benar\nPoin yang anda dapatkan sebesar 20");
      *score +=20;
      *count +=1;
  }
  else
  {
      printf("Anda Salah\nPoin yang anda dapatkan sebesar 0");
  }
  delay(1);
  puts("\n=======================================================================================");
  printf("---------------------------------Soal Selanjutnya--------------------------------------\n");
  puts("=======================================================================================");
  delay(1);
  puts("==================================================================================================================================");
  printf("Siapakah yang membuat marah Zinedine Zidane sehinnga Zidane melakukan tragedi penyundulan terhadapnya pada final Piala Dunia 2006?\n");
  puts("==================================================================================================================================");
  puts("A. Marco Materazzi\t||\tB. Fabio Cannavaro");
  puts("C. Gianluigi Buffon\t||\tD. Filippo Inzaghi");
  puts("--------------------------------------------------");
  printf("Pilihan Jawaban: ");
  scanf(" %c",&pilihan2);
  delay(1);
  if (toupper(pilihan2)=='A')
  {
      printf("Anda Benar\nPoin yang anda dapatkan sebesar 20");
      *score +=20;
      *count+=1;
  }
  else
  {
      printf("Anda Salah\nPoin yang anda dapatkan sebesar 0");
  }
  delay(1);
  puts("\n=======================================================================================");
  printf("---------------------------------Soal Selanjutnya--------------------------------------\n");
  puts("=======================================================================================");
  delay(1);
  puts("=======================================================================================");
  printf("Siapakah penemu bahasa C dalam pemograman?\n");
  puts("=======================================================================================");
  puts("A. Graydon Hoare\t||\tB. James Gosling");
  puts("C. Guido Van Rossum\t||\tD. Dennis Ritchie");
  puts("-------------------------------------------------");
  printf("Pilihan Jawaban: ");
  scanf(" %c",&pilihan3);
  delay(1);
  if (toupper(pilihan3)=='D')
  {
      printf("Anda Benar\nPoin yang anda dapatkan sebesar 20");
      *score +=20;
      *count+=1;
  }
  else
  {
      printf("Anda Salah\nPoin yang anda dapatkan sebesar 0");
  }
  delay(1);
  puts("\n=======================================================================================");
  printf("---------------------------------Soal Selanjutnya--------------------------------------\n");
  puts("=======================================================================================");
  delay(1);
  puts("=======================================================================================");
  printf("Manakah makanan yang tidak perlu menggunakan bumbu kacang?\n");
  puts("=======================================================================================");
  puts("A. Gado-gado\t||\tB. Rujak Ulek");
  puts("C. Lumpia Basah\t||\tD. Sate");
  puts("-------------------------------------");
  printf("Pilihan Jawaban: ");
  scanf(" %c",&pilihan4);
  delay(1);
  if (toupper(pilihan4)=='C')
  {
      printf("Anda Benar\nPoin yang anda dapatkan sebesar 20");
      *score +=20;
      *count+=1;
  }
  else
  {
      printf("Anda Salah\nPoin yang anda dapatkan sebesar 0");
  }
  delay(1);
  puts("\n=======================================================================================");
  printf("---------------------------------Soal Selanjutnya--------------------------------------\n");
  puts("=======================================================================================");
  delay(1);
  puts("=======================================================================================");
  printf("Siapakah pengarang dari serial manga berjudul One Piece?\n");
  puts("=======================================================================================");
  puts("A. Kazuki Takahashi\t||\tB. Saijyo Shinji");
  puts("C. Tsunoda Jirou\t||\tD. Eiichiro Oda");
  puts("------------------------------------------------");
  printf("Pilihan Jawaban: ");
  scanf(" %c",&pilihan5);
  delay(1);
  if (toupper(pilihan5)=='D')
  {
      printf("Anda Benar\nPoin yang anda dapatkan sebesar 20");
      *score +=20;
      *count+=1;
  }
  else
  {
      printf("Anda Salah\nPoin yang anda dapatkan sebesar 0");
  }
  delay(1);
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
    int score=0,count=0;
    soal(&score,&count);
    printf("\n%d",count);
    printf("\n%d",score);
    //display final score and details for user

    return 0;
}
