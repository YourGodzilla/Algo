#include <stdio.h>
#include <string.h>

main () {
    char A[10] = "Theo";
    char B[10];
    int panjang;

    printf("%s\n",A);
    strcpy(B,A);
    printf("hasil strcpy : %s\n",B);
    strcat(A,B);
    printf("Hasil strcat : %s\n",A);
    panjang=strlen(B);
    printf("hasil strlen : %i\n",panjang);

    printf("Hasil strcmp : ");
    if (strcmp(A,B) == 0) {
        printf("A dan B sama\n");
    } 
    else {
        printf("A dan B tidak sama\n");
    }

    printf("hasil strchr : ");
    if (strchr(A,'o') != NULL) {
        printf("Ditemukan\n");
    }
    else {
        printf("Tidak Ditemukan\n");
    }

    printf("hasil strstr : ");
    if (strstr(A,"ab") != NULL)
    {
        printf("Ditemukan\n");
    } else {
        printf("Tidak Ditemukan\n");
    }
    
}