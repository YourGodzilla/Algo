#include <stdio.h>

int main () {
    long long int n=1,count;
    scanf("%lld", &count);
    for (int i = 0; i < count; i++)
    {
        n = n * 2;
    }
    printf("%lld\n", n - 1);
}