#include <stdio.h>

int main () {
    int ban, pintu, kaca;

    scanf("%d %d %d", &ban, &pintu, &kaca);

    int mobil = ban / 4;
    if (mobil > pintu / 2) {
        mobil = pintu / 2;
    }
    if (mobil > kaca) {
        mobil = kaca;
    }

    int kurangBan = 0;
    int kurangPintu = 0;
    int kurangKaca = 0;

    kurangBan = (mobil * 4 < ban) ? 0 : 4 - (ban - mobil * 4);
    kurangPintu = (mobil * 2 < pintu) ? 0 : 2 - (pintu - mobil * 2);
    kurangKaca = (mobil < kaca) ? 0 : 1 - (kaca - mobil);

    printf("%d %d %d %d", mobil, kurangBan, kurangPintu, kurangKaca);
}