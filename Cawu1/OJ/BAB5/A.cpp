#include <stdio.h>

int main () {
    int a,b,n[100],c,d; // declare variable
    int tot = 0; // variable total buat ngitung jumlah view dari hari ke c sampe hari ke d

    scanf("%d", &a); // scan berapa panjang array
    for (int i = 0; i < a; i++) {
        scanf("%d", &n[i]); // bikin array
    }

    scanf("%d", &b);
    for (int i = 0; i < b; i++) {
        scanf("%d %d", &c, &d);
        for (int j = c - 1; j < d; j++) {
            tot += n[j];
        }
        printf("Case #%d: %d\n", i + 1, tot);
        tot = 0;
    }
}