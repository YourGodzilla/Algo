#include <stdio.h>
#include <string.h>

int main () {
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        char s[1005];
        scanf("%s", s);
        int l = strlen(s);

        printf("Case %d: ", tc);
        for (int i = 0; i < l; i++) {
            if (i==l-1) {
                printf("%d", s[i]);
            } else {
                printf("%d-", s[i]);
            }
        }
        printf("\n");
    }
}