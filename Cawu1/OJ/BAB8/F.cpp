#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int inp;
        scanf("%d", &inp);
        if (inp) {
            puts("not easy");
            return 0;
        }
    }

    puts("easy");
    return 0;
}