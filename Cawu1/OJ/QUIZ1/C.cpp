#include <stdio.h>

int main () {
    int t,n;

    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        scanf("%d", &n);
        int count = 0;
        int temp[1000005] = {0};
        for (int i = 0; i < n; i++) {
            int m;
            scanf("%d", &m);

            if (temp[m] == 0) {
                count++;
            }
            temp[m]++;
        }
        printf("Case #%d: %d\n", tc, count);
    }
    
}