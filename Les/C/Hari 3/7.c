#include <stdio.h>

int jumlah(int x,int y);

main() {
    int a,b,c;
    printf("A= ");
    scanf("%d",&a);
    printf("B= ");
    scanf("%d",&b);
    c=jumlah(a,b);
    printf("Jumlah kedua bilangan tersebut = %d\n",c);
}

int jumlah(int x,int y) {
    int hasil;
    hasil=x+y;
    return(hasil);
}