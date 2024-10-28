#include <stdio.h>

int main () {
    int t,b;
    long long int a,c,tot;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%lld %d %lld", &a, &b, &c);
        printf("Case #%d: ", i);
        tot = a*b/100;
        if (tot>c)
            printf("%lld\n", c);
        else if (tot<c)
            printf("ll%d\n", tot);
    }
    
}