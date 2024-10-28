#include <stdio.h>

void main() {
    char buff[255];
    char text[255];
    FILE *fptr;

    fptr = fopen("puisi.txt","w");

    for(int i = 0;i < 5;i++){
        printf("Isi baris ke-%d: ",i);
        fgets(text,sizeof(text),stdin);

        fputs(text,fptr);
    }

    printf("File berhasil ditulis\n");

    fclose(fptr);

    fptr = fopen("puisi.txt","r");

    while(fgets(buff,sizeof(buff),fptr)){
        printf("Isi filenya sekarang: %s",buff);
    }

    fclose(fptr);
}