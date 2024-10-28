#include <stdio.h>
#include <string.h>

void func(char *s) {
    int l = strlen(s);
    int flag = 0;
    for (int i = 0; i < l / 2; i++) {
        if (s[i] != s[l-i-1]) {
            flag = 1;
        }
    }
    if (flag == 1) {
        printf("no\n");
    } else {
        printf("yes\n");
    }
}

int main () {
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        char s[1001];
        scanf("%s", s);
        printf("Case #%d: ", tc);
        func(s);
    }
    return 0;
}