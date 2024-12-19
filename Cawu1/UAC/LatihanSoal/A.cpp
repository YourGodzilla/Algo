#include <stdio.h>
#include <string.h>

// mengecek harga ukuran
int calcHarga(int totMl) {
    if (totMl <= 354) return 53000;
    else if (totMl <= 473) return 57000;
    else if (totMl <= 591) return 60000;
    else if (totMl <= 700) return 70000;
    else return 70000;
}

int main() {
    FILE *file = fopen("testcase.in", "r");

    // berapa kali mesin kopi digunakan
    int n;
    fscanf(file, "%d\n", &n);

    char nama[100][35];
    int ml[100] = {0};
    int countNama = 0;
    for (int i = 0; i < n; i++) {
        // input nama pelanggan dan berapa banyak mililiter
        char tempNama[35];
        int tempMl;
        fscanf(file, "%[^#]#%d\n", tempNama, &tempMl);

        // mengecek apakah pelanggan sudah ada atau belum
        int found = -1;
        for (int j = 0; j < countNama; j++) {
            if (strcmp(nama[j], tempNama) == 0) {
                found = j;
                break;
            }
        }

        if (found == -1) {
            // jika belum ada maka ditambahkan ke dafta baru
            strcpy(nama[countNama], tempNama);
            ml[countNama] = tempMl;
            countNama++;
        } else {
            // jika sudah ada maka mililiter akan ditambahkan
            ml[found] += tempMl;
        }
    }

    // input pelanggan yang ingin membayar
    char pembayar[35];
    fscanf(file, "%[^\n]\n", pembayar);

    // menghitung total harga dari semua orang
    for (int i = 0; i < countNama; i++) {
        int harga = calcHarga(ml[i]);
        printf("%s - %d\n", nama[i], harga);
    }

    // barapa banyak mililiter pembayar
    for (int i = 0; i < countNama; i++) {
        if (strcmp(nama[i], pembayar) == 0) {
            printf("%s - %d\n", nama[i], ml[i]);
            break;
        }
    }
    
    return 0;
}