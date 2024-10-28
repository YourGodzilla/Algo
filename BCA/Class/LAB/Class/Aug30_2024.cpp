#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printMenu();
void menu1();
void menu2();
void menu3();

int productCount = 0;

char id[100][17];
char productName[100][255];
char productCategory[100][50];
int productPrice[100];
int isSpicy[100];

int nextInt();

int main() {
    int choice = -1;
    do {
        system("clear");
        printMenu();
        
        do {
            printf(">> ");
            scanf("%d", &choice);
            getchar();
            if (choice < 1 || choice > 4) {
                puts("Input must between 1 to 4!");
            }
        } while (choice < 1 || choice > 4);
        

        switch (choice) {
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

void printMenu() {
    printf("Product Management System\n");
    printf("==================================\n");
    printf("1. Insert New Product\n");
    printf("2. View Product\n");
    printf("3. Update Product\n");
    printf("4. Exit\n");
}

void menu1(){
    printf("Insert Product ID : ");
    scanf("%[^\n]", id[productCount]); getchar();

    do
    {
        printf("Insert Product Name : ");
        scanf("%[^\n]", productName[productCount]); getchar();
        if (strlen(productName[productCount]) < 5 || strlen(productName[productCount]) > 15) {
            printf("Product length must be between 5 to 15 character!");
        }
    } while (strlen(productName[productCount]) < 5 || strlen(productName[productCount]) > 15);

    printf("Insert Product Price : ");
    scanf("%d", &productPrice[productCount]); getchar();

    printf("Insert Product Category : ");
    scanf("%[^\n]", productCategory[productCount]); getchar();

    printf("Is Product Spicy : ");
    scanf("%d]", &isSpicy[productCount]); getchar();

    productCount++;
}

void menu2(){
    for (int i = 0; i < productCount; i++) {
        printf("Product No. %d\n", i+1);
        printf("Product ID : %s\n", id[i]);
        printf("Product Name : %s\n", productName[i]);
        printf("Product Price : %d\n",  productPrice[i]);
        printf("Product Category : %s\n", productCategory[i]);
        printf("Is Product Spicy? : %d\n", isSpicy[i]);
        printf("==================================\n");
    }
    
    printf("\nPress [Enter] to Continue...\n");
    getchar();
}

void menu3() {
    menu2();

    printf("Input product Number to delete: ");
    int input = nextInt();
    int index = input - 1;

    for (int i = index; i < productCount-1; i++) {
        strcpy(id[i],id[i+1]);
        strcpy(productName[i],productName[i+1]);
        strcpy(productCategory[i],productCategory[i+1]);
        productPrice[i] = productPrice[i+1];
        isSpicy[i] = isSpicy[i+1];
    }
    
    productCount--;
}

int nextInt(){
    int inp;
    scanf("%d", &inp);
    getchar();
    return inp;
}