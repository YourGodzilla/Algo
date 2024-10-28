#include <stdio.h>

main () {
    int a,b;
    printf("\nProgram Perbandingan\n");
    printf("-------------------- \n");
    printf("Masukan Nilai a = ");
    scanf("%i",&a);
    printf("Masukan Nilai b = ");
    scanf("%i",&b);

    printf("a > b = %i \n", a>b);
    printf("a < b = %i \n", a<b);
    printf("a >= b = %i \n", a>=b);
    printf("a <= b = %i \n", a<=b);
    printf("a == b = %i \n", a==b);
    printf("a != b = %i \n", a!=b);
}