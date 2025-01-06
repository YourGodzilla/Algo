#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);

    int a[n+5], b[n+5];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        // printf("%d ", a[i]);
    }
    // printf("\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
        // printf("%d ", b[i]);
    }
    // printf("\n");
    
    int temp[n+5];
    for (int i = 0; i < n; i++)
    {
        temp[a[i]] = b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(i == n - 1) printf("%d\n", temp[i]);
        else printf("%d ", temp[i]);
    }
    
    return 0;
}