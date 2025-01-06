#include <stdio.h>

int func(int k, int a, int b) {
    if (k == 0) return a;
    else if (k == 1) return b;
    else return func(k - 1, a, b) + func(k - 2, a, b);
}

int main () {
    int a,b,k;

    scanf("%d %d", &a, &b);
    scanf("%d", &k);

    printf("%d\n", func(k,a,b));
}