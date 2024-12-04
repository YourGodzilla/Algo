#include <stdio.h>

int main () {
    int t,n;
    
    scanf("%d", &t);
    for (int tc = 1; tc <= t ; tc++) {
        scanf("%d", &n);
        printf("Case #%d:\n", tc);
        for (int i = 1; i <= n; i++) {
            if ((i%3==0 || i%5==0) && i%15!=0) {
                printf("%d Jojo\n", i);
            } else {
                printf("%d Lili\n", i);
            }
        }
    }
}