#include <stdio.h>

int floodfill(char board[105][105], int n, int x, int y) {
    if (x < 0 || x >= n || y < 0 || y >= n || board[x][y] != '.') {
        return 0;
    }
    board[x][y] = 'x';
    int count = 1;
    count += floodfill(board, n, x+1, y);
    count += floodfill(board, n, x-1, y);
    count += floodfill(board, n, x, y+1);
    count += floodfill(board, n, x, y-1);
    return count;
}

int main() {
    char arr[105][105];
    int n, m, x, y;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = '.';
        }
    }
    
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &x, &y);
        arr[x][y] = '*';
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == '*') continue;
            int count = 0;
            for (int row = i-1; row <= i+1; row++) {
                for (int col = j-1; col < j+1; col++) {
                    if (0 <= row && row < n && 0 <= col && col < n && arr[row][col] == '*') {
                        count++;
                    }
                }
            }
            if (count > 0) {
                arr[i][j] = count + '1';
            }
        }
    }

    for (int i = 0; i < n; i++) { // printf board
        printf("%s\n", arr[i]);
    }

    int max = 0;
    for (int i = 0; i < n; i++) { // hitung max
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == '.') {
                int v = floodfill(arr, n, i, j);
                if ( v > max) max = v;
            }
        }
    }

    printf("%d\n", max);
    
    return 0;
}