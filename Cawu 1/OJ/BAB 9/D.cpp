#include <stdio.h>
#include <string.h>

int main () {
    FILE *file = fopen("testdata.in", "r");

    int t;
    fscanf(file, "%d\n", &t);
    for (int tc = 1; tc <= t; tc++) {
        char s[105];
        fscanf(file, "%[^\n]\n", s);
        int l = strlen(s);
        int stc;
        char s1[105];
    }
    return 0;
}