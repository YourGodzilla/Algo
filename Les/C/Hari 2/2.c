#include <stdio.h>
#include <string.h>

int main () {
    char nama[50],golongan;
    int jumlah,sisa,upah;

    printf("Masukkan Nama Karyawan : ");
    scanf("%s", &nama);
    printf("Masukkan Golongan [A/B/C/D] : ");
    scanf("%c", &golongan);
    golongan = getchar();
    printf("Masukkan Jumlah Jam Kerja : ");
    scanf("%d", &jumlah);

    switch (golongan) {
        case 'A' : {
            if (jumlah>48) {
                sisa = jumlah % 48;
                upah = (48*5000) + (sisa*4000);
            }
            else {
                upah = jumlah*5000;
            }
            break;
        }
        case 'B' : {
            if (jumlah>48) {
                sisa = jumlah % 48;
                upah = (48*7000) + (sisa*4000);
            }
            else {
                upah = jumlah*7000;
            }
            break;
        }
        case 'C' : {
            if (jumlah>48) {
                sisa = jumlah % 48;
                upah = (48*8000) + (sisa*4000);
            }
            else {
                upah = jumlah*8000;
            }
            break;
        }
        case 'D' : {
            if (jumlah>48) {
                sisa = jumlah % 48;
                upah = (48*10000) + (sisa*4000);
            }
            else {
                upah = jumlah*10000;
            }
            break;
        }
    }

    printf("Jumlah Upah : %d", upah);
    getchar();
}