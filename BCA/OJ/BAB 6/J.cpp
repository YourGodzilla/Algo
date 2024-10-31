#include <stdio.h>

int counter = 0;

void func(long long int n) {
    if (n == 1) {
        return;
    } else if (n % 2 == 0) {
        counter++;
        func(n / 2);
    } else if (n % 2 != 0) {
        counter++;
        func(n * 3 + 1);
    }
}

int main () {
    int t;
    long long int n;
    
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        scanf("%lldd", &n);
        func(n);
        if (counter % 2 == 0) {
            printf("Case #%d: Lili\n", tc);
        } else {
            printf("Case #%d: Jojo\n", tc);
        }
        counter = 0;
    }
    
}