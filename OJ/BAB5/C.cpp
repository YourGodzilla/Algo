#include <stdio.h>

int main(){
    int N, Q[1005];
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &Q[i]);
    }

    int C, B, A;
    scanf("%d", &C);
    for(int i = 0; i < C; i++){

        scanf("%d %d", &A, &B);
        Q[A - 1] = B;

        printf("Case #%d:", i+1);
        for(int o = 0; o < N; o++){
        printf(" %d", Q[o]);
        }
        printf("\n");
    }
    return 0;
}