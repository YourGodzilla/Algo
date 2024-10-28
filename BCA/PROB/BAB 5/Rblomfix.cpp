#include <stdio.h>
#include <string.h>

int main () {
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        char s[105];
        scanf("%s", s);
        int l = strlen(s);
        int m;
        scanf("%d", &m); getchar();
        char a[1005], b[1005];
        for (int i = 0; i < m; i++) {
            scanf("%c %c", &a[i], &b[i]); getchar();
            for (int j = 0; j < l; j++) {
                if (s[j] == a[i]) {
                    s[j] = b[i];
                    // printf("%c", s[j]);
                }
            }
        }
        printf("Case #%d: %s\n", tc, s);
    }
    
    return 0;
}