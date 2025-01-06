#include <stdio.h>

int main () {
    int t,n,a,counterGenap=0,counterGanjil=0;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        scanf("%d", &n);
        counterGanjil=0, counterGenap=0;
        for (int j = 1; j <= n; j++) {
            scanf("%d", &a);
            if(a%2==0){
                counterGenap++;
            } else {
                counterGanjil++;
            }
            
        }
        printf("Odd group : %d integer(s).\n", counterGanjil);
        printf("Even group : %d integer(s).\n\n", counterGenap);
    }
    
}