#include <stdio.h>
#include <stdlib.h>

int linearSearch(int arr[], int n, int find) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == find) return 1;
    }
    return 0;
}

int main() {
    int arr[105];
    for (int i = 0; i < 100; i++) {
        arr[i] = rand() % 100 + 1;
    }
    int q, a;
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &a);
        if (linearSearch(arr, 100, a) == 1) printf("Ketemu\n");
        else printf("Tidak ketemu\n");
    }
    
    return 0;
}