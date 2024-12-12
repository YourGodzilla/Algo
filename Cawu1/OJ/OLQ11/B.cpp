#include <stdio.h>
#include <string.h>

typedef struct {
    int rating;
    char name[11];
} Player;

void swap(Player *a, Player *b) {
    Player temp = *a;
    *a = *b;
    *b = temp;
}

int partition(Player arr[], int low, int high) {
    int pivot = arr[high].rating;
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j].rating > pivot || (arr[j].rating == pivot && strcmp(arr[j].name, arr[high].name) < 0)) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(Player arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int P;
    scanf("%d", &P);

    Player players[P];
    int totalRating = 0;

    for (int i = 0; i < P; i++) {
        scanf("%d %s", &players[i].rating, players[i].name);
        totalRating += players[i].rating;
    }

    int avgRating = (totalRating) / P;

    quickSort(players, 0, P - 1);

    for (int i = 0; i < P; i++) {
        if (players[i].rating >= 351) {
            printf("Radial %d %d %s\n", players[i].rating, players[i].rating - avgRating, players[i].name);
        } else if (players[i].rating >= 201) {
            printf("Mortal %d %d %s\n", players[i].rating, players[i].rating - avgRating, players[i].name);
        } else {
            printf("Ascend %d %d %s\n", players[i].rating, players[i].rating - avgRating, players[i].name);
        }
    }

    return 0;
}