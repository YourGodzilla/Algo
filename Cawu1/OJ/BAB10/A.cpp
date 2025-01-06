#include <stdio.h>

int binarySearch(int a[], int low, int high, int target){
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (a[mid] == target) {
            for (int i = low; i <= mid; i++) {
                if (a[i] == target) return i;
            }
        }
        if (a[mid] > target) return binarySearch(a, low, mid-1, target);
        return binarySearch(a, mid+1, high, target);
    }
    return -2;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[100005];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < m; i++) {
        int temp;
        scanf("%d", &temp);
        printf("%d\n", binarySearch(arr, 0, n-1, temp) + 1);
    }
}