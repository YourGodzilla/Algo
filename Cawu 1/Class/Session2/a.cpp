#include <stdio.h>

// return_type function_name {body}
void hello () {
    printf("Hello World\n");
    return;
}

int addition(int angka1, int angka2) {
    printf("Hasil Penjumlahan : %d\n", angka1 + angka2);
    return angka1+angka2;
}

char huruf() {
    return 'A';
}

int main () { //entry point (function)
    // hello();
    // addition();
    // huruf();
    int a = 10;
    int b = 5;
    addition(a,b);
    
    return 0;// mengembalikan sebuah value atau keluar dari function
}