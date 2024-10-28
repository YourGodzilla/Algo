#include <stdio.h>

int main () {
    int t,n,m;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        scanf("%d %d", &n, &m);
        printf("Case #%d:\n", i);
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= m; k++) {
                if(j==1||j==n||k==1||k==m) {
                    printf("#");
                } else {
                    printf(" ");
                }
            }
        printf("\n");
        }
            
    }
        
}
