#include <stdio.h>

// function
void name () {

}

// recursive
// function yang memanggil diri sendiri

// faktorial
// 5! = 5 * 4 * 3 * 2 * 1
// n! = n * (n - 1)!

int faktorial (int n) {
    // base case
    if (n == 1) return 1;
    // recursive call
    return n * faktorial(n - 1);
}

// fibonacci
int counter = 0;
int fibonacci (int n) {
    printf("Counter : %d\n", counter++);
    // base case
    if (n <= 1) return n;
    // else if (n == 1) return 1;
    // recursive call
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// floodfill
char map[10][11] = {
    "##########",
    "#        #",
    "#        #",
    "#        #",
    "#        #",
    "#        #",
    "#        #",
    "#        #",
    "#        #",
    "##########"
};

char PLAYER = 'P';
int pX = 1;
int pY = 1;

void printMap () {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (j == pX && i == pY) printf("%c", PLAYER);
            else printf("%c", map[j][i]);
        }
        
        printf("%s\n", map[i]);
    }
}

void logic () {
    char input;
    while(1) {
        printMap();
        scanf("%c", &input); getchar();
        if (input == 'a' && map[pY][pX - 1] != '#') pX--;
        else if (input == 'd' && map[pY][pX - 1] != '#') pX++;
        else if (input == 'w' && map[pY][pX - 1] != '#') pY--;
        else if (input == 's' && map[pY][pX - 1] != '#') pY++;
    }
}

void floodfill(int x, int y) {
    // base case
    
    if(map[y][x] == '#' || map[y][x] == '.') return;
    else if (map[y][x] == ' ') {
        map[y][x] == '.';
        printMap();
    }

    floodfill(x, y - 1); // atas
    floodfill(x, y + 1); // bawah
    floodfill(x + 1, y); // kanan
    floodfill(x - 1, y); // kiri
}

int main () {
    // int n = 50;
    // printf("Result: %d", fibonacci(n));

    // printMap();
    logic();
}