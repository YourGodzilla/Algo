#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int abs (int a) {
    if (a < 0) return -a;
    return a;
}

typedef struct {
    char nama[256];
    int skor;
} Player;

int binarySearch(Player arr[], int n, char *x) {
    int left  = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;

        int compare = strcmp(arr[mid].nama, x);

        if (compare == 0) return mid; 
        else if (compare < 0) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int t;
    scanf("%d", &t);

    Player players[t];

    for (int i = 0; i < t; i++) {
        scanf("%s %d", players[i].nama, &players[i].skor);
    }

    int m;
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        char p1[256], p2[256];
        scanf("%s %s", p1, p2);

        int index1 = binarySearch(players, t, p1);
        int index2 = binarySearch(players, t, p2);

        int skorGap = players[index1].skor - players[index2].skor;
        if (skorGap < 0) skorGap = -skorGap;

        int boardGap = index1 - index2;
        if (boardGap < 0) boardGap = -boardGap;

        printf("%d %d\n", skorGap, boardGap);
    }

    return 0;
}