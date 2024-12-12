#include <stdio.h>



int main () {
    struct Product {
        char *code;
        char *name;
        int qty;
    };
    
    struct Transaksi {
        char* id;
        struct Product product;
    };

    struct Transaksi transaksi1 = {
        .id = "135",
        .product = {
            .code = "12345",
            .name = "Lampu",
            .qty = 5
        }
    };

    printf("== Transaksi ==\n");
    printf("ID TRANSAKSI : %s\n",transaksi1.id);
    printf("-- Product --\n");
    printf("Code : %s\n",transaksi1.product.code);
    printf("Name : %s\n",transaksi1.product.name);
    printf("QTY : %d\n",transaksi1.product.qty);
    return 0;
}