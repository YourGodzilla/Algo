#include <stdio.h>

main() {
    int nilai;
    printf("PROGRAM PENGELOMPOKAN NILAI \n");
    printf("--------------------------- \n");
    printf("Masukkan nilai (0 - 100) = ");
    scanf("%i", &nilai);

    if (nilai>=90) {
        printf("Nilai = A");
    } else if (nilai>=80) {
        printf("NIlai = B");
    } else if (nilai>=70) {
        printf("Nilai = C");
    } else if (nilai>=60) {
        printf("Nilai = D");
    } else {
        printf("Nilai = E");
    }
}