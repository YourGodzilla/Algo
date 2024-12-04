#include <stdio.h>

int main () {
    int n, a;
    int sebelum = 0;
    int counter = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a == 1 && sebelum != 0) {
            printf("%d ", counter);
            counter = 0;
        }
        counter++;
        sebelum = a;
    }
    printf("%d\n", a);
}