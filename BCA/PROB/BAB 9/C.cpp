#include <stdio.h>

int main () {
    int a, b;
    int tot;

    FILE *file;
    file  = fopen("testdata.in", "r");

    fscanf(file, "%d %d\n", &a, &b);

    tot = a + b;

    printf("%d\n", tot);
}