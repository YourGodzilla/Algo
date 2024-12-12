#include <stdio.h>

int main () {
    int t,n;

    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        scanf("%d", &n);

        printf("Case #%d: ", tc);

        for (int i = 0; i < n; i++) {
            printf("%c", i + 'a');
        }
        
        printf("\n");
    }
    
}