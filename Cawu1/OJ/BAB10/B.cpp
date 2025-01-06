#include <stdio.h>

long long int binarySearch(long long int m, long long low, long long high) {
    while (low < high) {
        long long int mid = low + (high - low) / 2;
        long long int sum = mid * (mid + 1) * (2 * mid + 1) / 6;
        if (sum >= m) high = mid;
        else low = mid + 1;
    }
    return high;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int tc = 1; tc <= t; tc++) {
        long long int m;
        scanf("%llu", &m);
        printf("Case #%d: %llu\n", tc, binarySearch(m, 1, 1500000));
    }
    return 0;
}