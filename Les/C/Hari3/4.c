#include <stdio.h>

main () {
    int sum=0;
    int x=1;
    int i,n;
    int jumlah;

    printf("Masukkan Jumlah Bilangan : ");
    scanf("%i",&n);

    for (i=1;i<=n;i++) {
        printf("%i\n",x);
        sum=sum+x;
        x=x+2;
    }

    printf("Jumlahnya adalah %i",sum);
}