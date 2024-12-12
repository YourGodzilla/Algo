#include <stdio.h>

int main () {
    char a[21],b[21],c[21],d[21],e[21];

    scanf("%s", a);
    getchar();
    scanf("%s", b);
    getchar();
    scanf("%s", c);
    getchar();
    scanf("%s", d);
    getchar();
    scanf("%s", e);
    getchar();

    printf("%10s|%s\n",a,a);
    printf("%10s|%s\n",b,b);
    printf("%10s|%s\n",c,c);
    printf("%10s|%s\n",d,d);
    printf("%10s|%s\n",e,e);
}