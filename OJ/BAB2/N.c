#include <stdio.h>

int main () {
    double A,B;
    scanf("%lf %lf", &A, &B);
    double persen = (A - B) * 100 / A;
    printf("%.2lf%%\n", persen);
}