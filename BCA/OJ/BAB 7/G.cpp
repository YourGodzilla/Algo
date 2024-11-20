#include <stdio.h>

int counter = 0;

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
    int pivot = partition(arr, low, high);

    quicksort(arr, low, pivot - 1);
    quicksort(arr, pivot + 1, high);
}

int main () {
    int t;
    scanf("%d", &t);

    int n, x;
    for (int tc = 1; tc <= t; tc++) {
        scanf("%d %d", &n, &x);

        int a[n+5];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        // quicksort(a, 0, n-1);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n-1; j++) {
                if (a[j] > a[j+1]) {
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    counter++;
                }
            }
        }

        printf("Case #%d: %d\n", tc, counter * x);

        counter = 0;
    }
    return 0;
}