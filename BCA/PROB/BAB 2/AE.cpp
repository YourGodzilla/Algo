#include <stdio.h>

int main () {
    double n;
    scanf("%lf", &n);
    double hasil = n * (100 + (n - 1) * 25);
    printf("%.0lf\n", hasil);
}