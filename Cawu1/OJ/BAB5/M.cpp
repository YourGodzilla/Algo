#include <stdio.h>

int main () {
    int t,n;

    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        scanf("%d", &n);

        // looping input
        int inp[n+5][n+5];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &inp[i][j]);
            }
        }

        // looping untuk calculate colomn
        int sum[n+5];
        for (int i = 0; i < n; i++) {
            sum[i] = 0;
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                sum[i] += inp[j][i];
            }
        }

        // output
        printf("Case #%d:", tc);
        for (int i = 0; i < n; i++) {
            printf(" %d", sum[i]);
        }
        printf("\n");
    }
}