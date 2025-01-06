#include <stdio.h>

void pulau(int board[][1005], int x1, int y1, int x2, int y2) {
    if (x1 < x2 || y1 < y2) return;

    board[x1][y1] = 1;

    pulau(board, x1+1, y1, x2, y2);
    pulau(board, x1, y1+1, x2, y2);
}

void mapping(int board[][1005], int x, int y) {
    if (board[x][y] == 0) return;

    board[x][y] = 0;

    mapping(board, x+1, y);
    mapping(board, x-1, y);
    mapping(board, x, y+1);
    mapping(board, x, y-1);
}

int main() {
    FILE *file = fopen("testcase.in", "r");

    int s, n, d;
    fscanf(file, "%d\n", &s);
    int board[1005][1005] = {0};
    fscanf(file, "%d\n", &n);

    int countPulau = 0;
    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        fscanf(file, "%d %d %d %d\n", &x1, &y1, &x2, &y2);
        if (board[x1][y2] == 0) {
            pulau(board, x1, y1, x2, y2);
            countPulau++;
        }
    }

    fscanf(file, "%d\n", &d);

    int count = 0;
    for (int i = 0; i < d; i++) {
        int x, y;
        fscanf(file, "%d %d\n", &x, &y);
        if (board[x][y] == 1) {
            mapping(board, x, y);
            count++;
        }
    }

    printf("%d\n", n - count);

    return 0;
}