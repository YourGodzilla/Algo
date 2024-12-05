#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[1005];
    int jumlah;
    int harga;
    int total;
} Cust;

void swap(Cust *a, Cust *b) {
    Cust temp = *a;
    *a = *b;
    *b = temp;
}

int partition(Cust arr[], int low, int high) {
    int pivot = arr[high].total;
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j].total >= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(Cust arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int main() {
    Cust cust[1005];

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%s %d %d", cust[i].nama, &cust[i].jumlah, &cust[i].harga);
    }

    for (int i = 0; i < t; i++) {
        cust[i].total = cust[i].jumlah * cust[i].harga;
    }

    quickSort(cust, 0, t - 1);

    for (int i = 0; i < t; i++) {
        printf("%s %d\n", cust[i].nama, cust[i].total);
    }

    return 0;
}
