#include <stdio.h>
#include <string.h>

int isLetter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int countWords(char *line) {
    int counter = 0;
    int inWord = 0;

    for (int i = 0; line[i] != '\0'; i++) {
        if (isLetter(line[i])) {
            if (!inWord) {
                counter++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    return counter;
}

int main() {
    FILE *file = fopen("testdata.in", "r");

    int X;
    fscanf(file, "%d\n", &X);

    char line[1005];
    int page = 0;
    int wordCounter = 0;
    int error = 0;

    while (fgets(line, 1005, file)) {
        if (line[0] == '#') { // "#" terbaca sebagai error atau berhenti, lanjut ke kalimat selanjutnya atau reset
            page++;
            if (wordCounter < X) {
                printf("page %d: %d word(s)\n", page, wordCounter);
                error = 1;
            }
            wordCounter = 0; // Reset jumlah kata untuk halaman berikutnya
        } else {
            wordCounter += countWords(line);
        }
    }

    fclose(file);

    if(!error) printf("The essay is correct\n");

    return 0;
}