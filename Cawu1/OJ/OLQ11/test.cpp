#include <stdio.h>
#include <string.h>

typedef struct {
    int rating;
    char name[101];
    char label[10];
} Player;

void getLabel(int rating, char* label) {
    if (rating <= 200) {
        strcpy(label, "Ascend");
    } else if (rating <= 350) {
        strcpy(label, "Mortal");
    } else {
        strcpy(label, "Radial");
    }
}

void swap(Player *a, Player *b) {
    Player temp = *a;
    *a = *b;
    *b = temp;
}

int partition(Player players[], int low, int high) {
    int pivot = players[high].rating;
    int i = low - 1;
    
    for (int j = low; j < high; j++) {
        if (players[j].rating > pivot || (players[j].rating == pivot && strcmp(players[j].name, players[high].name) < 0)) {
            i++;
            swap(&players[i], &players[j]);
        }
    }
    swap(&players[i + 1], &players[high]);
    return i + 1;
}

void quicksort(Player players[], int low, int high) {
    if (low < high) {
        int pi = partition(players, low, high);
        quicksort(players, low, pi - 1);
        quicksort(players, pi + 1, high);
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
        
        getLabel(players[i].rating, players[i].label);
    }

    int averageRating = totalRating / P;
    quicksort(players, 0, P - 1);

    for (int i = 0; i < P; i++) {
        int ratingDifference = players[i].rating - averageRating;
        printf("%s %d %d %s\n", players[i].label, players[i].rating, ratingDifference, players[i].name);
    }

    return 0;
}