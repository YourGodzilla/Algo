#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            printf("10");
        } else {
            printf("%d", a);
            int temp = b;
            b = a + b;
            a = temp;
        }

        if (i < n) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
