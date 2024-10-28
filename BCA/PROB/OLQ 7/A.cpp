#include <stdio.h>

int func (int m, int n) {
    
}

int main () {
    int t, m ,n;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        scanf("%d %d", &m, &n);
        printf("Case #%d: %d\n", tc, func(m,n));
    }
    return 0;
}