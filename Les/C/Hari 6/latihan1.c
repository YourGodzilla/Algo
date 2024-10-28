#include <stdio.h>

main() {
    int i,n,in[25],sc;

    printf("Input Jumlah Element Array: ");
    scanf("%d",&n);
    printf("\n");

    printf("Input %d angka (dipisah dengan enter): \n",n);

    for(i=0;i<n;i++){
        printf("");
        scanf("%d",&in[i]);
    }

    printf("Input angka yang akan dicari: ");
    scanf("%d",&sc);

    for(i=0;i<n;i++){
        if(in[i]==sc){
        printf("Angka ditemukan pada index ke-%i",i);
        break;
        }
    } 
    
    if(i==n){
        printf("Angka tidak ditemukan!!");
    }
}