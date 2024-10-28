#include <stdio.h>
#include <string.h>

int main() {
    int T; 
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, K; 
        char S[101]; 
        
        scanf("%d %d", &N, &K); 
        scanf("%s", S);

        K = K % 26; 


        for (int i = 0; i < N; i++) {
            int num = S[i] - 'a'; 
            num = (num + K) % 26; 
            S[i] = 'a' + num; 
        }

        printf("Case #%d: %s\n", t, S);
    }

    return 0;
}