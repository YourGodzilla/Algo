#include <stdio.h>

int linearSearch(int arr[], int target, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main () {
    int arr[] = {3, 4, 10, 9, 5};

    int size = sizeof(arr) / sizeof(arr[0]);

    int result = linearSearch(arr, 9, size);

    printf("%d\n", result);
    return 0;
}