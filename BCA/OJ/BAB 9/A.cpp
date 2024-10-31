#include <stdio.h>
#include <string.h>

int main () {
    int t,n;
    char s1[1001][41];
    char s2[1001][41];
    char s[41];
    FILE *file = fopen("testdata.in", "r");

    fscanf(file, "%d\n", &n);
    for (int i = 0; i < n; i++) {
        fscanf(file, "%[^#]#%[^\n]\n", s1[i], s2[i]);
    }

    fscanf(file, "%d\n", &t);
    for (int tc = 1; tc <= t; tc++) {
        fscanf(file, "%[^\n]\n", s);
        int flag =0,index=0;
        for (int i = 0; i < n; i++) {
            if (strcmp(s, s1[i]) == 0) {
                flag  = 1;
                index = i;
                break;
            }
        }
        if(flag){
            printf("Case #%d: %s\n", tc, s2[index]);
        } else{
            printf("Case #%d: N/A\n", tc);
        }
    }
}