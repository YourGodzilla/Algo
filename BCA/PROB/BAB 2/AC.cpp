#include <stdio.h>

int main () {
    long long int N, M = 1;

    scanf("%lld", &N);

    for (int i = 0; i < N;i++){
         M *= 2;
    }

    printf("%lld\n", M-1);

    return 0; 
}