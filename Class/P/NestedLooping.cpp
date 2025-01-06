// #include <stdio.h>

// int main () {
//     int n=5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (j<=n-i) 
//                 printf(" ");
//             else
//                 printf("*");
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>

int main () {
    int n=5;
    for (int i = 1; i <= n; i++)
    {
        if(i==1 || i==n) {
            for (int j = 1; j <= n; j++)
            {
                printf("#");
            }
            printf("\n");
        } else {
            for (int k = 1; k <= n; k++) {
                if (k==1 || k==n) {
                    printf("#");
                } else {
                    printf(" ");
                }
                
            }
            printf("\n");
        }
    }
}