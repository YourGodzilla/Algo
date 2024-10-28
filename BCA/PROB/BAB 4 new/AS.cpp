#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        char S[101], K[101];
        scanf("%s", S);
        scanf("%s", K);

        int score = 0;
        for (int i = 0; i < N; i++) {
            if (S[i] == K[i]) {
                score++;
            }
        }

        score = (score * 100) / N;
        printf("Case #%d: %d\n", t, score);
    }

    return 0;
}