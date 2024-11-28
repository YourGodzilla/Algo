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

void quicksort(Tamu arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = low;
        char pivot[105];
        strcpy(pivot, arr[high].nama);
        for (int i = low; i < high; i++) {
            if (strcmp(arr[i].nama, pivot) < 0) {
                swap(&arr[i], &arr[pivotIndex]);
                pivotIndex++;
            }
        }
        swap(&arr[pivotIndex], &arr[high]);

        quicksort(arr, low, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, high);
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
    int T, N, i;
    Tamu rsvp[1005];
    char datang[1005][105];

    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        scanf("%s", rsvp[i].nama);
        rsvp[i].indeks = i;
    }

    quicksort(rsvp, 0, T - 1);

    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%s", datang[i]);
    }

    for (i = 0; i < N; i++) {
        int hasil = binarySearch(rsvp, T, datang[i]);
        printf("%d\n", hasil);
    }

    return 0;
}

