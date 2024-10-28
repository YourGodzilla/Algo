#include <stdio.h>

void printMenu();
void menu1();
void menu2();
void menu3();

//untuk mempermudah
//untuk menyimpan banyak data type menjadi 1
//STRUCT TIDAK BOLEH DIPAKE !!!!

// struct Product {
//     char id[17];
//     char productName[255];
//     int productPrice;
//     char productCategory[50];
//     int isSpicy;
// };

int productCount = 0;
//GLOBAL ARRAY <- array yang bersifat global
char id[100][17];
char productName[100][255];
int productPrice[100];
char productCategory[100][50];
int isSpicy[100];

int main () {
    int choice = -1;
    do {
        printMenu();
        printf(">> ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            menu1();
            break;
        case 2:
            menu2();
            break;
        case 3:
            menu3();
            break;
        case 4:
            return 0;
            break;
        default:
            break;
        }
    } while (1);

    return 0;
}

void printMenu(){
    printf("1. Insert New Product\n");
    printf("2. View Product\n");
    printf("3. Update Product\n");
    printf("4. Exit\n");
}

void menu1 () {
    //Insert
    printf("Insert Product ID : ");
    scanf("%[^\n]", id[productCount]); getchar();
    printf("Insert Product Name : ");
    scanf("%[^\n]", productName[productCount]); getchar();
    printf("Insert Product Price : ");
    scanf("%d", &productPrice[productCount]); getchar();
    printf("Insert Product Category : ");
    scanf("%[^\n]", productCategory[productCount]); getchar();
    printf("Is product spicy [0/1] : ");
    scanf("%d", &isSpicy[productCount]); getchar();

    productCount++;
}

void menu2 () {
    for (int i = 0; i < productCount; i++) {
        printf("No. %d\n", i+1);
        printf("Product ID : %s\n", id[i]);
        printf("Product Name : %s\n", productName[i]);
        printf("Product Price : %d\n", productPrice[i]);
        printf("Product Category : %s\n", productCategory[i]);
        printf("Is Product Spicy? : %d\n", isSpicy[i]);
        printf("========================================\n");
    }
}

void menu3 () {

}