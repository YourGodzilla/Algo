#include <stdio.h>

int main () {
    int t;

    scanf("%d", &t);

    for (int tc = 1; tc <= t; tc++) {
        int n;
        scanf("%d", &n); getchar();

        char s[n+1];
        scanf("%[^\n]", s); getchar();

        printf("Case #%d: ", tc);
        for (int i = 0; i < n; i++) {
            if (s[i]>='a' && s[i]<='z') {
                putchar(s[i]);
            }
        }
        printf("\n");
    }
    
}