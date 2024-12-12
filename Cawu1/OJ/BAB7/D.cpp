#include <stdio.h>
#include <string.h>

typedef struct {
    char judul[1005];
    char nama[1005];
    int count;
} Video;

void swap (Video *a, Video *b) {
    Video temp = *a;
    *a = *b;
    *b = temp;
}

int  partition (Video arr[], int low, int high) {
    int pivot = arr[high].count;
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        if(arr[j].count > pivot || (arr[j].count == pivot && strcmp(arr[j].judul, arr[high].judul) < 0)) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i + 1);
}

void quicksort (Video arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }
}

int main () {
    int count = 0;
    int n = 0;
    Video video[1005];
    int i = 0;

    FILE *file = fopen("testdata.in", "r");

    while (!feof(file)) {
        // fscanf(file, %[^\n]\n, count);
        fscanf(file, "%[^#]#%[^#]#%d\n", video[i].judul, video[i].nama, &video[i].count);
        i++;
        n++;
    }

    // for (int i = 0; i < n; i++) {

    // }

    quicksort(video, 0, n - 1);

    for (int i = 0; i < n; i++) {
    printf("%s by %s - %d\n", video[i].judul, video[i].nama, video[i].count);
    }
    return 0;
}