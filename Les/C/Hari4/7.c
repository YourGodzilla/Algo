#include <stdio.h>

main() {
    int score=50;
    int hp=100;
    int *ptr_hp=&hp;

    printf("Nama Variabel \t Alamat \t Konten\n");
    printf("Score \t\t %x \t %d \n",&score,score);
    printf("hp \t\t %x \t %d\n",&hp,hp);
    printf("ptr_hp \t\t %x \t %x \n",&ptr_hp,ptr_hp);
    printf("*ptr_hp \t %x \t %d \n", &ptr_hp,*ptr_hp);

    *ptr_hp = 95;

    printf("hp \t\t %x \t %d \n",&hp,hp);
    printf("*ptr_hp \t %x \t %d\n",&ptr_hp,*ptr_hp);

}