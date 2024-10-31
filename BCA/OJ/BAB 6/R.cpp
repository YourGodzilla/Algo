#include <stdio.h>

int floodFill(char rumah[100][100], int N, int M, int x, int y) {
    if (x < 0 || x >= N || y < 0 || y >= M || rumah[x][y] != '.') {
        return 0;
    }

    rumah[x][y] = '#';

    int count = 1;
    count += floodFill(rumah, N, M, x + 1, y); 
    count += floodFill(rumah, N, M, x - 1, y); 
    count += floodFill(rumah, N, M, x, y + 1); 
    count += floodFill(rumah, N, M, x, y - 1); 

    return count;
}

int main() {
    int T;
    scanf("%d", &T);  

    for (int t = 1; t <= T; t++) {
        int N, M;
        scanf("%d %d", &N, &M);  

        char rumah[100][100];
        int mulaiX, mulaiY;  

        for (int i = 0; i < N; i++) {
            scanf("%s", rumah[i]);  

            for (int j = 0; j < M; j++) {
                if (rumah[i][j] == 'S') {
                    mulaiX = i;
                    mulaiY = j;
                }
            }
        }

        int hasil = floodFill(rumah, N, M, mulaiX + 1, mulaiY) + floodFill(rumah, N, M, mulaiX - 1, mulaiY) + floodFill(rumah, N, M, mulaiX, mulaiY + 1) + floodFill(rumah, N, M, mulaiX, mulaiY - 1); 

        printf("Case #%d: %d\n", t, hasil);
    }

    return 0;
}