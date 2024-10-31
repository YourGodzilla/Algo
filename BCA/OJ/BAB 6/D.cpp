#include <stdio.h>

int func();

int func(int a) {
    if (a == 1) {
        return 1;
    } else if (a%2 == 0) {
        return func(a / 2);
    } else if (a%2 != 0) {
        return func(a - 1) + func(a + 1);
    }
    return 0;
}

int main () {
    int t,n;

    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        scanf("%d", &n);
        int tot = func(n);
        printf("Case #%d: %d\n", tc, tot);
    }
    return 0;
}