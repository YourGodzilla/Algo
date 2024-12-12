#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        int n;
        scanf("%d", &n);

        long long int like[n+5];
        like[1] = 0;
        like[2] = 1;
        for (int i = 3; i <= n; i++) {
            like[i] = like[i-1] + like[i-2];
        }
        printf("Case #%d: %lld\n", tc, like[n]);
    }
    
    return 0;
}