#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++) {
        char S[105] = {0};
        scanf("%s", S);
        getchar();
        int l = strlen(S);
        int flag = 0;
        int count = 0;

        for (int i = 0; i < l; i++) {
            if (S[i] == '.') {
                count++;
                if (i+1 < l && S[i+1] == '.') {
                    flag = 1;
                    break;
                }
            }
        }

        if (S[0] == '.' || S[l-1] == '.') {
            flag = 1;
        }

        if (count == 5 && flag == 0) {
            printf("Case #%d: YES\n", tc);
        } else {
            printf("Case #%d: NO\n", tc);
        }
    }

    return 0;
}