#include <stdio.h>

int main () {
    int n,tot = 0;
    int base = 100;
    int pow = 50;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        tot = tot + base + (pow*i);
    }
    
    printf("%d\n", tot);
}