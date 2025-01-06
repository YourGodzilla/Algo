#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char productID[100][17];
char productName[100][50];
char productCategory[100][10];
int productPrice[100];

int productCount = 0;

void printMenu();
void menu1();
void menu2();
void menu3();
void menu4();
void menu5();

int nextInt();
void enterToContinue();

int main () {
    int input = -1;
    do {
        do {
            printMenu();
            printf(">> ");
            input = nextInt();
            if (input < 1 || input > 5) {
                puts("Input must be between 1 to 5!");
            }
        } while (input < 1 || input > 5);

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
                menu5();
                return 0;
        }
    } while (1);

    return 0;
}

void printMenu() {
    puts("JO's Lemonstand");
    puts("========================================");
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
            if (decider == 0) {
                productID[productCount][i] = rand() % 26 + 'A';
            } else if (decider == 1) {
                productID[productCount][i] = rand() % 26 + 'a';
            } else if (decider == 2) {
                productID[productCount][i] = uniqueChar[rand() % 5];
            }
        } else if (i==12) {
            productID[productCount][13] + '\0';
        }
    }

    do {
        printf("Input the product name : ");
        scanf("%[^\n]", productName[productCount]); getchar();
        if (strlen(productName[productCount]) < 3 || strlen(productName[productCount]) > 25) {
            puts("Input must be between 3 to 25 character!");
        }
    } while (strlen(productName[productCount]) < 3 || strlen(productName[productCount]) > 25);
    
    do {
        printf("Input the product Category [Manis | Asam | Reguler] : ");
        scanf("%[^\n]", productCategory[productCount]); getchar();
        if (strcmp(productCategory[productCount], "Manis") != 0 && strcmp(productCategory[productCount], "Asam") != 0 && strcmp(productCategory[productCount], "Reguler") != 0) {
            puts("Input must be between [Manis, Asam, Reguler]!");
        }
    } while (strcmp(productCategory[productCount], "Manis") != 0 && strcmp(productCategory[productCount], "Asam") != 0 && strcmp(productCategory[productCount], "Reguler") != 0);

    do {
        printf("Input the product Price : ");
        productPrice[productCount] = nextInt();
        if (productPrice[productCount]<=7000 || productPrice[productCount]>=20000) {
            puts("Input must be between 7001 to 19999 character!");
        }
    } while (productPrice[productCount]<=7000 || productPrice[productCount]>=20000);

    printf("========================================\n");
    printf("Product ID : PRO%s\n", productID[productCount]);
    printf("Product Name : %s\n", productName[productCount]);
    printf("Product Category : %s\n", productCategory[productCount]);
    printf("Product Price : %d\n", productPrice[productCount]);
    printf("========================================\n");

    char confirm;
    do {
        printf("Are you sure, you want to add this product? [y/n]\n");
        printf(">> ");
        scanf("%c", &confirm); getchar();
        if (confirm != 'Y' && confirm != 'y' && confirm != 'N' && confirm != 'n') {
            puts("Input must be ""y"" or ""n""");
        }
    } while (confirm != 'Y' && confirm != 'y' && confirm != 'N' && confirm != 'n');

    if (confirm == 'Y' || confirm == 'y') {
        productCount++;
        puts("product has been succesfully added!");
        enterToContinue();
        return;
    } else {
        puts("product has been cancelled!");
        enterToContinue();
        return;
    }
}

void menu2() {
    if (productCount == 0) {
        puts("There is no product!");
        enterToContinue();
    }

    for (int i = 0; i < productCount; i++) {
        printf("Product No. : %d\n", i + 1);
        printf("========================================\n");
        printf("Product ID : PRO%s\n", productID[i]);
        printf("Product Name : %s\n", productName[i]);
        printf("Product Category : %s\n", productCategory[i]);
        printf("Product Price : %d\n", productPrice[i]);
        printf("========================================\n");
    }
    enterToContinue();
}

void menu3() {

}

void menu4() {

}

void menu5() {
    puts("Thank you for using our program!");
    enterToContinue();
    return;
}

int nextInt() {
    int input;
    scanf("%d", &input);
    getchar();
    return input;
}

void enterToContinue() {
    puts("Enter to Continue...");
    getchar();
    return;
}