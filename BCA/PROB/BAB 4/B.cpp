#include <stdio.h>

int main () {
    long long int n, pos=0;
    int k;

    scanf("%lld",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &k);
        pos+=k;
        if (pos==12)
            pos=28;
        else if (pos==35)
            pos=7;
        else if (pos==30)
            pos=10;
        else if (pos>=40)
            pos-=40;
    }

    printf("%lld\n", pos);
}