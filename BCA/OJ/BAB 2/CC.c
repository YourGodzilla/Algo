#include <stdio.h>

int main () {
    int N;

    scanf("%d", &N);
    printf("%d\n", N * (100 + (N-1)*25));

    return 0;
}