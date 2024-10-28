/*Program pemilihan kode jurusan*/
#include <stdio.h>
#include <string.h>

int main () {
    char nama[15], ket[30], kode;
    printf("Masukkan nama mahasiswa: ");
    scanf("%s", nama);
    printf("Pilih kode jurusan [A/B/C/D] : ");
    scanf("%c", &kode);
    kode = getchar();
    switch (kode) {
    case 'A' : {
        strcpy(ket,"Jurusan Teknik Informatika");
        break;
    }
    case 'B' : {
        strcpy(ket,"Jurusan Manajamen Informatika");
        break;
    }
    case 'C' : {
        strcpy(ket,"Jurusan Sistem Informatika");
        break;
    }
    case 'D' : {
        strcpy(ket,"Jurusan Teknik Komputer");
        break;
    }
    }
    printf("\n \n");
    printf("Nama Mahasiswa : %s \n", nama);
    printf("Kode Jurusan : %c \n", kode);
    printf("Nama Jurusan : %s \n", ket);
    getchar();
}