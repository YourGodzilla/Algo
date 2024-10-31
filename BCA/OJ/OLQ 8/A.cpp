#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("testdata.in", "r");

    int n;
    fscanf(file, "%d\n", &n);
    
    long long stick[50];
    for (int i = 0; i < n; i++) {
        fscanf(file, "%lld\n", &stick[i]);
    }
    
    for (int i = 0; i < n - 1; i++) { // mengurutkan dari yang terkecil hingga yang terbesar
        for (int j = i + 1; j < n; j++) {
            if (stick[i] > stick[j]) {
                long long temp = stick[i]; // melakukan swap
                stick[i] = stick[j];
                stick[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < n - 2; i++) { // memriksa jika ada tiga panjang stick yang bisa membentuk segitiga
        if (stick[i] + stick[i + 1] > stick[i + 2]) { // memeriksa apakah panjang tongkat pertama dan kedua lebih besar dari panjang tongkat ketiga
            printf("YES\n"); // Jika jumlah dari dua panjang tersebut lebih besar dari panjang yang ketiga, maka dua tongkat tersebut dapat “memeluk” tongkat ketiga, yang berarti mereka dapat membentuk segitiga.
            return 0;
        }
    }
    
    printf("NO\n");
    return 0;
}