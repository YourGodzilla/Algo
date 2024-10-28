#include <stdio.h>

int main () {
    int n;
    int counter = 0;
    scanf("%d", &n);

    for (int j = 0; j <= n; j++) {
        for (int l = 0; l <= n; l++) {
            int b;
            b = n - j - l;
            if (b >= 0) {
                counter++;
            }
        }
    }
    printf("%d\n", counter);
}