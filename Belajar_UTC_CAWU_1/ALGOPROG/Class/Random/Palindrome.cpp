#include <stdio.h>
#include <string.h>

int main () {
    char a[100];

    scanf("%[^\n]", a);

    int l = strlen(a);
    for (int i = 0; i < l / 2; i++) {
        if (a[i] != a[l-i-1]) {
            printf("%s bukan palindrome\n", a);
            break;
        } else {
            printf("%s palindrome\n", a);
            break;
        }
    }
    
}