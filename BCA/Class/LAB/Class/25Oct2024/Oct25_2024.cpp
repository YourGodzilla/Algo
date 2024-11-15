#include <stdio.h>

void printArr(int arr[]) {
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *a, int*b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j+1]) {
                // melakukan swap / pertukaran
                swap(&arr[j], &arr[j+1]);
            }
            printArr(arr);
        }
    }
}

void selectionSort(int arr[], int n) {
    int minIdx = 0;
    for (int i = 0; i < n -1; i++) {
        minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[minIdx] > arr[j]) {
                minIdx = j;
            }
        }
        // melakukan swap
        swap(&arr[i], &arr[minIdx]);
    }
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int curr = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > curr) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }
}

int main () {
    int arr[5] = {5, 9 ,1, 4, 2};
    printArr(arr);
    // bubbleSort(arr, 5);
    // selectionSort(arr, 5);
    insertionSort(arr, 5);
    printArr(arr);
}