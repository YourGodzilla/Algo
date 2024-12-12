#include <stdio.h>

// 10 -> 1010

int main () {
    int num;
    scanf("%d", &num);
    int binary[100], l = 0;
    while (num > 0) {
        // printf("%d", num % 2);
        binary[l] = num % 2;
        l++;
        num /= 2;
    }
    for (int i = l-1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    
    printf("\n");

    return 0;
}