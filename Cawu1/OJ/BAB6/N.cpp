#include <stdio.h>

int flag = 0;
void catur(int count, int N, char X1, int Y1, char X2, int Y2) {
    if (flag) return;
    if ('H' < X1 || X1 < 'A' || 8 < Y1 || Y1 < 1) return;
    if (X1 == X2 && Y1 == Y2) {
        flag = 1;
        return;
    }
    if (count == N) {
        return;
        }

    // semua pergerakan kuda
    catur(count+1, N, X1+2, Y1+1, X2, Y2);
    catur(count+1, N, X1+1, Y1+2, X2, Y2);

    catur(count+1, N, X1+2, Y1-1, X2, Y2);
    catur(count+1, N, X1+1, Y1-2, X2, Y2);

    catur(count+1, N, X1-1, Y1-2, X2, Y2);
    catur(count+1, N, X1-2, Y1-1, X2, Y2);

    catur(count+1, N, X1-2, Y1+1, X2, Y2);
    catur(count+1, N, X1-1, Y1+2, X2, Y2);
    }

int main() {
    int T;
    scanf("%d", &T); getchar();
    for (int tc = 1; tc <= T; tc++) {
        int N;
        scanf("%d", &N); getchar();
        N *= 2; // 2 kali karena ada 2 kuda
        
        char X1, X2;
        int Y1, Y2;
        scanf("%c%d %c%d", &X1, &Y1, &X2, &Y2); getchar();// mengubah X menjadi angka
        catur(0, N, X2, Y2, X1, Y1);
        
        printf("Case #%d: ", tc);
        if (flag) puts("YES");
        else puts("NO");
        flag = 0;
    }
    return 0;
}