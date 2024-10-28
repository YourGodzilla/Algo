#include <stdio.h>

int main() {
    int in;
    printf("Input satu angka bulat: ");
    scanf("%d",&in);
    printf("\n");

    if(in%in==0 && in%2!=0){
        printf("%d adalah angka prima",in);
    } else {
        printf("%d bukan angka prima, karena bisa dibagi 2",in);
    }
}