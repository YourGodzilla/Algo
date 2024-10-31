#include <stdio.h>
#include <string.h>

char func(int l, char *n) {
    for (int i = l-1; i >= 0; i--) {
        printf("%c", n[i]);
    }
    printf("\n");
}

int main () {
    int t;
    char n[1001];

    scanf("%d", &t);
    getchar();


    for (int tc = 1; tc <= t; tc++) {
        scanf("%[^\n]", n); getchar();
        
        printf("Case #%d: ", tc);  
        int l = strlen(n);
        func(l, n);
    }
    
}