#include <stdio.h>

int func(int a, int b) {
    if (a == b) return 1;
    else if (a == 1) return 0;
    else if (a % 2 == 0) return func(a / 2, b);
    else if (a % 2 == 1) return func(a * 3 + 1, b);
}

int main () {
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        int a,b;
        scanf("%d %d", &a, &b);
        // func(a, b);

        printf("Case #%d: ", tc);
        if (func(a, b)) puts("YES");
        else puts("NO");
    }
}