#include <stdio.h>

int main () {
    int t,n;

    scanf("%d", &t);
    for (int i = 1;i <= t;i++) {
        scanf("%d", &n);
        int tot = 1;
        printf("Case %d:", i);
        for (int j = 0;j < n;j++) {
            tot += j;
            printf(" %d", tot);
        }
        printf("\n");
    }
}