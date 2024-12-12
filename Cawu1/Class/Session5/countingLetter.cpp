#include <stdio.h>
#include <string.h>

int main () {
    char words[1005];
    int count[30];

    scanf("%[^\n]", words);
    int l = strlen(words);
    for (int i = 0; i < 26; i++) {
        count[i] = 0;
    }
    for (int i = 0; i < l; i++) {
        if ('a' <= words[i] && words[i] <= 'z')
        count[words[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", i + 'a', count[i]);
        }
    } 

    return 0;
}