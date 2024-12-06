#include <stdio.h>

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
    
    return 0;
}