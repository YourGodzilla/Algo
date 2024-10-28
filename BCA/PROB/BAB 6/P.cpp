#include <stdio.h>

int func(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n % 2 != 0) return 1;
    else return n = func(n - 1) + func(n - 2);
}

int main () {
    int n;
    scanf("%d", &n);
    int tot = func(n);
    printf("%d\n", tot);
}