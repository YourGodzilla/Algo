#include <stdio.h>

int main () {
    int t=3;
    double tot,p,n;

    scanf("%*d");
    for (int i = 1; i <= t; i++)
    {
        scanf("%lf %lf", &p, &n);
        tot = (p * n)/100;
        printf("%.2lf\n", tot);
    }
    
}