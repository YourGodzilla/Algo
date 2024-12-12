#include <stdio.h>

main() {
    int A[100] [100];
    int m,n,i,j;

    printf("Matriks berordo m x n\n");
    printf("---------------------\n");
    printf("Masukkan banyaknya baris (m):");
    scanf("%d",&m);
    printf("Masukkan banyaknya kolom (n):");
    scanf("%d",&n);
    printf("\n");

    for(i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            printf("Elemen matriks A[%d,%d]:",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
        
    }

    printf("\n");
    printf("Matriks A = \n\n");
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            printf("%3d",A[i][j]);
        }
        printf("\n");
    }
    
}