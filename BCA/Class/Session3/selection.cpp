#include <stdio.h>
#define jt 1000000

int main () {
    long long int a;
    scanf("%lld", &a);
    // if (a % 2 == 0) {
    //     printf("Genap\n");
    // } else {
    //     printf("Ganjil\n");
    // }

    //A 85-100
    //B 75-84
    //C 65-74
    //D 50-64
    //E 0-49
    // if (a>=85) {
    //     printf("A\n");
    // } else if (75 <= a && a <= 84) {
    //     printf("B\n");
    // } else if (65 <= a && a <= 74) {
    //     printf("C\n");
    // } else if (50 <= a && a <= 64) {
    //     printf("D\n");
    // } else if (0 <= a && a <= 49) {
    //     printf("E\n");
    // }

    // if (a >= 85) {
    //     printf("A\n");
    // } else if (a >= 75) {
    //     printf("B\n");
    // } else if (a >= 65) {
    //     printf("B\n");
    // } else if (a >= 50) {
    //     printf("B\n");
    // } else {
    //     printf("E\n");
    // }
    
    // long long pajak = 0;
    // if (0 <= a && a <= 60 * jt) {
    //     pajak += a * 5 / 100;
    // } else {
    //     pajak += 60 * jt * 5 / 100;
    //     if (a <= 250 * jt) {
    //         pajak +=  (a - 60 * jt) * 15 / 100;
    //     } else {
    //         pajak += (250 - 60)  * jt * 15 / 100;
    //         if (a <= 500 * jt) {
    //             pajak +=  (a - 250 * jt) * 25 / 100;
    //         } else {
    //             pajak += (500 - 250) * jt * 25 / 100;
    //             if (a <= 5000ll * jt) {
    //                 pajak += (a - 500 * jt) * 30 / 100;
    //             } else {
    //                 pajak += (5000ll - 500) * jt * 30 / 100;
    //                 pajak += (a - 5000ll * jt) * 35 / 100;
    //             }
    //         }
    //     }
    // }
    // printf("Pajak : %lld\n", pajak);
    
    return 0;
}