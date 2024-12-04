#include <stdio.h>

int main () {
    int n, a, tot=0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a);
        tot += a;
    }
    printf("%d\n", tot);
    
    return 0;
}