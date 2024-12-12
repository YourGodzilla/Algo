#include <stdio.h>

int main () {
    int t;
    double a,b;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%lf %lf", &a, &b);
        printf("%.2lf\n", (a*b)/360);
    }
    
}