#include <stdio.h>

int main () {
    int t,n,lili,bibi;
    char a;

    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        scanf("%d", &n);
        lili = 0, bibi = 0;
        for (int j = 0; j <= n; j++){
            scanf("%c", &a);
            if (a=='L'){
                lili++;
                // printf("lili : ++\n");
            } else if (a=='B') {
                bibi++;
                // printf("bibi : ++\n");
            }
        }
        if (lili>bibi) {
            printf("Lili\n");
        } else if (bibi>lili) {
            printf("Bibi\n");
        } else if (lili==bibi) {
            printf("None\n");
        }
    }
    
}