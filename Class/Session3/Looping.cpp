#include <stdio.h>

int main () {
    for (int i = 0; i <= 5; i++) {
        // if (i%2==1) continue;
        printf("%d", i * 2);
    }
    printf("\n");
    return 0;
}