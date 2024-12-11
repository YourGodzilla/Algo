#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("testdata.in", "r");

    int t;
    fscanf(file, "%d", &t); fgetc(file);
    for (int tc = 0; tc < t; tc++) {
        char x[105] = "";
        fscanf(file, "%[^\n]", x); fgetc(file);

        int l = strlen(x);

        char flag[105] = {0};
        int n;
        fscanf(file, "%d", &n); fgetc(file);

        for (int i = 0; i < n; i++) {
            char a, b;
            fscanf(file, "%c %c", &a, &b); fgetc(file);

            for (int j = 0; j < l; j++) {
                if (x[j] == a && flag[a - 'A'] == 0) x[j] = b;
            }
            flag[a - 'A'] = 1;
        }

        char flag2[105] = {0};
        for (int i = 0; i < l; i++) {
            flag2[x[i] - 'A']++;
        }

        for (int i = 0; i <= 25; i++) {
            if (flag2[i] == 0) continue;
            printf("%c %d\n", i + 'A', flag2[i]);
        }
    }
    return 0;
}