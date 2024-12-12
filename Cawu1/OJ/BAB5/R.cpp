#include <stdio.h>
#include <string.h>

int main () {
    int t;
    scanf("%d", &t);

    for (int tc = 1; tc <= t; tc++) {
        char s[1005];
        scanf("%s", s); getchar();

        int l = strlen(s);

        int m;
        scanf("%d", &m); getchar();

        for (int i = 0; i < m; i++) {
            char a, b;
            scanf("%c %c", &a, &b); getchar();
            for (int j = 0; j < l; j++) {
                if (s[j] == a) s[j] = b;
            }
        }
        printf("Case #%d: %s\n", tc, s);
    }
    return 0;
}