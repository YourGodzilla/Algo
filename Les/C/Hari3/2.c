#include <stdio.h>

main () {
    int x;
    printf("Masukkann Bilangan : ");
    scanf("%i",&x);

    if (x%2==0){
        printf("Bilangan Genap");
    }
    else {
        printf("Bilangan Ganjil");
    }
}