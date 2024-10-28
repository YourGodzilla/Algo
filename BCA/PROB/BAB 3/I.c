#include <stdio.h>

int main () {
    int t;
    long long int a,b,c,tot;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%lld %lld %lld", &a, &b, &c);
        printf("Case #%d: ", i);
        tot = b*a/100;
        if (tot>=c)
            printf("%lld\n", c);
        else 
            printf("%lld\n", tot);
    }
    
}