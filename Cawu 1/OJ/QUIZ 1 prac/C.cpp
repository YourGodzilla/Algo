#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        int n;
        scanf("%d", &n);
        int x[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &x[i]);
        }
        int sama = 0;
        int current = 1;
        for (int i = 1; i < n; i++) {
            if (x[i] == x[i- 1]) {
                current++;
            } else {
                sama += current / 2;
                current = 1;
            }
        }
        sama += current / 2;
        printf("Case #%d: %d", tc, sama);
    }
    
}