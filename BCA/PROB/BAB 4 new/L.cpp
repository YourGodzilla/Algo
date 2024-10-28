#include <stdio.h>

int main () {
    int t,temp,honey;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int counter=0;
        scanf("%d %d", &honey, &temp);
        counter=honey;
        for (; honey >= temp;) {
            honey = (honey-temp)+1;
            counter++;
        }
        
        printf("Case #%d: %d\n", i, counter);
    }
}