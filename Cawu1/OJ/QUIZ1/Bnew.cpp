#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);

    int tot = 0;
    int a;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        tot += a;
    }
    
    printf("%d", tot - 1);
}