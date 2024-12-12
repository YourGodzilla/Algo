#include <stdio.h>

int main () {
    double X;
    double Y;
    scanf("%lf %lf", &X, &Y);
    printf("%.2lf%%\n", X*100/Y);
}