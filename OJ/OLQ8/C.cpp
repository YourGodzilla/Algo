#include <stdio.h>
#include <string.h>

#define MOD 1000000007

int main() {
    FILE *file = fopen("testdata.in", "r");

    char line[101];
    long long totKosong = 0;

    while (fgets(line, sizeof(line), file)) {
        int l = strlen(line);
        
        for (int i = 0; i < l; i++) {
            if (line[i] == ';') {
                if (i == 0 || line[i - 1] == ';') {
                    totKosong++;
                }
            }
        }

        if (line[l - 1] == ';') {
            totKosong++;
        }
    }

    long long totKesempatan = 1;
    for (long long i = 0; i < totKosong; i++) {
        totKesempatan = (totKesempatan * 101) % MOD;
    }

    printf("%lld\n", totKesempatan);
    return 0;
}