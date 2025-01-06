#include <stdio.h>

int main () {
    int T, tot=1;

    scanf ("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        tot *= i;
    }
    printf("%d\n", tot);
}