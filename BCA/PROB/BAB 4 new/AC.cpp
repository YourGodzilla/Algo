#include <stdio.h>

int main () {
    int T,jumlahPermen,uang,hargaTerkecil=0;

    scanf("%d",&T);

    for (int i = 1; i <= T; i++) {
        scanf("%d %d", &jumlahPermen, &uang);
        for (int j = 1; j <= jumlahPermen; j++) {
            int hargaPermen;
            scanf("%d", &hargaPermen);
            if (j==1) {
                hargaTerkecil=hargaPermen;
            } else if (hargaPermen < hargaTerkecil) {
                hargaTerkecil = hargaPermen;
            }
        }
        printf("Case #%d: %d\n", i, uang / hargaTerkecil);
        // printf("%d", uang / hargaPermen);
    }
    
}