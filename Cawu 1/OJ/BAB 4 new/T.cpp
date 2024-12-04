#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int jawab = 0;

    for (int i = 0; i < N; i++) {
        int tci, tsi, tvi;
        scanf("%d %d %d", &tci, &tsi, &tvi); 
        
        if (tci <= tvi && tvi < tsi) {
            jawab++;
        }
    }

    printf("%d\n", jawab);
    return 0;
}