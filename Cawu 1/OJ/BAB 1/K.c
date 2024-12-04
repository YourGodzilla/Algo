#include <stdio.h>

int main () {
    char N[105], A[105];
    int U;

    scanf("%[^\n]", &N); getchar();
    scanf("%s %d", &A, &U); getchar();

    printf("Name: %s\n", N);
    printf("NIS: %s\n", A);
    printf("Age: %d\n", U);
}