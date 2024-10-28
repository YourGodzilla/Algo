#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

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
            if (input < 1 || input > 5) {
                puts("Input must be between 1 to 4!");
                enterToContinue();
            }
        } while (input < 1 || input > 4);

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
            
            default:
                break;
        }
    } while (1);
}

void printMenu() {
    puts("JO's LemonStand");
    puts("===================");
    puts("1. Create Product");
    puts("2. View Product");
    puts("3. Delete Product");
    puts("4. Exit");
}

void menu1() {
    char uniqueChar[] = "!@#$&";
    srand(time(NULL));
    for (int i = 0; i < 16; i++) {
        int decider = rand()%3;
        if (decider == 0) {
            productID[productCount][i] = rand() % 26 + 'A';
        } else if (decider == 1){
            productID[productCount][i] = rand() % 26 + 'a';
        } else if (decider == 2){
            productID[productCount][i] = uniqueChar[rand() % 5];
        }   
    }
    productID[productCount][16] + '\0';

    do {
        printf("Input Product Name : ");
        scanf("%[^\n]", productName[productCount]); getchar();
        if (strlen(productName[productCount])<5 || strlen(productName[productCount])>20) {
            puts("Product Name must be between 1 to 20 character");
        }
    } while (strlen(productName[productCount])<5 || strlen(productName[productCount])>20);

    do {
        printf("Input Product Category [Sweet | Sour | Balanced]: ");
        scanf("%s", productCategory[productCount]); getchar();
        if (strcmp(productCategory[productCount], "Sweet") && strcmp(productCategory[productCount], "Sour") && strcmp(productCategory[productCount], "Balanced")) {
            puts("Product Category must be between [Sweet, Sour, Balanced]");
        }
    } while (strcmp(productCategory[productCount], "Sweet") && strcmp(productCategory[productCount], "Sour") && strcmp(productCategory[productCount], "Balanced"));
    
    do {
        printf("Input Product Price [7000 | 19000]: ");
        productPrice[productCount] = nextInt();
        if (productPrice[productCount]<7000 || productPrice[productCount]>19000) {
            puts("Product Name must be between 1 to 20 character");
        }
    } while (productPrice[productCount]<7000 || productPrice[productCount]>19000);

    printf("Product ID : %s\n", productID[productCount]);
    printf("Product Name : %s\n", productName[productCount]);
    printf("Product Category : %s\n", productCategory[productCount]);
    printf("Product Price : %d\n", productPrice[productCount]);
    
    char confirm;
    do {
        printf("Are you sure, you want to add this product?\n");
        printf(">> ");
        scanf("%c", &confirm); getchar();
    } while (confirm != 'Y' && confirm != 'y' && confirm != 'N' && confirm != 'n');

    if (confirm == 'Y' || confirm == 'y') {
        productCount++;
        puts("Product has been succesfully inserted!");
        enterToContinue();
        return;
    } else {
        puts("Product has been cancelled!");
        enterToContinue();
    return;
    }
}

void menu2() {
    if (productCount==0) {
        puts("There is no product!");
        enterToContinue();
    }

    for (int i = 0; i < productCount; i++) {
        printf("Product No : %d", i + 1);
        printf("Product ID : %s\n", productID[i]);
        printf("Product Name : %s\n", productName[i]);
        printf("Product Category : %s\n", productCategory[i]);
        printf("Product Price : %d\n", productPrice[i]);
    }
    enterToContinue();
}

void menu3() {
    menu2();
    int num;
    do {
        printf("Input the product number to delete : ");
        num = nextInt();
    } while (num > 1 || num < 0);
    int index = num - 1;

    char confirm;
    do {
        printf("Are you sure, you want to delete the product? [Y | n]\n");
        printf(">> ");
        scanf("%c", &confirm);
    } while (confirm != 'Y' && confirm != 'y' && confirm != 'N' && confirm != 'n');

    if (confirm == 'Y' || confirm == 'y') {
        for (int i = index; i < productCount-1; i++) {
            strcpy(productID[i],productID[i+1]);
            strcpy(productName[i],productName[i+1]);
            strcpy(productCategory[i],productCategory[i+1]);
            productPrice[i] = productPrice[i+1];
        }
        
        productCount--;
        puts("The product has been successfully");
        enterToContinue();
    }
}

void menu4() {
    puts("Thank you for using our program");
    enterToContinue();
    return;
}

int nextInt() {
    int input;
    scanf("%d", &input); getchar();
    return input;
}

void enterToContinue() {
    puts("ENTER to Continue...");
    getchar();
    return;
}
