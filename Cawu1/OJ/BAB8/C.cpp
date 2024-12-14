#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[105];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < m; i++) {
        int temp;
        scanf("%d", &temp);

        for (int j = 0; j < n; j++) {
            if (arr[j] == temp) arr[j] = -1;
        }
    }

    int max = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }

    printf("Maximum number is %d\n", max);
    return 0;
}