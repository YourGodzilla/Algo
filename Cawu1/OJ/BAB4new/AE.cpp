#include <stdio.h>

int main () {
    int n,r,t;
    double tot,phi=3.14;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d %d", &r, &t);
        tot = 2 * phi * r * (r + t);
        printf("Case #%d: %.2lf\n", i, tot);
    }
    
}