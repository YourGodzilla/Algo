#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        char word[105];
        scanf("%s", word);
        int l = strlen(word);
        int flag = 1;

        for (int i = 0, j = l-1; i <= j; i++, j--) {
            if (tolower(word[i]) != tolower(word[j])) {
                flag = 0;
                break;
            }       
        }
        if (flag == 0) {
            printf("Bukan ");
        }
        printf("Palindrome\n");
    }

    return 0;
}
