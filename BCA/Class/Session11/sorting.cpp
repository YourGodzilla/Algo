#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int k = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[k]) k = j;
        }
        if (k != i) swap(&arr[k], &arr[i]);
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
    
    selectionSort(angka, 20);

    printf("After Sorting: \n");
    for (int i = 0; i < 20; i++) {
        printf("%d, ", angka[i]);
    }
    printf("\n");
    
    return 0;
}