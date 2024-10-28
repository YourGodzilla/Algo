#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(NULL));//untuk merandom
    
    int coin = rand() % 6 + 10;
    printf("%d", coin);

    return 0;
}