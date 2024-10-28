#include <stdio.h>

int main() {
    int panjang, lebar, luas, keliling;
    printf("\nProgram Perhitungan Persegi Panjang\n");
    printf("----------------------------------- \n");

    printf("Masukkan Panjang Persegi Panjang : ");
    scanf("%i", &panjang);
    printf("Masukkan Lebar Persegi Panjang : ");
    scanf("%i", &lebar);

    printf("\n");

    luas = panjang * lebar;
    keliling = 2 * panjang * lebar;

    printf("Luas Persegi Adalah %i \n", luas);
    printf("Keliling Persegi Adalah %i \n", keliling);

    return 0;
}