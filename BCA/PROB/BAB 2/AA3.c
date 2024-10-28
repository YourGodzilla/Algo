#include <stdio.h>

int main () {
    double Ph, M, Pu;

    scanf("%lf %lf %lf", &Ph, &M, &Pu);

    printf("%.2lf\n", ((Ph*0.2)+(M*0.3)+(Pu*0.5)))/3;
}   