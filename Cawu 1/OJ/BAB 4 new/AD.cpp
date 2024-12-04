#include <stdio.h>

int main () {
    int n;
    int items[1005] = {0};
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int tipe;
        scanf("%d", &tipe);
        items[tipe]++;
    }
    
    int max = 0;
    for (int i = 0; i <= 1000; i++) {
        if (items[i] > max) {
            max = items[i];
        }
    }
    
    printf("%d\n", max);
}