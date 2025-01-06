#include <stdio.h>

long long int tempMax;
int search (int arr[], int length, long long max) {
    int maxLength = 0, idx = 0, down = 0, temp = 0;
    tempMax = max;

    while (idx < length) {
        if (arr[idx] > max) {
            temp = 0;
            tempMax = max;
            idx++;
            continue;
        } else if (tempMax >= arr[idx]) {
            tempMax -= arr[idx];
            temp++;
            idx++;
        } else if (arr[idx] > tempMax && arr[idx] <= max) {
            tempMax += arr[down];
            down++;
            temp--;
        }
        if (temp > maxLength) maxLength = temp;

    }
    if (maxLength == 0) maxLength = -1;
    return maxLength;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[5005];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        long long int m;
        scanf("%lld", &m);

        printf("Case #%d: %d\n", tc, search(arr, n, m));
    }
    return 0;
}