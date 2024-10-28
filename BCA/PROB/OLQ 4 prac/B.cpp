#include <stdio.h>

int main () {
    int t,hh,mm;
    char a1,a2;
    
    scanf("%d", &t);
    for(int i = 1;i <= t;i++) {
        scanf("%d:%d %c%c", &hh, &mm, &a1, &a2);
        if (a1=='a' && hh<12) {
            printf("Case #%d: %02d:%02d\n", i, hh, mm);
        } else if (a1=='a' && hh==12) {
            hh %= 12;
            printf("Case #%d: %02d:%02d\n", i, hh, mm);
        } else if (a1=='p' && hh!=12) {
            hh += 12;
            printf("Case #%d: %02d:%02d\n", i, hh, mm);
        } else if (a1=='p' && hh==12) {
            printf("Case #%d: %02d:%02d\n", i, hh, mm);
        } 
    }
}