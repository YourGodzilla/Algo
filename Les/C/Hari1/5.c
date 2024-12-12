#include <stdio.h>

main() {
    int a,b;
    printf("Masukkan bilangan pertama = ");
    scanf("%i", &a);
    printf("Masukan bilangan kedua = ");
    scanf("%i", &b);
    
    if (a>b) {
        printf("Bilangan terbesar adalah %i\n",a);
    }
    else printf("Bilangan terbesar adalah %i\n", b);
}