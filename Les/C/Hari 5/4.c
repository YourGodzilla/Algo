#include <stdio.h>

struct Transaksi {
    char* idTransaksi;
    struct Product product;
};

struct Product {
    char *code;
    char *name;
    int qty;
};

int main () {
    struct Product prd1;

    prd1.code = "12345";
    prd1.name = "Spakbor";
    prd1.qty = 5;

    struct Product prd2 = {
        .code = "54321",
        .name = "Lampu",
        .qty = 3
    };
    
    printf("## Product 1 ##\n");
    printf("Code : %s\n",prd1.code);
    printf("Name : %s\n",prd1.name);
    printf("Qty : %d\n",prd1.qty);

    printf("## Product 2 ##\n");
    printf("Code : %s\n",prd2.code);
    printf("Name : %s\n",prd2.name);
    printf("Qty : %d\n",prd2.qty);

    return 0;
}