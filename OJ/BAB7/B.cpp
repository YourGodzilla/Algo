#include <stdio.h>
#include <string.h>

typedef struct{
    int number;
    char name[100];
} Plant;

void swap(Plant *a, Plant *b) {
    Plant temp = *a;
    *a = *b;
    *b = temp;
}

int partition(Plant arr[], int low, int high) {
    char pivot[100];
    strcpy(pivot, arr[high].name);
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        if (strcmp(arr[j].name, pivot) < 0) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i + 1);
}

void quicksort(Plant arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }
}

int main () {
    int n;
    Plant plants[1005];

    FILE *file = fopen("testdata.in", "r");

    fscanf(file, "%d\n", &n);
    for (int i = 0; i < n; i++) {
        fscanf(file, "%d#%[^\n]\n", &plants[i].number, plants[i].name);
    }

    quicksort(plants, 0, n - 1);
    
    for (int i = 0; i < n; i++) {
        printf("%d %s\n", plants[i].number, plants[i].name);
    }
    
    return 0;
}