#include <stdio.h>
#include <string.h>

void searching(char source[][55], char target[][55], char change[], int T) {
    for (int i = 0; i < T; i++) {
        if (strcmp(source[i], change) == 0) {
            printf("%s", target[i]);
            return;
        }
    }
    printf("%s", change);
    return;
}

int main() {
    FILE *file = fopen("testdata.in", "r");

    int t;
    fscanf(file, "%d\n", &t);
    char source[105][55], target[105][55];

    for (int i = 0; i < t; i++) {
        fscanf(file, "%[^#]#%s\n", source[i], target[i]);
    }

    int tc;
    fscanf(file, "%d\n", &tc);

    for (int i = 1; i <= tc; i++) {
        char kata[105];
        fscanf(file, "%[^\n]\n", kata);
        int l = strlen(kata);

        char temp[105] = "";
        int counter = 0;

        printf("Case #%d:\n", i);

        for (int j = 0; j <= l; j++) {
            if (kata[j] == ' ' || kata[j] == '\0') {
                temp[counter] = '\0';
                searching(source, target, temp, t);

                if (kata[j] == ' ') printf(" ");
                else printf("\n");

                counter = 0;
            }
            else {
                temp[counter] = kata[j];
                counter++;
            }
        }
    }
    return 0;
}