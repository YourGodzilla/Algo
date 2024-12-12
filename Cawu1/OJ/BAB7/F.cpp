#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[15];
    int nilai;
} Mapel;

void swap(Mapel *a, Mapel *b) {
    Mapel temp = *a;
    *a = *b;
    *b = temp;
}

int partition (Mapel arr[], int low, int high) {
    int pivot = arr[high].nilai;
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j].nilai < pivot || (arr[j].nilai == pivot && strcmp(arr[j].nama, arr[high].nama) < 0)) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i + 1);
}

void quicksort (Mapel arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }
}

int main () {
    Mapel mapel[100];
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d", mapel[i].nama, &mapel[i].nilai); getchar();
    }

    quicksort(mapel, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%s\n", mapel[i].nama);
    }
    

    return 0;
}