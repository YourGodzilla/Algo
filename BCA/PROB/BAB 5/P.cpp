#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n][n];
    int counter[n + 1];

    for (int i = 0; i <= n; i++) {
        counter[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] > 0 && a[i][j] <= n) {
                counter[a[i][j]]++;
            }
        }
    }

    int noHadir = 0;
    for (int i = 1; i <= n; i++) {
        if (counter[i] < n) {
            noHadir++;
        }
    }

    printf("%d\n", noHadir);
    
    return 0;
}