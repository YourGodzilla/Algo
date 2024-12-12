#include <stdio.h>
#include <string.h>

void search(char NIM[][15], char nama[][25], char temp[], int n) {
    for (int i = 0; i < n; i++) {
        if (strcmp(NIM[i], temp) == 0) {
            printf("%s\n", nama[i]);
            return;
        }
    }
    printf("N/A\n");
    return;
}

int main() {
    FILE *file = fopen("testdata.in", "r");
    
    int n;
    fscanf(file, "%d\n", &n);

    char NIM[105][15], nama[105][25];
    for (int i = 0; i < n; i++) {
        fscanf(file, "%s %[^\n]\n", NIM[i], nama[i]);
    }

    int t;
    fscanf(file, "%d\n", &t);

    for (int tc = 1; tc <= t; tc++) {
        char temp[15];
        fscanf(file, "%s\n", temp);

        printf("Case #%d: ", tc);
        search(NIM, nama, temp, n);
    }

    fclose(file);
    return 0;
}