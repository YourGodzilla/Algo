#include <stdio.h>

int main () {
    FILE *file = fopen("testdata.in", "r");

    int n;
    fscanf(file, "%d\n", &n);
    
    char ground[10001];
    fscanf(file, "%[^\n]\n", ground);
    
    int max = 0, current = 0;

    for (int i = 0; i < n; i++) {
        if (ground[i] == '1') {
            current++;
        } else {
            if (current > max) {
                max = current;
            }
            current = 0;
        }
    }
    
    if (current > max) {
        max = current; 
    }
    
    printf("%d\n", max);
    return 0;
}