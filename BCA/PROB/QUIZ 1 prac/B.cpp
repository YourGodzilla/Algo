#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        int n;
        double i;
        int m;
        scanf("%d %lf %d", &m, &i, &n);

        printf("Case #%d:\n", tc);
        for (int a = 1; a <= n; a++) {
            double pers = (i/100) / 12;
            int interest = (m * pers * 0.8);
            m += interest;
            printf("%d %d\n", a, m);
        }
    }
}