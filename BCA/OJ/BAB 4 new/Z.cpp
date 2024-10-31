#include <stdio.h>

int main () {
    int n,k,tot=0;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &k);
        tot += k;
        if (tot==30){
            tot=10;
        } else if (tot==12) {
            tot=28;
        } else if (tot==35) {
            tot=7;
        } else if (tot>=40) {
            tot%=40;
        }
    }
    printf("%d\n", tot);
}