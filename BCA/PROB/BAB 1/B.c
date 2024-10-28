#include <stdio.h>

int main () {
    int i, N, M;

    scanf("%d %d", &N, &M);

    for (i = 1; i <= M; i++)
    {
        printf("%d\n", N);
        N++;
    }
}