#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    int t;
    char s[15];
    for (int i = 0; i < n; i++) {
        scanf("%s %d", &s[i], &t[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%s %d\n", s[i], t[i]);
    }
        
    return 0;
}       