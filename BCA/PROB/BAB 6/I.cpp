#include <stdio.h>

int counter = 0;

int func(int n) {
    counter++;

    if (n == 0 || n == 1) return 1;

    return func(n - 1) + func(n - 2);
}

int main () {
    int t,n;

    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        scanf("%d", &n);
        int total = func(n);
        printf("Case #%d: %d\n", tc, counter);
        counter = 0;
    }
}