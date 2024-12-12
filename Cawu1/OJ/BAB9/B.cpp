#include <stdio.h>
#include <string.h>

int main () {
    int t;
    int k;
    char s[1001];
    char hasil[1001];
    FILE *file = fopen("testdata.in", "r");

    fscanf(file, "%d\n", &t);

    for (int tc = 1; tc <= t; tc++) {
        fscanf(file, "%d\n%[^\n]\n", &k, s);
        int l = strlen(s);
        printf("Case #%d: ", tc);
        for (int i = 0; i < l; i++) {
            switch(s[i]) {
                case '0' :
                    s[i] = 'O';
                    break;
                case '1' :
                    s[i] = 'I';
                    break;
                case '3' :
                    s[i] = 'E';
                    break;
                case '4' :
                    s[i] = 'A';
                    break;
                case '5' :
                    s[i] = 'S';
                    break;
                case '6' :
                    s[i] = 'G';
                    break;
                case '7' :
                    s[i] = 'T';
                    break;
                case '8' :
                    s[i] = 'B';
                    break;
            }
            if (k > 26) k = k % 26;

            if (s[i] == ' ') {
                printf(" ");
            } else if ((s[i] - k) < 'A') {
                s[i] += 26 - k;
                printf("%c", s[i]);
            } else {
                s[i] -= k;
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
}