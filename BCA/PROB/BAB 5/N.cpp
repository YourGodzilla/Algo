#include <stdio.h>
#include <limits.h>

int main () {
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        int n;
        scanf("%d", &n);

        int v[n+5];
        for (int i = 0; i < n; i++) {
            scanf("%d", &v[i]);
        }

        int max1 = INT_MIN;
        int max2 = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (v[i] >= max1) {
                max2 = max1; 
                max1 = v[i]; 
            } else if (v[i] > max2 && v[i] < max1) {
                max2 = v[i];
            }
        }

        printf("Case #%d: %d\n", tc, max1 + max2);
    }
    
    return 0;
}