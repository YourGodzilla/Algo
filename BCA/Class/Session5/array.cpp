#include <stdio.h>

int main() {
    int n, q, arr[105], a;

    scanf("%d %d", &n, &q);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr[i]);
    }
    
    for (int i = 0; i < q; i++) {
        scanf("%d", &a);
        int idx = -1;
        for (int j = 0; j < n; j++) {
            if (arr[j] == a) {
                idx = j;
                break;
            }
        }
        
        if (idx >= 0) {
            for (int j = idx; j < n - 1; j++) {
            arr[j] = arr[j + 1];
            }
            n--;
        }         

        for (int j = 0; j < n; j++) {
            if (j != 0) printf(" ");
            printf("%d", arr[j]);
        }
        printf("\n");

        // // cara kedua
        // arr[a-1] = -1; // misal 1 < a[i] < 1000000
    }
    
    return 0;
}