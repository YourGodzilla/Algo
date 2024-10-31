#include <stdio.h>

int main () {
    int t,n;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        printf("Case #%d:\n",i);
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                if (k<=n-j)
                    printf(" ");
                else if ((j+k)%2==0)
                    printf("*");
                else
                    printf("#"); 
            }
            printf("\n");
        }
    }
}