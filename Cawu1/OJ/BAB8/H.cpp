#include <stdio.h>

void swap (long long int *a, long long int *b) {
    long long int temp = *a;
    *a = *b;
    *b = temp;
}

long long int partition(long long int a[], int low, int high) {
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (a[j] <= a[high]) {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i+1], &a[high]);
    return i + 1;
}

void quick(long long int a[], int low, int high) {
    if (low < high) {
        int pi = partition(a, low, high);
        quick(a, low, pi-1);
        quick(a, pi+1, high);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    long long int arr[105];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }
    
    quick(arr, 0, n-1);

    long long int pow;
    scanf("%d", &pow);

    long long int counter = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] <= pow) {
            counter++;
            pow -= arr[i];
        }
    }

    printf("%d\n", counter);

    return 0;
}