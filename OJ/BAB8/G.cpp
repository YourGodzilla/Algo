#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int tc = 1; tc <= t; tc++) {
        int n, k;
        scanf("%d %d", &n, &k);

        int count = 0;
        for (int i = 0; i < n; i++) {
            int temp;
            scanf("%d", &temp);
            if (temp >= k) count++;
        }

        printf("Case #%d: %d\n", tc, count);
    }
    return 0;
}