#include <stdio.h>

int main () {
    unsigned long long int t=3;
    scanf("%*llu");
    for (int i = 0; i < t; i++) {
        unsigned long long int x, p;
        scanf("%llu %llu", &x, &p);
        printf("%llu\n", (x >> p) & 1);
    }
    return 0;
}