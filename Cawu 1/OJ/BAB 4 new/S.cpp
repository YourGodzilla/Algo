#include <stdio.h>

int main () {
    int n,p,x,balon=0;

    scanf("%d %d", &n, &p);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &x);
        if (p>x) {
            balon++;
        }
    }
    printf("%d\n", balon);
}