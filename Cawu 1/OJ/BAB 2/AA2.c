#include <stdio.h>

int main () {
    int A,B,C,D,sum, T=3;
    scanf("%*d");
    scanf("%lf %lf %lf %lf", &A,&B,&C,&D);
    sum = 2*A + 4*B/2 + 4*C/3 + 2*D/4;
    printf("%.2lf\n", sum);
    scanf("%lf %lf %lf %lf", &A,&B,&C,&D);
    sum = 2*A + 4*B/2 + 4*C/3 + 2*D/4;
    printf("%.2lf\n", sum);
    scanf("%lf %lf %lf %lf", &A,&B,&C,&D);
    sum = 2*A + 4*B/2 + 4*C/3 + 2*D/4;
    printf("%.2lf\n", sum);
}