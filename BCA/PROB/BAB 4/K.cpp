#include <stdio.h>

int main () {
    int n,a,b,c,tot=0;
    float avg;

    scanf("%d",&n);
    scanf("%d %d %d",&a,&b,&c);

    int p;
    for (int i = 0; i < n; i++) {
        scanf("%d",&p);
        tot+=p;
    }

    avg = (float)(a+b+c+tot)/(n+3.0);
    //printf("%d %f\n",tot,avg);

    if (a < avg) {
        printf("Jojo tidak lolos\n");
    } else {
        printf("Jojo lolos\n");
    }

    if (b < avg) {
        printf("Lili tidak lolos\n");
    } else {
        printf("Lili lolos\n");
    }
        
    if (c < avg) {
        printf("Bibi tidak lolos\n");
    } else {
        printf("Bibi lolos\n");
    }
}