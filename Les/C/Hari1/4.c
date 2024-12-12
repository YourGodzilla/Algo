#include <stdio.h>

int main () {
    char huruf;
    printf("Program Menentukan Huruf Vokal \n");
    printf("------------------------------ \n\n");

    printf("Masukan huruf =  ");
    scanf("%c", &huruf);

    if (huruf == 'a'|| huruf == 'i'||huruf == 'u'||huruf == 'e'||huruf == 'o') {
        printf("Huruf %c adalah huruf vokal");
    }
    else 
        printf("Huruf %c adalah huruf konsonan");
}