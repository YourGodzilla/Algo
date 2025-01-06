#include <stdio.h>

int binarySearch(long long int arr[], int low, int high, long long int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (target >= arr[high]) return high + 1;
        if (target < arr[low]) return -1;
        if (high - low == 1) return low + 1;
        if (target == arr[mid]) return mid + 1;
        
        if (target < arr[mid]) high = mid;
        else if (target > arr[mid]) low = mid;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    long long int arr[100005];
    long long int sum = 0;
    long long int array[100005] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
        sum += arr[i];
        array[i] = sum;
    }

    int q;
    scanf("%d", &q);

    for (int tc = 1; tc <= q; tc++) {
        long long int m;
        scanf("%lld", &m);
        printf("Case #%d: %d\n", tc, binarySearch(array, 0, n-1, m));
    }
    return 0;
}