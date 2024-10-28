#include <stdio.h>

int main () {
    int N,bagi;
    scanf("%d", &N);
    bagi = N / 2;
    printf("%d = %d + %d\n", N, bagi, bagi+1);
}