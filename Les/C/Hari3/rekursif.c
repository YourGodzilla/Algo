#include <stdio.h>

int sum(int num);
int sum(int num) {
    if(num!=0)
        return num*sum(num-1);
    else
        return num;
}

main() {
    int a,b;
    printf("Masukkan Num : ");
    scanf("%i",&a);
    b=sum(a);
    printf("%i",b);
}