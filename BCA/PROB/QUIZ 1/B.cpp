#include <stdio.h>

int main () {
    int n;

    scanf("%d", &n);

    int arr[n];
    int tot = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = n; i > 0; i--) {
        tot += arr[i];
    }
    printf("%d", tot);
    
}