#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int k = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[k]) k = j;
        }
        if (k != i) swap(&arr[k], &arr[i]);
    }
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void countingSort(int arr[], int n, int k) {
    int count[k+5];
    for (int i = 0; i < k+5; i++) {
        count[i] = 0;
    }
    
    for (int i = 0; i < n; i++) { // counting
        count[arr[i]]++;
    }
    
    int m = 0;
    for (int i = 0; i < k + 5; i++) {
        for (int j = 0; j < count[i]; j++) {
            arr[m] = i;
            m++;
        }
    }
}

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int temp[r+5];
    i = l;
    j = m+1;
    while (i <= m && j <= r) {
        if (arr[i] < arr[j]) {
            temp[k] = arr[i];
            k++;
            i++;
        } else {
            temp[k] = arr[j];
            k++;
            j++;
        }
    }

    while (i <= m) { // copy sisanya dari bagian kiri
        temp[k] = arr[i];
        k++;
        i++;
    }

    while (j <= r) { // copy sisanya dari bagian kanan
        temp[k] = arr[j];
        k++;
        i++;
    }

    for (int i = l; i <= r; i++) { // copy balikin ke arr awal
        arr[i] = temp[i];
    }
    
}

void mergeSort(int arr[], int l, int r) {
    if(l >= r) return;
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);
    merge(arr, l, m, r);
}

int main () {
    int angka[1005];
    printf("Before Sorting: \n");
    for (int i = 0; i < 20; i++) {
        angka[i] = rand() % 1000 + 1;
        printf("%d, ", angka[i]);
    }
    printf("\n");
    
    // selectionSort(angka, 20);
    // bubbleSort(angka, 20);
    // countingSort(angka, 20, 1001); 
    mergeSort(angka, 0, 19);

    printf("After Sorting: \n");
    for (int i = 0; i < 20; i++) {
        printf("%d, ", angka[i]);
    }
    printf("\n");
    
    return 0;
}