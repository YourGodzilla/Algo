#include <stdio.h>

void func(int n, char a, char b){
    if (n == 0) printf("%c", a);
    else if (n == 1) printf("%c", b);
    else {
        func(n - 1, a, b);
        func(n - 2, a, b);
    }
}

int main () {
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        int n;
        char A, B;
        scanf("%d %c %c", &n, &A, &B);
        printf("Case #%d: ", tc);
        func(n,A,B);
        printf("\n");
    }
}