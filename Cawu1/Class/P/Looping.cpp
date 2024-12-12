#include <stdio.h>

int main () {
    int n=10;
    int counter=0;
    
    while (counter<=n-1 || counter <n) {
        printf("%d. Hello World\n", counter+1);
        counter++;
    }

    puts(" ");

    counter=0; //direset karena sudah memenuhi syarat sebelumnya
    do {
        printf("%d. Hello World\n", counter+1);     //at least melakukan tugas 1 kali terlebih dahulu
        counter++;
    } while (counter<n);

    puts(" ");

    for (int co = 1; co <= n; co++)
    {
        printf("%d. Hello World\n", co);
    }
    
}