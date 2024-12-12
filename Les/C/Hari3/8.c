#include <stdio.h>

void jumlah(int x,int y);

void jumlah(int x,int y) {
    int hasil;
    hasil=x+y;
    printf("%i+%i=%i\n",x,y,hasil);
}

main() {
    jumlah(1,4);
    jumlah(8,2);
    jumlah(3,2);
}