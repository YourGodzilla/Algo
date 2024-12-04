#include <stdio.h>

int main () {
    int t,A,B;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &A, &B);
        printf("%d\n", (A/B) << B);
    }
    
}