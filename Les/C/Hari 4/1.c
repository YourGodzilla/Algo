#include <stdio.h>

main() {
    int tinggi[5];
    int i,n,sum=0;
    float rata;
    printf("Banyaknya data : ");
    scanf("%i",&n);
    printf("\n");

    for(i=1;i<=n;i++) {
        printf("Masukkan tinggi badan ke-%i : ",i);
        scanf("%i",&tinggi[i]);
        sum=sum+tinggi[i];
    }

    rata=(float)sum/n;
    printf("Rata rata tinggi : %.2f",rata);
}