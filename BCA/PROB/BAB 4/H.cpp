#include <stdio.h>

int main () {
    int n,k;
    scanf("%d %d", &n,&k);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("#");
        }
        printf("\n");
    }
    
    printf("\n");

    for (int i = 0; i < n; i++) {
        if ((i+1)%k==0) {
            for (int j = 0; j < n; j++) {
                printf("#");
            }
        } else {
            for (int j = 0; j < n-1; j++) {
                printf(".");
            }
        }
        printf("\n");
    }
    
    printf("\n");

    for (int i = 0; i <= n-1; i++) {
        for (int j = 0; j <= n-1; j++) {
            if ((j+1)%k==0) {
                printf("#");
            } else {
                printf(".");
            }
        }
        printf("\n");
    }
}