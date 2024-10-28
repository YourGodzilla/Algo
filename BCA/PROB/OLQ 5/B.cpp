#include <stdio.h>

int main () {
    int t,n,m;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        scanf("%d %d", &n, &m);
        long long int tot = 0;
        for (int i = 0; i < n; i++) {
            int maxA = 0;
            for (int j = 0; j < m; j++) {
                long long int a;
                scanf("%lld", &a);
                if (a > maxA) {
                    maxA = a;
                }   
            }
            tot += maxA; 
        }
        printf("Case #%d: %lld\n", tc, tot); 
    }
}