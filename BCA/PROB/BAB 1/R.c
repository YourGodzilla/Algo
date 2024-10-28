#include <stdio.h>

int main () {
    int O;
    char N[11], M[101], C;

    scanf("%[^\n]\n", &N);
    scanf("%[^\n]\n", &M);
    scanf("%c %d", &C, &O);

    printf("Id    : %s\n", N);
    printf("Name  : %s\n", M);
    printf("Class : %c\n", C);
    printf("Num   : %d\n", O);
}