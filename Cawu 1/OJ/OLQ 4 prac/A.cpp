#include <stdio.h>

int main () {
    int t,n;
    
    scanf("%d", &t);
    for (int i = 1;i <= t;i++) {
        scanf("%d", &n);
        if (n%11==0) {
            printf("Case #%d: Yeah\n", i);
        } else {
            printf("Case #%d: Nah\n", i);
        }
    }
}