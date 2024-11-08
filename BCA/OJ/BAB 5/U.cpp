#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        int n;
        scanf("%d", &n);

        int skor[n+5];
        for (int i = 0; i < n; i++) {
            scanf("%d", &skor[i]);
        }

        int bibi, lili;
        scanf("%d %d", &bibi, &lili);

        printf("Case #%d: ", tc);
        if (skor[bibi - 1] > skor[lili - 1]) printf("Bibi\n");
        else if (skor[bibi - 1] < skor[lili - 1]) printf("Lili\n");
        else printf("Draw\n");
    }
    
    return 0;
}