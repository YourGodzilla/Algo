#include <stdio.h>

int main () {
    int t,n,tot;
    long long int ai;

    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        scanf("%d", &n);
        for (int j = 1; j <= n; j++) {
            scanf("%lld", &ai);
            tot += ai;
        }
        printf("Case #%d: %d\n", i, tot);
    }
    
}