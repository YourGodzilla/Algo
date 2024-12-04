#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++){
        char s[1005];
        scanf("%s", s);
        int l = strlen(s);
        int flag = 1;           

        for (int i = 0, j = l-1; i <= j; i++, j-- ) {
            if (tolower(s[i]) != tolower(s[j])) {
                flag = 0;
                break;
            }
        }
        if (flag == 0) {
            printf("Case #%d: no\n", tc);
        } else {
            printf("Case #%d: yes\n", tc);
        }
        
    }
        
}