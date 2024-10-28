#include <stdio.h>

main() {
    int i,n,bil[50],max,min;

    printf("Input jumlah element array: ");
    scanf("%i",&n);
    printf("\n");

    printf("Input %i angka (dipisah dengan enter): \n",n);

    for(i=1;i<=n;i++){
        printf("");
        scanf("%i",&bil[i]);
    }

    min=bil[1];

    for(i=1;i<=n;i++){
        if(bil[i]<min)
        min=bil[i];
    }

    printf("Angka terkecil adalah: %i",min);
}