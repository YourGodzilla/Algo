#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);

    for (int tc = 1; tc <= t; tc++) {
        int n;
        scanf("%d", &n);
        int x[n+5], y[n+5];
        for (int i = 0; i < n; i++) {
            scanf("%d", &x[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &y[i]);
        }
        int counter = 0;
        for (int i = 0; i < n; i++) {
            if (x[i] < y[i]) {
                counter++;
            }
        }

        printf("Case #%d: %d\n", tc, counter);
    }
}