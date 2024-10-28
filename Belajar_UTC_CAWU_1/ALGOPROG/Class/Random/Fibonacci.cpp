#include <stdio.h>

int main () {
    int n;
    int a = 0;
    int b = 1;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int c = b + a;
        printf("%d\n", c);
        a = b;
        b = c;
    }
    
}