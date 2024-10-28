#include <stdio.h>
#include <string.h>

int main () {
    char s[100];
    scanf("%[^\n]", s);
    
    int l = strlen(s);
    printf("%d\n", l);

    for (int i = 0; i < l; i++) {
        if (s[i] >= 'a') {
            s[i] = s[i] - 'a' + 'A';
        }
        else if (s[i] >= 'A') {
            s[i] = s[i] - 'A' + 'a';
        } 
    }

    printf("%s", s);
    printf("\n");
}