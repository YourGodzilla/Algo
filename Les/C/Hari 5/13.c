#include <stdio.h>
#include <stdlib.h>

void main() {
    char buff[255];
    FILE *fptr;

    if((fptr = fopen("puisi.txt","r"))==NULL){
        printf("Error: File Tidak Ada!");
        exit(1);
    }

    while(fgets(buff,sizeof(buff),fptr)) {
        printf("%s\n",buff);
    }
    

    fclose(fptr);
}