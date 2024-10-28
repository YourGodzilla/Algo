#include <stdio.h>

int main () {
    int t,jumlahHalaman,diTuju;

    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        scanf("%d %d", &jumlahHalaman, &diTuju);
        int depan = diTuju/2;
        int belakang;
        if (jumlahHalaman % 2 == 0) {
            belakang = ((jumlahHalaman - diTuju + 1) / 2);
        } else {
            belakang = ((jumlahHalaman - diTuju) / 2);
        }

        if (depan > belakang) {
            printf("Case #%d: %d\n", tc, belakang);
        } else {
            printf("Case #%d: %d\n", tc, depan);
        }
    }
}