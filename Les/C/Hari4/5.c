#include <stdio.h>

void kali_dua(int *num) {
    *num=*num * 2;
}

main() {
    int angka = 9;

    kali_dua(&angka);

    printf("Isi variabel angka = %d\n",angka);
}