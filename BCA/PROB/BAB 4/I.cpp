#include <stdio.h>

int main (){
    int n,jumlah,tot=0;
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&jumlah);
        tot+=jumlah;
    }
    printf("%d\n",tot);
}