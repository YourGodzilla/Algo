#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        int a, b;
        int tot;
        scanf("%d %d", &a, &b);
        tot = a + b;
        printf("Case #%d: %03d\n",tc, tot);
    }
    return 0;
}