#include <stdio.h>

int main () {
    char bakso,mie,bihun,kode;
    int jumlah,total,harga;

    printf("Apakah Anda ingin memesan makanan [Y/T] : ");
    scanf("%c",&kode);
    kode = getchar;

    switch (kode) {
        case 'Y' : {
            printf("Menu Makanan : \n");
            printf("1. Bakso\n2. Mie Ayam\n3.");
        }
    }
    
    return 0;
}