#include <stdio.h>

int main () {
    int N;
    int base = 100;
    int bonus = 50;
    int total = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        total += base + (i*bonus);
    }
    printf("%d", total);
}