#include <stdio.h>

int main () {
    int alas, tinggi, luas, keliling;
    printf("Program Penghitungan Luas dan Keliling Segitiga\n");
    printf("-----------------------------------------------\n");

    printf("Masukan Sisi Alas : ");
    scanf("%d", &alas);
    printf("Masukan Tinggi : ");
    scanf("%d", &tinggi);

    luas = 0.5 * alas * tinggi;
    keliling = 3 * alas;

    printf("Luas Bidang Segitiga adalah %d\n", luas);
    printf("Keliling Bidang Segitiga adalah %d\n", keliling);

    return 0;
}