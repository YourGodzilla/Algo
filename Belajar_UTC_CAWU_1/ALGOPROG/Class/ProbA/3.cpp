#include <stdio.h>

int main () {
    int apel,jeruk,nanas;

    scanf("%d %d %d", &apel, &jeruk, &nanas);

    apel *= 5000;
    jeruk *= 6000;
    nanas *= 7000;

    if (apel > jeruk && apel > nanas) {
        printf("%d Apel\n", apel);
    } else if (jeruk > apel && jeruk > nanas) {
        printf("%d Jeruk\n", jeruk);
    } else if (nanas > apel && nanas > jeruk) {
        printf("%d Nanas\n", nanas);
    } else {
        printf("Cancel\n");
    }
}