#include <stdio.h>

int main () {
    int t, N[100005];
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        int n, m, a;
        scanf("%d %d", &n, &m);
        for (int i = 0; i < n; i++) { // loop area
            N[i] = 1;
        }
        int counter = 0;
        for (int i = 0; i < m; i++) { // loop player
            scanf("%d", &a);
            if (N[a-1] == 1) {
                N[a-1] == 0; // sudah diambil
            } else {
                counter++; // Counter kurang beruntung
            }
        }
        printf("Case #%d: %d\n", tc+1, counter);
    }
    
    return 0;
}