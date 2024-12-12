#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        int n, m, p[100005];
        scanf("%d %d", &n ,&m);
        for (int i = 0; i < m; i++) { // loop player
            scanf("%d", &p[i]);
        }
        int counter = 0;
        for (int i = 0; i <= n; i++) { // loop area
            int flag = 0;
            for (int j = 0; j < m; j++) { // loop platyer
                if (p[j] == 1) { // sudah player yang pilih area ke i
                    flag = 1;
                    break;
                }
            }
            if (flag == 1) {
                counter++; // hitung yang dapat hadiah
            }
        }
        printf("Case #%d: %d\n", tc+1, m-counter);
    }
    

    return 0;
}