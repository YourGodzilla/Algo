#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char productID[100][17];
char productName[100][25];
char productCategory[100][10];
int productPrice[100];

int productCount = 0;

void printMenu();
void menu1();
void menu2();
void menu3();
void menu4();

int nextInt();
void enterToContinue();

int main () {
    int input = -1;
    do {
        printMenu();
        do {
            printf(">> ");
            input = nextInt();
            if (input > 5 || input < 1) {
                puts("Input must be between 1 to 5");  
            }
        } while (input > 5 || input < 1);

        switch (input) {
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
                menu4();
                break;
            case 5:
                return 0;
                break;
        }
    } while (1);
}

void printMenu() {
    puts("1. Create Product");
    puts("2. View Product");
    puts("3. Update Product");
    puts("4. Delete Product");
    puts("5. Exit");
}

void menu1() {
    char uniqueChar[] = "!@#$&";
    srand(time(NULL));
    for (int i = 0; i < 13; i++) {
        int decider = rand()%3;
        if (i<3) {
            productID[productCount][i] = rand() % 10 + '0';
        } else if (i<13) {
            if (decider % 3 == 0) {
                productID[productCount][i] = rand() % 26 + 'A';
            } else if (decider % 3 == 1) {
                productID[productCount][i] = rand() % 26 + 'a';
            } else if (decider % 3 == 2) {
                productID[productCount][i] = uniqueChar[rand() % 5];    
            }
        } else if (i==12) {
            productID[productCount][i] + '\0';
        }
    }
    
    
    do {
        printf("Input Product Name: ");
        scanf("%[^\n]", productName[productCount]); getchar();
        if (strlen(productName[productCount])<3 || strlen(productName[productCount])>25) {
            puts("Product must be between 3 to 25 character!");
        }
    } while (strlen(productName[productCount])<3 || strlen(productName[productCount])>25);

    do {
        printf("Input Product Category [Manis | Asam | Regular]: ");
        scanf("%s", productCategory[productCount]); getchar();
        if (strcmp(productCategory[productCount], "Manis") != 0 && strcmp(productCategory[productCount], "Asam") != 0 && strcmp(productCategory[productCount], "Regular") != 0) {
            printf("Product must be between [Manis, Asam, Regular");
        }
    } while (strcmp(productCategory[productCount], "Manis") != 0 && strcmp(productCategory[productCount], "Asam") != 0 && strcmp(productCategory[productCount], "Regular") != 0);

    do {
        printf("Input Product Price: ");
        productPrice[productCount] = nextInt();
        if (productPrice[productCount]<7000 || productPrice[productCount]>20000) {
            printf("Product must be between 7000 - 20000!");
        }
    } while (productPrice[productCount]<7000 || productPrice[productCount]>20000);

    printf("Product ID: PRO%s\n", productID[productCount]);
    printf("Product Name : %s\n", productName[productCount]);
    printf("Product Category : %s\n", productCategory[productCount]);
    printf("Product Price : %d\n", productPrice[productCount]);

    char confirm;
    do {
        printf("Are you sure, you want to add this product ? [y/n]\n");
        printf(">> ");
        scanf("%c", &confirm); getchar();
    } while (confirm != 'Y' && confirm != 'y' && confirm != 'N' && confirm != 'n');

    if (confirm == 'Y' || confirm == 'y') {
        productCount++;
        puts("Product has been successfully added!");
        enterToContinue();
        return;
    } else {
        puts("Product has been cancelled added!");
        enterToContinue();
        return;
    }
}

void menu2() {
    if (productCount == 0) {
        puts("There is no product!");
        enterToContinue();
        return;
    }

    for (int i = 0; i < productCount; i++) {
        printf("Product NO. : %d\n", i + 1);
        printf("Product ID: PRO%s\n", productID[i]);
        printf("Product Name : %s\n", productName[i]);
        printf("Product Category : %s\n", productCategory[i]);
        printf("Product Price : %d\n", productPrice[i]);
    }
    enterToContinue();
}

void menu3() {
    if (productCount == 0) {
        puts("There is no product, insert a new one!");
        enterToContinue();
        return;
    } else {
        menu2();
        char productNameTemp[17];
        char productCategoryTemp[10];
        int productPriceTemp;

        printf("Enter the product number to update : ");
        int input = nextInt();
        int index = input - 1;

        do {
        printf("Input Product Name: ");
        scanf("%[^\n]", productNameTemp); getchar();
        if (strlen(productNameTemp)<3 || strlen(productNameTemp)>25) {
            puts("Product must be between 3 to 25 character!");
        }
        } while (strlen(productNameTemp)<3 || strlen(productNameTemp)>25);

        do {
            printf("Input Product Category [Manis | Asam | Regular]: ");
            scanf("%s", productCategoryTemp); getchar();
            if (strcmp(productCategoryTemp, "Manis") != 0 && strcmp(productCategoryTemp, "Asam") != 0 && strcmp(productCategoryTemp, "Regular") != 0) {
                printf("Product must be between [Manis, Asam, Regular");
            }
        } while (strcmp(productCategoryTemp, "Manis") != 0 && strcmp(productCategoryTemp, "Asam") != 0 && strcmp(productCategoryTemp, "Regular") != 0);

        do {
            printf("Input Product Price: ");
            productPriceTemp = nextInt();
            if (productPriceTemp<7000 || productPriceTemp>20000) {
                printf("Product must be between 7000 - 20000!");
            }
        } while (productPriceTemp<7000 || productPriceTemp>20000);

        char confirm;
        do {
            printf("Are you sure, you want to delete this product ? [y/n]\n");
            printf(">> ");
            scanf("%c", &confirm); getchar();
        } while (confirm != 'Y' && confirm != 'y' && confirm != 'N' && confirm != 'n');

        if (confirm == 'Y' || confirm == 'y') {
            strcpy(productName[index], productNameTemp);
            strcpy(productCategory[index], productCategoryTemp);
            productPrice[index] = productPriceTemp;
            puts("Update has been successfully added!");
            enterToContinue();
        } else {
            puts("Update has been cancelled!");
            enterToContinue();                   
        }
    }
}

void menu4() {
    menu2();
    int num;
    do {
        printf("Select product number you want to delete : ");
        num = nextInt();
    } while (num > 1 || num < 0);
    int index = num - 1;

    char confirm;
    do {
        printf("Are you sure, you want to delete this product ? [y/n]\n");
        printf(">> ");
        scanf("%c", &confirm); getchar();
    } while (confirm != 'Y' && confirm != 'y' && confirm != 'N' && confirm != 'n');

    if (confirm == 'Y' || confirm == 'y') {
        for (int i = index; i < productCount; i++) {
            strcpy(productID[i], productID[i+1]);
            strcpy(productName[i], productName[i+1]);
            strcpy(productCategory[i], productCategory[i+1]);
            productPrice[i] = productPrice[i+1];
        }
        productCount--;
        puts("Product has been successfully deleted!");
        enterToContinue();
    }
}

int nextInt() {
    int input;
    scanf("%d", &input); getchar();
    return input;
}

void enterToContinue() {
    puts("Enter to Continue...");
    getchar();
    return;
}