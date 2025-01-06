#include <stdio.h>
#include <string.h>

typedef struct {
    char name[15];
    int harga;
} Item;

void swap(Item *a, Item *b) {
    Item temp = *a;
    *a = *b;
    *b = temp;
}

int partition(Item arr[], int low, int high) {
    int pivot = arr[high].harga;
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j].harga < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i+1], &arr[high]);
    return i + 1;
}

void quicksort(Item arr[], int low, int high) {
    if (low >= high) return;

    int pi = partition(arr, low, high);
    quicksort(arr, low, pi-1);
    quicksort(arr, pi+1, high);
}

int main () {
    FILE *file = fopen("testcase.in", "r");

    Item items[100];

    int n;
    fscanf(file, "%d\n", &n);

    int count = 0;
    for (int i = 0; i < n; i++) {
        char tempName[15];
        int tempHarga;
        fscanf(file, "%s %d\n", tempName, &tempHarga);

        int found = -1;
        for (int j = 0; j < count; j++) {
            if (strcmp(items[j].name, tempName) == 0) {
                found = j;
                break;
            }
        }

        if (found == -1) {
            strcpy(items[count].name, tempName);
            items[count].harga = tempHarga;
            count++;
        } else {
            items[found].harga += tempHarga;
        }

    }

    quicksort(items, 0, count - 1);

    for (int i = 0; i < count; i++) {
        printf("%s %d\n", items[i].name, items[i].harga);
    }
    return 0;
}