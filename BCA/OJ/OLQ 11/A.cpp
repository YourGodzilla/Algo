#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[105];
    int indeks;
} Tamu;

void swap(Tamu *a, Tamu *b) {
    Tamu temp = *a;
    *a = *b;
    *b = temp;
}

int partition(Tamu arr[], int low, int high) {
    int mid = low + (high - low) / 2;
    swap(&arr[mid], &arr[high]);
    char pivot[105];
    strcpy(pivot, arr[high].nama);

    int index = low;
    for (int i = low; i < high; i++) {
        if (strcmp(arr[i].nama, pivot) < 0) {
            swap(&arr[i], &arr[index]);
            index++;
        }
    }
    swap(&arr[index], &arr[high]);
    return index;
}

void quicksort(Tamu arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int binarySearch(Tamu arr[], int size, char *key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int cmp = strcmp(arr[mid].nama, key);
        if (cmp == 0)
            return arr[mid].indeks;
        else if (cmp < 0)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    FILE *file = fopen("testdata.in", "r");

    int T, N, i;
    Tamu rsvp[1005];
    char datang[1005][105];

    fscanf(file, "%d\n", &T);
    for (i = 0; i < T; i++) {
        fscanf(file, "%s\n", rsvp[i].nama);
        rsvp[i].indeks = i;
    }

    quicksort(rsvp, 0, T - 1);

    fscanf(file, "%d\n", &N);
    for (i = 0; i < N; i++) {
        fscanf(file, "%s\n", datang[i]);
    }

    for (i = 0; i < N; i++) {
        int hasil = binarySearch(rsvp, T, datang[i]);
        printf("%d\n", hasil);
    }

    return 0;
}