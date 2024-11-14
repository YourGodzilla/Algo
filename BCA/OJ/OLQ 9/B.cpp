#include <stdio.h>
#include <string.h>

void bubble_sort(char words[][100], int n, int ascending) {
    char temp[100];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ascending == 1) {
                if (strcmp(words[j], words[j + 1]) > 0) {
                    strcpy(temp, words[j]);
                    strcpy(words[j], words[j + 1]);
                    strcpy(words[j + 1], temp);
                }
            }
            else {
                if (strcmp(words[j], words[j + 1]) < 0) {
                    strcpy(temp, words[j]);
                    strcpy(words[j], words[j + 1]);
                    strcpy(words[j + 1], temp);
                }
            }
        }
    }
}

int main() {
    int n, x;
    scanf("%d", &n);

    char words[n][100];

    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    scanf("%d", &x);

    int ascending = (x == 0);

    bubble_sort(words, n, ascending);

    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
