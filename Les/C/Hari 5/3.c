#include <stdio.h>

struct Mahasiswa {
    char *name;
    char *address;
    int age;
};

int main () {
    struct Mahasiswa mhs1;

    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;

    struct Mahasiswa mhs2 = {
        .name = "Bambang",
        .address = "Surabaya",
        .age = 23
    };

    printf("## Mahasiswa 1 ##\n");
    printf("Nama : %s\n", mhs1.name);
    printf("Alamat : %s\n", mhs1.address);
    printf("Umur : %d\n", mhs1.age);

    printf("## Mahasiswa 2 ##\n");
    printf("Nama : %s\n", mhs2.name);
    printf("Alamat : %s\n", mhs2.address);
    printf("Umur : %d\n", mhs2.age);

    return 0;
}