#include <stdio.h>

main () {
    int n=0;
    float jumlah=0,bil,rata;
    char lagi;

    printf("Apakah anda mau memasukan data [Y/T] : ");
    scanf("%s", &lagi);

    while ((lagi=='Y')||(lagi=='y')) {
        printf("Masukkan bilangan : ");
        scanf("%f",&bil);
        jumlah=jumlah+bil;
        n=n+1;
        printf("Apakah anda akan memasukan data lagi [Y/T] : ");
        scanf("%s",&lagi);
        printf("\n");
    }
    rata=jumlah/n;
    printf("\n");
    printf("Banyaknya biangan : %i \n",n);
    printf("Rata-rata bilangan : %.2f",rata);
}