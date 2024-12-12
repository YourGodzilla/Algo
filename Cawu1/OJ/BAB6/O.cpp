#include <stdio.h>

int func(char base[100][100], int N, int M, int x, int y) {
    if (x < 0 || x >= N || y < 0 || y >= M || base[x][y] == '#') {
        return 0;
    }

    int count = (base[x][y] == '*') ? 1 : 0;

    base[x][y] = '#';

    count += func(base, N, M, x + 1, y);
    count += func(base, N, M, x - 1, y);
    count += func(base, N, M, x, y + 1);
    count += func(base, N, M, x, y - 1);

    return count;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, M;
        scanf("%d %d", &N, &M);

        char base[100][100];
        int mulaiX, mulaiY;

        for (int i = 0; i < N; i++) {
            scanf("%s", base[i]);
            for (int j = 0; j < M; j++) {
                if (base[i][j] == 'P') {
                    mulaiX = i;
                    mulaiY = j;
                }
            }
        }

        base[mulaiX][mulaiY] = '.';

        int hasil = func(base, N, M, mulaiX, mulaiY);

        printf("Case #%d: %d\n", t, hasil);
    }

    return 0;
}