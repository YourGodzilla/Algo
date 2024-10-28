#include <stdio.h>

int func();

int func(int a, int b) {
    if (a == 0) {
        return b + 1;
    } else if (a > 0 && b == 0) {
        return func(a - 1, 1);
    } else if (a > 0 && b > 0) {
        return func(a - 1, func(a, b - 1));
    }
    return 0;
}

int main () {
    int m,n;
    scanf("%d %d", &m, &n);

    int tot = func(m, n);

    printf("result: %d\n", tot);

    return 0;
}