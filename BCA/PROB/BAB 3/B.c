#include <stdio.h>

int main () {
    int T;
    int K,N,M;
    scanf("%d", &T);

    
    for (int i = 1; i <= T; i++)
    {
        scanf("%d %d %d", &K,&N,&M);
        printf("Case #%d: ", i);
        if (K<=N+M)
            printf("yes\n");
        else
            printf("no\n");
    }
}