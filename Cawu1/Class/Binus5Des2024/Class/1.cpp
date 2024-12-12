#include <stdio.h>

void floodfill(char map[1005][1005], int s, int x, int y) {
    if (x < 1 || x > s || y < 1 || y > s || map[x][y] == '#') {
        return;
    }
    map[x][y] = '#';
    floodfill(map, s, x+1, y);
    floodfill(map, s, x-1, y);
    floodfill(map, s, x, y+1);
    floodfill(map, s, x, y-1);
}

int main() {
    int s, n, x1, y1, x2, y2;
    scanf("%d %d", &s, &n);

    char map[1005][1005];

    for (int i = 1; i <= s; i++) {
        for (int j = 1; j <= s; j++) {
            map[i][j] = '#';
        }
    }

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        for (int j = x1; j <= x2; j++) {
            for (int k = y1; k <= y2; k++) {
                map[j][k] = '.';
            }
        }
    }

    for (int i = 1; i <= s; i++) {
        printf("%s\n", map[i]);
    }

    int count = 0;
    for (int i = 1; i <= s; i++) {
        for (int j = 1; j <= s; j++) {
            if (map[i][j] == '.') {
                floodfill(map, s, i ,j);
                count++;
            }
        }
    }

    printf("%d\n", count);
    
    return 0;
}