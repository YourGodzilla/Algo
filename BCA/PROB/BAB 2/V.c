#include <stdio.h>

int main () {
    int t;
    float a,r,f,k;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%f", &a);
        r = (4 * a) / 5;
        f = ((9 * a) / 5) + 32;
        k = a + 273;
        printf("%.2f %.2f %.2f\n", r, f, k);
    }
}