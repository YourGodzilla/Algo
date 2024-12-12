#include <stdio.h>

void bagi(int x,int y);
void bagi(int x,int y) {
    float hasil;
    hasil =(float)x /(float)y;
    printf("%i / %i = %.2f",x,y,hasil);
}

main() {
    bagi(8,3);
}