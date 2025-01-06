#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("testdata.in", "r");

    int t;
    fscanf(file, "%d\n", &t);

    for (int tc = 1; tc <= t; tc++) {
        int n;
        fscanf(file, "%d\n", &n);

        int arr[n+5] = {0};
        int sum = 0;
        for (int i = 0; i < n; i++) {
            fscanf(file, "%d\n", &arr[i]);
            sum += arr[i];
        }

        int luas = sum * 4;

        int bawahAtas = n * 4;
        int atas = 0;
        int kiri = 2 * arr[0];
        int kanan = 2 * arr[n - 1];

        if (n != 1) {
            for (int i = 0; i < n - 1; i++) {
                int temp = arr[i] - arr[i+1];
                if (temp < 0) temp *= -1;
                atas += temp * 2;
            }
        }
        atas += kiri + kanan;
        int keliling = bawahAtas + atas;

        printf("Case #%d: %d %d\n", tc, keliling, luas);
    }
    return 0;
}