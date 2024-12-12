#include <stdio.h>
#include <string.h>

int main () {
    char word[1005];
    scanf("%[^\n]", word);
    int l = strlen(word);
    for (int i = 0; i < l; i++) {
        if (word[i] == ' ') {
            word[i+1] -= 32;
            continue;
        }
        printf("%c", word[i]);
    }
    printf("\n");

    return 0;
}