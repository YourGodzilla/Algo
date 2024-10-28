#include <stdio.h>
#include <string.h>
#include <ctype.h>

int  main() {
    char i,in[50],A[50];
    int panjang;
    printf("## Program Kata / Angka Palindrom Bahasa C ##\n");
    printf("=============================================\n\n");

    printf("Input kata/angka: ");
    gets(in);

    panjang=strlen(in);

    for(i=0;i<panjang/2;i++){
        if (tolower(in[i])!=tolower(in[panjang-i-1])) {
            printf("%s Bukan palindrom",in);
            break;
        } else {
            printf("%s adalah palindrom",in);   
            break;
        }
    }
}