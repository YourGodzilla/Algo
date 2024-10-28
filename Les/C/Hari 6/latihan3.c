#include <stdio.h>

int main() {
    int in;
    printf("## Program Bahasa C Cek Tahun Kabisat ##\n");
    printf("========================================\n\n");

    printf("Input tahun: ");
    scanf("%d",&in);

    if(in%400==0){
        printf("%d adalah tahun kabisat",in);
    } else if (in%100==0){
        printf("%d bukan tahun kabisat",in);
    } else if (in%4==0){
        printf("%d adalah tahun kabisat",in);
    } else {
        printf("%d bukan tahun kabisat",in);
    }
}