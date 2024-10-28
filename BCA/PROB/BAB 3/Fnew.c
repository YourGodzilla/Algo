#include <stdio.h>

int main () {
    long long int d,s,t;
    scanf("%lld %lld %lld", &d, &s, &t); 

    if (d>s && d>t && s>t) {
        printf("Daging\nSayur\nTelur\n");
    } else if (d>s && d>t && t>s) {
        printf("Daging\nTelur\nSayur\n");
    } else if (s>t && s>d && t>d) {
        printf("Sayur\nTelur\nDaging\n");
    } else if (s>t && s>d && t<d) {
        printf("Sayur\nDaging\nTelur\n");
    } else if (t>s && t>d && s>d) {
        printf("Telur\nSayur\nDaging");
    } else if (t>s && t>d && s<d) {
        printf("Telur\nDaging\nSayur");
    }
}