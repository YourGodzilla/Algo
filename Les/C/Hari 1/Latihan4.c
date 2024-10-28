#include <stdio.h>
#include <string.h>

main () {
    int a,b;
    char simbol[5];
    printf("Program Kalkulator Sederhana \n");
    printf("---------------------------- \n");
    printf("Masukan Nilai a : ");
    scanf("%i", &a);
    printf("Masukan Nilai b : ");
    scanf("%i", &b);
    printf("Masukkan simbol : ");
    scanf("%s", &simbol);

    if (strcmp(simbol,"+")==0) {
        printf("Hasil Penjumlahan = %i \n", a + b);
    }
    else if (strcmp(simbol,"-")==0) {
        printf("Hasil Pengurangan = %i \n", a - b);
    }
    else if (strcmp(simbol,"*")==0) {
        printf("Hasil Perkalian = %i \n", a * b);
    }
    else if (strcmp(simbol,"/")==0) {
        printf("Hasil Pembagian = %i \n", a / b);
        printf("Hasil Modulo = %i \n", a % b);
    }
    else {
        printf("Penghitungan Error");
    } 
}