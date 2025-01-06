#include <stdio.h>

int N[100005];

int main () {
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        int n,m,a;
        scanf("%d %d", &n, &m);
        for (int i = 0; i < n; i++) { // membuat semua arena menjadi 0
            N[i] = 0;
        }
        for (int i = 0; i < m; i++){ // peserta memilih apa ditambah ke counter
            scanf("%d", &a);
            N[a]++;
        }
        int counter = 0;
        for (int i = 0; i < n; i++) { // menghitung arena
            if(N[i] > 0) {
                counter++;
            }
        }
        printf("Case #%d: %d\n", tc+1, m - counter);
    }
    

    return 0;
}