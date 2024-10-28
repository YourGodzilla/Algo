  #include <stdio.h>

int main() {
    int totdet,jam,sisa,menit,detik;
    printf("Program Konversi Detik menjadi Jam Meni Detik \n");
    printf("--------------------------------------------- \n");
    printf("Masukan total detik = ");
    scanf("%i", &totdet);
    
    jam = totdet / 3600;
    sisa = totdet % 3600;
    menit = sisa / 60;
    detik = sisa % 60;

    printf("Jumlah jam = %i jam \n", jam);
    printf("Jumlah menit = %i menit \n", menit);
    printf("Jumlah detik = %i detik \n", detik);
}