#include <stdio.h>

int main () {
    int t, thaiTtea, temp;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int counter = 0;
        scanf("%d %d", &thaiTtea, &temp);
        counter = thaiTtea;
        for (; thaiTtea >= temp;) {
            thaiTtea = (thaiTtea-temp)+1;
            counter++;
        }
        printf("Case #%d: %d\n", i, counter);
    }
    
}