#include <stdio.h>

int main () {
    long long int a,b,tot=0;
    
    scanf("%lld %lld", &a, &b);
    long long int temp = a;

    for (int i = a; i <= b; i++)
    {
        tot = tot + temp;
        temp += 1;

    }
    printf("%lld\n", tot);
}