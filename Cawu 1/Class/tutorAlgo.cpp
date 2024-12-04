#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        int t = a;
        while (t >= 10) {
            int sum = 0;
            while (t > 10) {
                sum += t % 10;
                t /= 10;
            }
            t = sum;
        }
        printf("%d", t);
    }
    return 0;
}