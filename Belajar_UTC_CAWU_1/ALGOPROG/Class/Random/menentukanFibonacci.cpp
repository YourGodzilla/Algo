#include <stdio.h>

int main () {
    int n;
    int a = 0;
    int b = 1;
    int c;
    int flag = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        c = b + a;
        if (c == n) {
            flag = 1;
            break;
        }
        a = b;
        b = c;
        // printf("%d\n", c);
    }
    if (flag == 1) {
        printf("%d adalah fibonacci", n);
    } else {
        printf("%d adalah bukan fibonacci", n);
    }
}