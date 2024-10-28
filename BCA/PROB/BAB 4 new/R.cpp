#include <stdio.h>

int main () {
    int t,n;

    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        scanf("%d", &n);

        int x[n+5];
        for (int i = 0; i < n; i++) {
            x[i] = 0;
        }
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &x[i]);
        }

        // mencari selisih
        int selisih = 0;
        int min = 0;
        for (int i = 1; i < n; i++) {
            selisih = x[i] - x[i-1];
            if (selisih < 0) {
                selisih *= -1;
            }
            if (i == 1) {
                min = selisih;
            }
            if (selisih < min) {
                min = selisih;
            }
        }
        printf("Case #%d: %d\n", tc, min);
    }
}