#include <stdio.h>
#include <string.h>

int main() {
    char binary[1000001];
    scanf("%s", binary);

    int len = strlen(binary);
    int actions = 0; 

    while (len > 1) {
        if (binary[len - 1] == '0') {
            len--;
        } else {
            int carry = 1;
            for (int i = len - 1; i >= 0 && carry; i--) {
                if (binary[i] == '0') {
                    binary[i] = '1';
                    carry = 0;
                } else {
                    binary[i] = '0';
                }
            }
            if (carry) {
                len++;
                for (int i = len - 1; i > 0; i--) {
                    binary[i] = binary[i - 1];
                }
                binary[0] = '1';
            }
        }
        actions++;
    }

    printf("%d\n", actions);
    return 0;
}