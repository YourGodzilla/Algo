#include <stdio.h>

int main () {
    int t,x;

    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        scanf("%d", &x);
        for (int i = 1; i <= x; i++) {
            for (int j = 1; j <= x - i; j++) {
                printf(" ");
            }
            for (int k = 1; k <= 2 * i - 1; k++) {
                printf("*");
            }
            printf("\n");
        }
    }
}