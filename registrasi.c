#include <stdio.h>
#include <stdlib.h>

int main(){
    // Membuka file yang akan dijadikan tempat untuk menyimpan username dan password yang diinput user
    FILE *fpw = fopen("Database/login.bin","wb");
    char login[20];

    printf("\t=== Registrasi Akun ===\n");
    printf("Aturan : [username](spasi)[password]\n");
    printf("Contoh : Polan 123\n");
    printf("Masukkan username dan password :"); 
    scanf("%[^\n]",&login);

    // Menuliskan inputan user ke dalam file yang telah dibuka
    fwrite(login,sizeof(char),sizeof(login)/sizeof(char),fpw);

    fclose(fpw);

    
    EXIT_SUCCESS;
}