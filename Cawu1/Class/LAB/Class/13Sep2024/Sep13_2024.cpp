#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

char productID[100][17];
char productName[100][50];
char productCategory[100][110];
int productPrice[100];
int productIsSpicy[100];

int productCount = 0;

void printMenu();
void menu1();
void menu2();
void menu3();
void menu4();

//utils
int nextInt();
void enterToContinue();

int main () {
    int input = -1;
    do {
        printMenu();
        do {
            printf(">> ");
            input = nextInt();
            if (input < 1 || input > 5)
                puts("Input must be between 1 to 5!");
        } while (input < 1 || input > 5);
        
        switch(input) {
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

    return 0;
}

void printMenu() {
    puts("BLIStoll");
    puts("============");
    puts("1. Insert Product");
    puts("2. View Product");
    puts("3. Delete Product");
    puts("4. Update Product");
    puts("5. Exit");
}

void menu1() {
    // Random ID
    char uniqueChars[] = "!@#$&";
    srand(time(NULL));
    for (int i = 0;i < 17;i++) {
        if (i<5) {
            productID[productCount][i] = rand() % 26 + 'A';
        } else if (i<10) {
            productID[productCount][i] = rand() % 26 + 'a';
        } else if (i<14) {
            productID[productCount][i] = rand() % 10 + '0';
        } else if (i<16) {
            productID[productCount][i] = uniqueChars[rand() % 5];
        } else {
            productID[productCount][i] + '\0';
        }
    }

    // Nama Product
    do {
        printf("Input Product Name : ");
        scanf("%s", productName[productCount]); getchar();
        if (strlen(productName[productCount])<5 || strlen(productName[productCount])>50) {
            puts("Product Name must be between 5 to 5       0 Characters");
        }
    } while (strlen(productName[productCount])<5 || strlen(productName[productCount])>50);

    //product Category
    do {
        printf("Input Product Category [Main | Drink | Dessert] : ");
        scanf("%s", productCategory[productCount]);
        if (strcmp(productCategory[productCount], "Main") != 0 && strcmp(productCategory[productCount], "Drink") != 0 && strcmp(productCategory[productCount], "Dessert") != 0) {
            puts("Input must be between [Main, Drink, or Dessert]");
        }
    } while (strcmp(productCategory[productCount], "Main") != 0 && strcmp(productCategory[productCount], "Drink") != 0 && strcmp(productCategory[productCount], "Dessert") != 0);

    do {
        printf("Input Product Price [500-12000] : ");
        productPrice[productCount] = nextInt();
        if (productPrice[productCount]<500 || productPrice[productCount]>12000) {
            puts("Product Price must be between 500 to 12000");
        }
    } while (productPrice[productCount]<500 || productPrice[productCount]>12000);

    do {
        printf("Input Product IsSpicy [0 | 1] : ");
        productIsSpicy[productCount] = nextInt();
        if (productIsSpicy[productCount]!=1 && productIsSpicy[productCount]!=0) {
            puts("Input must be between 1 and 0");
        }
    } while (productIsSpicy[productCount]!=1 && productIsSpicy[productCount]!=0);

    char confirm;
    printf("%s", productID[productCount]);
    do {
        printf("Are you sure, you want to add this product??");
        scanf("%c", &confirm); getchar();
    } while (confirm != 'y' && confirm != 'n' && confirm != 'Y' && confirm != 'N');

    if (confirm == 'y' || confirm == 'Y') {
        productCount++;
        puts("Product has been succesfully inserted");
        enterToContinue();
        return; 
    }

    puts("Product Insertion has been cancelled");
    enterToContinue();
}

void menu2() {
    if (productCount == 0) {
        puts("There is no product!!");
        enterToContinue();
        return;
    }
    for (int i=0;i<productCount;i++) {
        printf("Product No. %d\n", i+1);
        printf("========================\n  ");
        printf("Product ID = %s\n", productID[i]);
        printf("Product Name =  %s\n", productName[i]);
        printf("Product Price = %d\n", productPrice[i]);
        printf("Product Is Spicy = %d\n", productIsSpicy[i]);
    }
    enterToContinue();
}

void menu3() {
    menu2();
    int number;
    do {
        printf("Input the product number you want to delete: ");
        number = nextInt();
    } while (number < 1 || number > 0);
    int index = number - 1;

    char confirm;
    printf("%s", productID[productCount]);
    do {
        printf("Are you sure, you want to delete this product??");
        scanf("%c", &confirm);
    } while (confirm != 'y' && confirm != 'n' && confirm != 'Y' && confirm != 'N');

    if (confirm == 'y' || confirm == 'Y') {
        for (int i = index; i < productCount-1; i++) {
            strcpy(productID[i], productID[i+1]);
            strcpy(productName[i], productName[i+1]);
            strcpy(productCategory[i], productCategory[i+1]);
            productPrice[i] = productPrice[i+1];
            productIsSpicy[i] = productIsSpicy[i+1];
        }
        
        productCount--;
        puts("Product has been succesfully deleted");
        enterToContinue();
        return;
    }
}

void menu4() {
    if (productCount == 0) {
        puts("There is no product, Please insert a new one!");
        enterToContinue();
    } else {
        menu2();
        char productIDTemp[17];
        char productNameTemp[255];
        int productPriceTemp;

        printf("Input product number to update : ");
        int input = nextInt();
        int index = input - 1;

        printf("Input Product ID : ");
        scanf("%s", productIDTemp);
        getchar();
        printf("Input Product Name : ");
        scanf("%[^\n]", productNameTemp);
        getchar();
        printf("Input Product Price : ");
        productPriceTemp = nextInt();

        char confirmationInput;
        do {
            printf("Do you want to add this product?? [y/n] : ");
            scanf("%c", &confirmationInput);
            getchar();

            if(confirmationInput != 'y' && confirmationInput != 'Y' && confirmationInput != 'n' && confirmationInput != 'N') {
                puts("Input must be between y or n!");
            }

        } while (confirmationInput != 'y' && confirmationInput != 'Y' && confirmationInput != 'n' && confirmationInput == 'N');

        if (confirmationInput == 'y' || confirmationInput == 'Y') {
            strcpy(productID[index], productIDTemp);
            strcpy(productName[index],  productNameTemp);
            productPrice[index] = productPriceTemp;
        }
    }
}

int nextInt() {
    int input;
    scanf("%d", &input); getchar();
    return input;
}

void enterToContinue() {
    puts("press ENTER to Continue...");
    getchar();
    return;
}