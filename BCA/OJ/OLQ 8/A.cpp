#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    
    long long stick[50];
    for (int i = 0; i < N; i++) {
        scanf("%lld", &stick[i]);
    }
    
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (stick[i] > stick[j]) {
                long long temp = stick[i];
                stick[i] = stick[j];
                stick[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < N - 2; i++) {
        if (stick[i] + stick[i + 1] > stick[i + 2]) {
            printf("YES\n");
            return 0;
        }
    }
    
    printf("NO\n");
    return 0;
}