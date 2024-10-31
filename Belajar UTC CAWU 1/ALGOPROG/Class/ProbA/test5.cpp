#include <stdio.h>

int main() {
    int A, B, C;
    
    // Input jumlah ban, pintu, dan kaca
    scanf("%d %d %d", &A, &B, &C);

    // Hitung jumlah mobil maksimal yang bisa dibuat
    int mobil = A / 4;
    if (mobil > B / 2) {mobil = B / 2;}
    if (mobil > C) {mobil = C;}

    // Hitung spare part yang harus dibeli
    int kekurangan_ban = (mobil * 4 < A) ? 0 : 4 - (A - mobil * 4);
    int kekurangan_pintu = (mobil * 2 < B) ? 0 : 2 - (B - mobil * 2);
    int kekurangan_kaca = (mobil < C) ? 0 : 1 - (C - mobil);

    // Output hasil
    printf("%d %d %d %d\n", mobil, kekurangan_ban, kekurangan_pintu, kekurangan_kaca);

    return 0;
}