#include <stdio.h>
#define phi 3.14

int main() {
    float jari, luas, keliling;
    printf("Masukkan jari-jari lingkaran = ");
    scanf("%f", &jari);
    luas=phi*jari*jari;
    keliling=2*phi*jari;
    printf("Luas keliling Lingkaran = %f \n", luas);
    printf("Keliling lingkaran = %f \n", keliling);
    return 0;
}
