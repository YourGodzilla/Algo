#include <stdio.h>

int main () {
    int T, K, N, M;
    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        scanf("%d %d %d", &K, &N, &M);
        if (N + M < K) {
            printf("Case #%d: no\n", i);
        } else {
            printf("Case #%d: yes\n", i);
        }
    }
    return 0;
}