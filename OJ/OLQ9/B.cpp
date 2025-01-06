#include <stdio.h>
#include <string.h>

void bubblesort(char nama[][100], int n, int naik) {
    char temp[100];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (naik == 1) {
                if (strcmp(nama[j], nama[j + 1]) > 0) {
                    strcpy(temp, nama[j]);
                    strcpy(nama[j], nama[j + 1]);
                    strcpy(nama[j + 1], temp);
                }
            }
            else {
                if (strcmp(nama[j], nama[j + 1]) < 0) {
                    strcpy(temp, nama[j]);
                    strcpy(nama[j], nama[j + 1]);
                    strcpy(nama[j + 1], temp);
                }
            }
        }
    }
}

int main() {
    int n, x;
    scanf("%d", &n);

    char nama[n][100];

    for (int i = 0; i < n; i++) {
        scanf("%s", nama[i]);
    }

    scanf("%d", &x);

    int naik = (x == 0);

    bubblesort(nama, n, naik);

    for (int i = 0; i < n; i++) {
        printf("%s\n", nama[i]);
    }

    return 0;
}
