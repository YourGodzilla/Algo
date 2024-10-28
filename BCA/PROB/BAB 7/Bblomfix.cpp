#include <stdio.h>

int main () {
    int n;
    int r;
    char m[45];

    FILE *file = fopen("testdata.in", "r");

    fscanf(file, "%d\n", &n);
    for (int i = 0; i < n; i++) {
        fscanf(file, "%d %s\n", &r, m[i]);
    }

    for (int i = 0; i < n; i++) {
        
    }
    
    return 0;
}