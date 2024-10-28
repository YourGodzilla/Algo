#include <stdio.h>

int main () {
    int powerBibi;
    int powerNaga;
    int n,m;

    scanf("%d %d", &n, &m);

    int maxPowerBibi = 0;
    int maxPowerNaga = 0;

    for (int i = 1; i <= n; i++) {
        scanf("%d", &powerBibi);
        if (powerBibi > maxPowerBibi){
            maxPowerBibi = powerBibi;
        }
    }
    
    for (int j = 1; j <= m; j++) {
        scanf("%d", &powerNaga);
        if (powerNaga > maxPowerNaga) {
            maxPowerNaga = powerNaga;
        }
    }
    
    if(maxPowerBibi > maxPowerNaga) {
        printf("The dark secret was true\n");
    } else {
        printf("Secret debunked\n");
    }
}