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
    countingSort(angka, 20, 1001); 

    printf("After Sorting: \n");
    for (int i = 0; i < 20; i++) {
        printf("%d, ", angka[i]);
    }
    printf("\n");
    
    return 0;
}