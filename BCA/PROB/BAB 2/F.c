#include <stdio.h>

int main () {
    int A,B,C,D,E,F;
    char G[10],H[10],I[10],J[10],K[10],L[10];
    
    scanf("%d %c %d %c", &A,&G,&B,&H);
    scanf("%d %c %d %c", &C,&I,&D,&J);
    scanf("%d %c %d %c", &E,&K,&F,&L);

    printf("%d\n", A+B);
    printf("%d\n", C+D);
    printf("%d\n", E+F);
}