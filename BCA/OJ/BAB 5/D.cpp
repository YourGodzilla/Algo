#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    int taman[101][101];

    for (int i = 1; i <= X; i++) {
        for (int j = 1; j <= Y; j++){
            scanf("%d", &taman[i][j]);
            getchar();
        }
    }

    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        taman[a][b] = c;
    }

    for (int i = 1; i <= X; i++) {
        for (int j = 1; j <= Y; j++){
            printf("%d", taman[i][j]);
            if (j < Y) printf(" ");
        }
    printf("\n");
    }

    return 0;
}