#include <stdio.h>

int main(){
    int T=3, X, P;
    scanf("%*d");
    for(int i = 0; i < 3; i++){
        scanf("%d %d", &X, &P);
        printf("%d\n", (X >> P) & 1);
    }
}