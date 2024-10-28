#include <stdio.h>

int main () {
    long long int t;
    scanf("%lld", &t);

    for (int i = 1; i <= t; i++) {
        long long int jumlahMenu, uang, total=0;
        scanf("%lld %lld", &jumlahMenu, &uang);
        for (int j = 0; j < jumlahMenu; j++) {
            long long int menu;
            scanf("%lld", &menu);
            total += menu;
        }
        if (total<=uang) {
            printf("Case #%d: No worries\n", i);
        } else {
            printf("Case #%d: Wash dishes\n", i);
        }
    }
}