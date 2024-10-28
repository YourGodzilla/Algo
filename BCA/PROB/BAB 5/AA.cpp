#include <stdio.h>

int main () {
    int n;
    int a[10001];
    int counter = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < n; j++) {
        for(int k = j + 1; k < n; k++) {
            if (a[j] == a[k]) {
                counter++;
                break;
            }
        }
    }
    int hasil  = n - counter;

    printf("%d\n", hasil);
}
    