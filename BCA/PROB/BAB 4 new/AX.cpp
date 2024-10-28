#include <stdio.h>

int main () {
    long long int N,Ai,tot=0;

    scanf("%lld", &N);

    for (int i = 1; i <= N; i++)
    {
        scanf("%lld", &Ai);
        // N++;
        // tot += Ai;

        if (Ai>=0)
        {
            tot+=Ai;
        } else {
            tot+=Ai*0;
        }
        
    }
    printf("%lld\n", tot);
}   