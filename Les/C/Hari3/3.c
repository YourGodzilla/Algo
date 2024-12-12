#include <stdio.h>

main () {
    int N,i;
    printf("Bilangan : ");
    scanf("%i",&N);
    for (i=1;i<=N;i++) {
        if (i%2!=0) {
            printf("%i",i);
        }
    }
}