#include <stdio.h>

int main() {
    int T;  
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, M, K;  
        scanf("%d %d %d", &N, &M, &K);
        
        int max = K;  

        for (int i = 0; i < N; i++) {
            int porsi;
            scanf("%d", &porsi);

            if (porsi <= M && porsi > max) {
                max = porsi;
            }
        }

        printf("Case #%d: %d\n", t, max);
    }

    return 0;
}