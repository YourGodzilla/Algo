#include <stdio.h>

int main(){
    char nama[100];
    scanf("%[^\n]", &nama);
    printf("Happy Birthday to %s.\n", nama);
}