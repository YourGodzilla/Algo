#include <stdio.h>

int func();

int func(int n) {
    int a;
    int tot = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        tot = tot + a;
    }
    return tot;
}

int main () {
    int t,n;

    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        scanf("%d", &n);
        int tot = 0;
        tot = func(n);
        printf("Case #%d: %d\n", tc, tot);
    }
}