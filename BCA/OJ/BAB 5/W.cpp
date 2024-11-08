#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        int n;
        scanf("%d", &n);
        int a[n+5];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            int found = 0;
            for (int j = 0; j < n; j++) {
                    for (int k = 0; k < n; k++) {
                        if (k != j && a[i] == a[j] + a[k]) {
                            found = 1;
                            break;
                        }
                    }
            if (found == 1) break;
            }
            if (found == 1) count++;
        }
        printf("Case #%d: %d\n", tc, count);
    }
    
    return 0;
}