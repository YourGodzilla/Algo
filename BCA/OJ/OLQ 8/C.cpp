#include <stdio.h>

#define MOD 1000000007

int main() {
    char line[101];
    int empty_count = 0;

    FILE *file = fopen("testdata.in", "r");

    while (fgets(line, sizeof(line), stdin)) {
        for (int i = 0; line[i]; i++) {
            if (line[i] == ';' && (i == 0 || line[i-1] == ';')) {
                empty_count++;
            }
        }
    }

    long long possibilities = 1;
    for (int i = 0; i < empty_count; i++) {
        possibilities = (possibilities * 101) % MOD;
    }

    printf("%lld\n", possibilities);
    return 0;
}