#include <stdio.h>
#include <string.h>

int main () {
    char word[105]; // "binus0\"
    int vec[10];
    int matrix[3][3];

    scanf("%s", word);
    int l = strlen(word);
    int n = 0;
    for (int i = 0;word[i] != '\0'; i++) {
        n++;
    }
    printf("len: %d %d\n", l, n);

    // // tidak boleh digunakan
    // for (int i = 0; i < strlen(word); i++) {
    //     printf("%c", word[i]);
    // }
    // // pembenaran
    // for (int i = 0; i < l; i++) {
    //     printf("%c", word[i]);
    // }

    for (int i = 0; i < l; i++) {
        // printf("%c", word[i]);
        // if(word[i] == ' ') continue;
        if ('a' <= word[i] && word[i] <= 'z') { // validation only lower case
            word[i] -= 32; // lowercase to uppercase
        }
        switch (word[i]) {
            case 'I': word[i]= '!'; break;
            case 'A': word[i]= '4'; break;
            case 'S': word[i]= '$'; break;
            case 'E': word[i]= '3'; break;
            case 'G': word[i]= '9'; break;
            case 'O': word[i]= '0'; break;
        }
    }
    printf("s\n"), word;

    return 0;
}   