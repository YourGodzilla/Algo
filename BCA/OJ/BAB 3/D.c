#include <stdio.h>

int main () {
    int t,n,m;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d", &n, &m);
        printf("Case #%d: ", i);
        if ((n*m)%2 == 0)
            printf("Party time!\n");
        else 
            printf("Need more frogs\n");
    }
    
}