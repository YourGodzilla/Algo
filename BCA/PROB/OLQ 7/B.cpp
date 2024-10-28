#include <stdio.h>

int func(int n, int x, int y) {
    if (n == 0) return x;
    else if (n == 1) return y;
    else return func(n - 1, x, y) - func(n - 2, x, y);
}

int main () {
    int t,n;
    int x,y;

    scanf("%d",&t);
    for (int tc = 1; tc <= t; tc++) {
        scanf("%d %d %d", &n, &x, &y);
        int total = func(n,x,y);
        printf("Case #%d: %d\n", tc, total);
    }
    return 0;
}