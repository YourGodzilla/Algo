#include <stdio.h>

long long int abs(long long int x) {
    if (x < 0) return -x;
    return x;
}

void swap(long long int *a, long long int *b) {
    long long int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(long long int arr[], long long int low, long long int high) {
    long long int pivot = high;
    long long int i = (low - 1);

    for (long long int j = low; j < high; j++) {
        if (arr[j] <= arr[high]) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i + 1);
}

void quicksort(long long int arr[], long long int low, long long int high) {
    if (low < high) {
        long long int pi = partition(arr, low, high);

        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }
}

long long int main() {
    long long int t;
    scanf("%d", &t);

    long long int n[100005];
    for (long long int i = 0; i < t; i++) {
        scanf("%lld", &n);
    }

    quicksort(n, 0, t-1);

    long long int max = -10000005;
    long long int diff[100005] = {0};
    for (int i = 0; i < t - 1; i++) { // menghitung selisih angka yang sudah di absolute
        diff[i] = abs(n[i] - n[i+1]);
        if (diff[i] > max) max = diff[i];
    }

    int flag = 0;
    for (int i = 0; i < t - 1; i++) { // mencari pasangan dengan selisih terbesar
        if (diff[i] == max) {
            if (flag) printf(" ");
            printf("%lld %lld", n[i], n[i+1]);
            flag = 1;
        }
    }
    printf("\n");
}