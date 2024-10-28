#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n][n];
    int found[100] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int temp = a[i][j];
            if (found[temp]) {
                printf("Nay\n");
                return 0;
            }
            found[temp] = 1;
        }
        for (int j = 0; j < n; j++) {
            found[a[j][i]] = 0;
        }
    }

    printf("Yay\n");
    return 0;
}