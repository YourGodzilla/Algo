#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        int n;
        scanf("%d", &n);
        double a[n+5];
        double tot = 0;

        for (int i = 0; i < n; i++) { // input
            scanf("%lf", &a[i]);
            tot += a[i];
        }

        for (int i = 0; i < n; i++) { // mengurutkan terlebih dahulu
            for (int j = 0; j < n - 1; j++) {
                if (a[j] > a[j+1]) {
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    // printf("%d", temp);
                }
            }
        }

        double median = 0;
        if (n % 2 == 0) median = (a[n/2] + a[n/2-1]) * 0.5;
        else median = a[n/2];

        double mean = tot / n;
        printf("Case #%d:\n", tc);
        printf("Mean : %.2lf\nMedian : %.2lf\n", mean, median); 
    }
}