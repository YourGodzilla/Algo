#include <stdio.h>

int move[10][3] = {
    {1, 2},
    {2, 1},
    {2, -1},
    {1, -2},
    {-1, -2},
    {-2, -1},
    {-2, 1},
    {-1, 2}
};

char path[100][5];
int nPath = 0;

int backtracking(int board[10][10], int n, int m, int x, int y, int step) {
    if (step == n * m) return 1;
    for (int i = 0; i < 8; i++) {
        int nextx = x + move[i][0];
        int nexty = y + move[i][1];
        
        if (0 <= nextx && nextx < n && 0 <= nexty & nexty < m && board[nextx][nexty] == -1) {
            board[nextx][nexty] = step;
            path[nPath][0] = nextx + 'A';
            path[nPath][1] = nexty + '1';
            path[nPath][2] = '\0';
            nPath++;
            if (backtracking(board, n, m, nextx, nexty, step+1)) {
                return 1;
            }
            board[nextx][nexty] = -1;
            nPath--;
        }
    }
    return 0;
}

int main() {
    int n, m;
    char pos[5];
    int board[10][10];

    scanf("%d %d %s", &n, &m, pos);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            board[i][j] = -1;
        }
    }

    int x = pos[0] - 'A', y = pos[1] - '1';
    board[x][y] = 0;
    path[nPath][0] = x + 'A';
    path[nPath][1] = y + '1';
    path[nPath][2] = '\0';
    nPath++;
    if (backtracking(board, n, m, x, y, 1)) {
        printf("Yes\n");
        printf("%s", path[0]);
        for (int i = 1; i < nPath; i++) {
            printf("-%s", path[i]);
        }
        printf("\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                printf("%2d ", board[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("No\n");
    }

    return 0;
}