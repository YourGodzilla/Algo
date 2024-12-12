#include <stdio.h>

int main () {
    int t,k;
    

    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        scanf("%d", &k);
        
        int pos = 0;
        int jump = 0;
        int n = 1;

        while (pos < k) {
            pos += n;
            n++;
            jump++;
        }

        printf("Case #%d: %d\n", i, jump);
    }
    
}