#include <stdio.h>

main () {
    int tot,cm,sisa,km,m;
    printf("Program Konversi Centimeter Menjadi Kilometer Meter \n");
    printf("--------------------------------------------------- \n");
    printf("Masukan total jarak = ");
    scanf("%i", &tot);

    km = tot / 100000;
    sisa = tot % 100000;
    m = sisa / 1000;
    cm = sisa % 1000;

    printf("Semut menempuh jarak sejauh %i km + %i m + %i cm", km, m, cm);
}