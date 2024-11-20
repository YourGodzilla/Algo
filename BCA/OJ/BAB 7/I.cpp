#include <stdio.h>

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition (int arr[], int low, int high) {
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= arr[high]) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return i + 1;
}

void quicksort (int arr[], int low, int high) {
    if (low < high) {
        int pivot =  partition(arr, low, high);

        quicksort(arr, low, pivot - 1);
        quicksort(arr, pivot + 1, high);
    }
}

int main () {
    int t;
    scanf("%d", &t);

    int n;
    for (int tc = 1; tc <= t; tc++) {
        scanf("%d", &n);

        int a[n+5];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        quicksort(a, 0, n - 1);

        int jarak = 0;
        for (int i = 0; i < n - 1; i++) {
            if (i == n / 2 - 1) continue;
            if (a[i+1] - a[i] > jarak) jarak = a[i+1] - a[i];
        }

        printf("Case %d: %d\n", tc, jarak);
    }
    return 0;
}