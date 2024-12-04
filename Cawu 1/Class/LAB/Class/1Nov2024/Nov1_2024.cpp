// quick sort
// merge sort

#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}

void merge(int arr[], int left, int mid, int right){
    int leftSize = mid - left + 1;
    int rightSize = right - mid;

    int L[leftSize], R[rightSize];\
    for (int i = 0; i < leftSize; i++){
        L[i] = arr[left+1];
    }
    for (int i = 0; i < rightSize; i++){
        R[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;
    while(i < leftSize && i < rightSize){
        if(L[i] <= R[j]){
            swap(&arr[k], &L[i]);
            i++;
        } else {
            swap(&arr[k], &R[j]);
            j++;
        }
        k++;
    }

    while(j < rightSize){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right){
    if (left < right){
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid); // left side
        mergeSort(arr, mid+1, right); // right side
    }
}

int main(){
    int numbers[] = {30, 50, 31, 9, 3, 8, 20, 45};

    return 0;
}