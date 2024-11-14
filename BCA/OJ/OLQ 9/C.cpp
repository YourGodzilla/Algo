#include <stdio.h>
#include <string.h>

typedef struct {
    char name[55];
    int num;
} Data;

void swap(Data *a, Data *b) {
    Data temp = *a;
    *a = *b;
    *b = temp;
}

int partition(Data arr[], int low, int high) {
    int pivot = arr[high].num;
    int i = low - 1; 

    for (int j = low; j < high; j++) {
        if (arr[j].num > pivot || (arr[j].num == pivot && strcmp(arr[j].name, arr[high].name) < 0)) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    
    swap(&arr[i+1], &arr[high]);
    return (i + 1);
}

void quicksort(Data arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); 

        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    Data data[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d", data[i].name, &data[i].num);
    }
    
    quicksort(data, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%s %d\n", data[i].name, data[i].num);
    }

    return 0;
}
