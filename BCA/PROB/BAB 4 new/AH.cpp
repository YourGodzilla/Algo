#include <stdio.h>

int main () {
    int t;
    long long int n, counter=0;

    scanf("%d", &t);
    for(int i = 0;i <t;i++) {
        scanf("%lld", &n);
        counter=0;
        while (n>=10) {
            n = n / 10;
            counter++;
        }
        counter++;
        printf("Case #%d: %lld\n", i+1, counter);
    }
}