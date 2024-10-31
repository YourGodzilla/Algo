#include <stdio.h>
#include <string.h>

int main () {
    int n = 0;
    char r[1001][11];
    char m[1001][25];

    FILE *file;
    file = fopen("testdata.in", "r");

    fscanf(file, "%d", &n); fgetc(file);

    for (int i = 0; i < n; i++) {
        fscanf(file, "%s %s", r[i], m[i]); fgetc(file);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            long long int temp1 = 0, temp2 = 0; 
            sscanf(r[j], "%lld", &temp1);
            sscanf(r[j+1], "%lld", &temp2);

            if (temp1 > temp2) {
                char rTemp[11], mTemp[25];
                strcpy(rTemp, r[j]);
                strcpy(mTemp, m[j]);
                strcpy(r[j], r[j+1]);
                strcpy(m[j], m[j+1]);
                strcpy(r[j+1], rTemp);
                strcpy(m[j+1], mTemp);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s %s\n", r[i], m[i]);
    }
}