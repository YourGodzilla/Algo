#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        int n;
        scanf("%d", &n);
        int temp = 0;
        int counter = 1;
        scanf("%d", &temp);
        for (int i = 1; i < n; i++) {
            int a;
            scanf("%d", &a);
            if (a == temp) counter++;
            if (a > temp) {
                temp = a;
                counter = 1;
            }
        }
        printf("Case #%d: %d\n", tc, counter);
    }
}