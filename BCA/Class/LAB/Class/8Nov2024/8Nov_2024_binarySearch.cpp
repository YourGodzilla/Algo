#include <stdio.h>

int iterativeInterpolation(int arr[], int low, int high, int target) {
    while (low <= high) {
        // int mid = low + (high - low) / 2;
        int mid = low + ((high - low) * (target - arr[low]) / (arr[high] - arr[low]));

        if (arr[mid] == target) {
            return mid;
        }

        if (target < arr[mid]) { //pakai sebelah kiri
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int recursiveInterpolation(int arr[], int low, int high, int target) {
    if (low <= high) {
        int mid = low + ((high - low) * (target - arr[low]) / (arr[high] - arr[low]));
        if (arr[mid] == target) {
            return mid;
        }
        if (target < arr[mid]) {
            return recursiveInterpolation(arr, low, mid - 1, target);
        } else {
            return recursiveInterpolation(arr, mid + 1, low, target);
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int resultInter = iterativeInterpolation(arr, 0, size - 1, 5);
    int resultRecur = recursiveInterpolation(arr, 0, size - 1, 5);
    printf("Iterative: %d\n", resultInter);
    printf("Recursive: %d\n", resultRecur);
    return 0;
}