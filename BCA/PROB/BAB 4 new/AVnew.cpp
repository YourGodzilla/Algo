#include <stdio.h>

int main () {
    int n;
    int counter = 0;
    scanf("%d", &n);

    for (int j = 0; j <= n; j++) {
        for (int l = 0; l <= n; l++) {
            for (int b = 0; b <= n; b++) {
                if (j+l+b == n) {
                    counter++;
                }
            }
        }
    }
    printf("%d\n", counter);
}