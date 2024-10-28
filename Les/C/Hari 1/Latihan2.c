#include <stdio.h>

main () {
    int sisi,L,K;
    printf("Program Perhitungan Luas dan Keliling Persegi \n");
    printf("--------------------------------------------- \n");
    printf("Masukan Panjang Sisi = ");
    scanf("%i", &sisi);

    L = sisi * sisi;
    K = sisi * 4;

    printf("Luas Persegi = %i \n", L);
    printf("Keliling Persegi = %i \n", K);
}