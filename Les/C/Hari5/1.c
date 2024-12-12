#include <stdio.h>

enum hari {SENIN,SELASA,RABU,KAMIS,JUMAT,SABTU,MINGGU};

main(){
    enum hari sekarang;
    sekarang = RABU;
    printf("Sekarang hari ke-%d",sekarang+1);
}