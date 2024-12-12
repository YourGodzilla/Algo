#include <stdio.h>

int main () {
    FILE *file = fopen("testdata.in", "r");

    int n;
    fscanf(file, "%d\n", &n);
    
    char ground[10001];
    fscanf(file, "%[^\n]\n", ground);
    
    int max = 0, current = 0;

    for (int i = 0; i < n; i++) {
        if (ground[i] == '1') { // memerika jika ada karakter 1 maka current++
            current++;
        } else {
            if (current > max) {
                max = current; // jika bukan 1 maka memeriksa apakah jumlah current lebih besar dari max
            }
            current = 0; // jika iya, memperbarui nilai current menjadi 0
        }
    }
    
    if (current > max) {
        max = current; // mengecek apakah urutan terakhir dari 1 itu adalah yang terpanjang, jika iya maka max = current
    }
    
    printf("%d\n", max);
    return 0;
}