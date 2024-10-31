#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int tc = 1; tc <= t;tc++) {
        int Q;
        char s[1001];
        scanf("%d %s", &Q, s);

        for (int q = 0; q < Q; ++q) {
            int a, b;
            scanf("%d %d", &a, &b);
            a--;
            b--; 

            while (a < b) {
                char temp = s[a];
                s[a] = s[b];
                s[b] = temp;
                a++;
                b--;
            }
        }

        printf("Case #%d: %s\n", tc, s);
    }

    return 0;
}