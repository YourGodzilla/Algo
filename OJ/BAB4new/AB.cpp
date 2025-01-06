#include <stdio.h>

int main () {
    int t,n,a,b,c,d;
    
    scanf("%d", &t);
    for (int i = 1 ; i <= t ; i++) {
        scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
        int counter=0;
        for (int j = 1; j <= n; j++) {
            if (j%a==0 || j%b==0 || j%c==0 || j%d==0) {
                counter++;
            }
        }
        printf("Case #%d: %d\n", i, counter);
    }
    
}