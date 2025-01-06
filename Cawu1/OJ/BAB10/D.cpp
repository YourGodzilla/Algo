#include <stdio.h>

int binarySearch(int arr[], int length, long long max) {
    int maxLength = 0;
    int idx = 0;

    while (idx < length) {
        long long temp = 0, temp2 = 0;
        for (int i = idx; i < length; i++) {
            if (temp + arr[i] <= max) {
                temp += arr[i];
                temp2++;
            }
            else break;
        }
        if (temp2 > maxLength) maxLength = temp2;
        idx++;
    }
    return maxLength;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int tc = 1; tc <= t; tc++) {
        long long n, m;
        scanf("%lld %lld", &n, &m);

        int arr[10005];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int hasil = binarySearch(arr, n, m);
        if (hasil == 0) hasil = -1;

        printf("Case #%d: %d\n", tc, hasil);
    }
    return 0;
}