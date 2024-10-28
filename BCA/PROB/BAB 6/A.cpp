#include <stdio.h>

int counter = 0;

int func(int n) {
    if (n % 3 == 0 && n != 0) counter++;
    if (n == 0) return 1;
    else if (n == 1) return 2;
    else if (n % 5 == 0) return n * 2;
    else return func(n - 1) + n + func(n - 2) + n - 2;

}

int main () {
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        int n;
        scanf("%d", &n);
        int tot = func(n);
        printf("Case #%d: %d %d\n", tc, tot, counter);
        counter = 0;
    }
}