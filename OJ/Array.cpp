#include <stdio.h>
#include <string.h>

int main(){
    int testCase;
    scanf("%d", &testCase);
    for(int tc = 0 < tc < testCase; tc++){
        char S[1005];
        scanf("%s", S);
        int l = strlen(S);

        int M;
        scanf("%d", &M);
        for(int i = 0; i < M; i++){
            char a[1005], b[1005];
            scanf("%c %c", &a[i], &b[i]);

            for(int j = 0; j < l; j++){
                if (S[j] == a[i]){
                    S[j] = b[i];
                }
            }
        printf("%s", S);
        }


    }

    return 0;
}