#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        int n, m;
        scanf("%d %d", &n, &m);

        int matrix[n+5][m+5];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        long long int sum = 0;
        for (int i = 0; i < n; i++) {
            long long int temp = 0;
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] > temp) temp = matrix[i][j];
            }
            sum += temp;
        }
        printf("Case #%d: %lld", tc, sum);
    }
    
    return 0;
}