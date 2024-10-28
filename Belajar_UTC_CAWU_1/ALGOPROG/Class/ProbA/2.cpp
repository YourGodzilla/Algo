#include <stdio.h>

int main () {
    int jumLagu, batas, durasi[600], max = 0, jumDurasi = 0;

    scanf("%d %d", &jumLagu, &batas);
    for (int i = 0; i < jumLagu; i++) {
        scanf("%d", &durasi[i]);
        jumDurasi += durasi[i];
    }
        
    max = (jumDurasi / jumLagu) * batas/100;

    int flag = 0;
    for (int i = 0; i < jumLagu; i++) {
        if (durasi[i] > max) {
            printf("%d", i + 1);
            flag = 1;
            if (i != jumLagu - 1) {
                printf(" ");
            }
        }
    }
    
    if (flag == 0) {
        printf("%d", 0);
    }

    printf("\n");
}