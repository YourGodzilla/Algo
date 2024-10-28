#include <stdio.h>
#include <string.h>

int main () {
    int t;
    
    scanf("%d", &t);
    getchar();
    for (int tc = 1; tc <= t; tc++) {
        char n[1005];
        scanf("%s", n);
        getchar();
        int l = strlen(n);
        printf("Case #%d : ", tc);
        for (int i = l-1; i >= 0; i--) {
            printf("%c", n[i]);
        }
        printf("\n");
    }
    return 0;
}