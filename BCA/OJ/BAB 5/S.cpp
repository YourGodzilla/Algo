#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++) {
        int A, B;
        scanf("%d %d", &A, &B);

        int res = 0;
        int place = 1;
        while (A > 0 || B > 0) {
            // ambil digit terakhir dari A dan B
            int digitA = A % 10;
            int digitB = B % 10;

            // tambahkan digit terakhir dari A dan B
            int sum = (digitA + digitB) % 10;
            
            // tambahkan jumlah hasil dan dikalikan dengan letak
            res += sum * place;
            // lanjut ke selanjutnya
            place *= 10;

            // geser digit selanjutnya dari A dan B
            A /= 10;
            B /= 10;
        }

        printf("Case #%d: %d\n", tc, res);
    }
    return 0;
}