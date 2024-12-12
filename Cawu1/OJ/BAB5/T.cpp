#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    char A[] = {'A', 'B', 'C', 'D', '\0', '\0'};
    char E[] = {'E', 'F', 'G', 'H', '\0', '\0'};
    char I[] = {'I', 'J', 'K', 'L', 'M', 'N'};
    char O[] = {'O', 'P', 'Q', 'R', 'S', 'T'};
    char U[] = {'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    for (int tc = 1; tc <= T; tc++) {
        char message[1005];
        scanf("%s", message); getchar();

        int l = strlen(message);

        int key[l+5] = {0};
        printf("Case #%d:\n", tc);
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < 6; j++) {
                if (message[i] == A[j]) {
                    printf("A");
                    key[i] = j;
                }
                else if (message[i] == E[j]) {
                    printf("E");
                    key[i] = j;
                }
                else if (message[i] == I[j]) {
                    printf("I");
                    key[i] = j;
                }
                else if (message[i] == O[j]) {
                    printf("O");
                    key[i] = j;
                }
                else if (message[i] == U[j]) {
                    printf("U");
                    key[i] = j;
                }
            }
            if (i == l - 1) printf("\n");
        }

        for (int i = 0; i < l; i++) {
            printf("%d", key[i]);
            if (i == l - 1) printf("\n");
        }
    }
    return 0;
}