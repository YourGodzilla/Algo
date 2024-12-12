#include <stdio.h>

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition (int A[], int low, int high) {
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (A[j] <= A[high]) {
            i++;
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[i+1], &A[high]);
    return i + 1;
}

void quickSort (int A[], int low, int high) {
    if (low < high) {
        int pivot = partition(A, low, high);
        
        quickSort(A, low, pivot - 1);
        quickSort(A, pivot + 1, high);
    }
}


int main() {
    int t;
    scanf("%d", &t);

    for (int tc = 1; tc <= t; tc++) {
        int arr[30];
        for (int i = 0; i < 25; i++) {
            scanf("%d", &arr[i]);
        }

        quickSort(arr, 0, 24);

        int a = arr[0] / 2;
        int b = arr[1] - a; 
        int c = arr[4] - a;
        int e = arr[24] / 2;
        int d = arr[23] - e;

        printf("Case #%d: %d %d %d %d %d\n", tc, a, b, c, d, e);
    }

    return 0;
}