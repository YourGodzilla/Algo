#include <stdio.h>

int main () {
    int T, Ut, Ua;
    float rata;

    scanf("%d %d %d", &T, &Ut, &Ua);
    
    rata = (T + Ut + Ua) / 3;

    printf("%.2f\n", rata);
}