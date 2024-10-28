#include <stdio.h>
#include <string.h>
#include <ctype.h>

// awalnya saya mencoba tanpa mengecek alfanumerik tapi di beberapa test case salah jadi saya mengubah code menjadi terdapat pengecekan simobol atau alfanumerik

int main() {
    char s[1001];
    scanf("%[^\n]", s); // input string

    int left = 0, right = strlen(s) - 1; // kiri dimulai dari index 0, kanan dimulai dari index l - 1 \0 tidak termasuk

    while (left < right) { // looping akan berjalan selama kiri tidak melebihi kanan atau tidak bertemu ditengah
        if (!isalnum(s[left])) { // jika dari kiri bukan alfanumerik atau simbol left++ dan continue
            left++;
            continue;
        }
        if (!isalnum(s[right])) { // jika dari kanan bukan alfanumerik atau simbol right-- dan continue
            right--;
            continue;
        }

        if (tolower(s[left]) != tolower(s[right])) { // akan membandingkan karakter dikanan dan dikiri, jika ditemukan berbeda maka akan berhenti dan display "No"
            puts("No");
            return 0;
        }

        left++; // jika belum ditemukan berbeda maka akan terus berlanjut, left bertambah dan right akan berkurang
        right--;
    }

    puts("Yes"); // jika tidak ditemukan karakter yang berbeda maka akan display "Yes"
    return 0;
}