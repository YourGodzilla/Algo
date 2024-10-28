#include <stdio.h>

int lebihbesar (int a, int b) {
    if (a>b)
        return a;
    else 
        return b;
}

int main() {
    int x,y,nilai;
    printf("Input nilai X: ");
    scanf("%d",&x);
    printf("Input nilai Y: ");
    scanf("%d",&y);
    nilai = lebihbesar(x,y);
    printf("Nilai terbesar: %d\n",nilai);
}