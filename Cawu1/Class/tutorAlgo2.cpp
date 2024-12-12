#include <stdio.h>

int main () {
    int tc, a;
    scanf("%d", &tc);
    for (int t = 0; t < tc; t++)
    {
        scanf("%d", &a);
        int b = a, c = 0;
        while(b > a) {
            c *= 10;
            c += b % 10;
            b /= 10;
        }
        int d = c + a;
    }
}