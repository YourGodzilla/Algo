#include <stdio.h>

int main () {
    FILE *file = fopen("testdata.in", "r");

    int t;
    fscanf(file, "%d\n", &t);
    for (int tc = 1; tc <= t; tc++) {
        char s[105];
        fscanf(file, "%[^\n]\n", s);
        int stc;
    }
    return 0;
}