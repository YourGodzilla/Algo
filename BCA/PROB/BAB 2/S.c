#include <stdio.h>
#include <math.h>

int main () {
    double L,B,H;
    scanf("%lf %lf %lf", &L,&B,&H);
    double tot = (B * H) + (B * L * 3);
    printf("%.3lf\n", tot);
}