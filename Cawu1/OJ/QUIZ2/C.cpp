#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp[51];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

int partition(char arr[][51], int low, int high) {
    char pivot[51];
    strcpy(pivot, arr[high]);
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (strcmp(arr[j], pivot) < 0) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(char arr[][51], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int binarySearch(char kata[][51], int n, char find[]) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        int cmp = strcmp(kata[mid], find);
        if (cmp == 0) return mid;
        if (cmp < 0) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);

    char kata[10001][51];
    for (int i = 0; i < n; i++) {
        scanf("%s", kata[i]);
    }

    int y;
    scanf("%d", &y);

    char dicari[51];
    scanf("%s", dicari);

    quickSort(kata, 0, n - 1);

    int index = binarySearch(kata, n, dicari);

    if (index != -1) {
        int page = (index / y) + 1;
        printf("Found at %d\n", page);
    } else {
        printf("Not Found\n");
    }

    return 0;
}
