#include <stdio.h>

int main () {
    unsigned long long int t=3, x, p;
    scanf("%*llu");
    for (int i = 0; i < t; i++) {
        scanf("%llu %llu", &x, &p);
        printf("%llu\n", (x >> p) && 1);
    }
}