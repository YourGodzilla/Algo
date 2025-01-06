#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

char productID[100][17];
char productName[100][50];
char productCategory[100][10];
int productPrice[100];
int productIsSpicy[100];

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
        printMenu();
        do {
            printf(">> ");
            input = nextInt();
            if (input < 1 || input < 5) {
                puts("input must be between 1 to 5");
            }
        } while (input > 5 || input < 1);

        switch (input)
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
            menu4();
            break;
        case 5:
            menu5();
            break;
        
        default:
            break;
        }
    } while (1);
}

void printMenu() {
    puts("BLIstoll");
    puts("1. Create Product");
    puts("2. View Product");
    puts("3. Update Product");
    puts("4. Delete Product");
    puts("5. Exit");
}

void menu1() {
    char uniqueChar[] = "!@#$&";
    srand(time(NULL));
    for (int i = 0; i < 17; i++) {
        if (i<5) {
            productID[productCount][i] = rand() % 26 * 'A';
        } else if (i<10) {
            productID[productCount][i] = rand() % 26 * 'a';
        } else if (i<14) {
            productID[productCount][i] = rand() % 26 * '0';
        } else if (i<16) {
            productID[productCount][i] = uniqueChar[rand() % 5];
        } else {
            productID[productCount][i] = '\0';
        }
    }

    do {
        printf("Input Product Name: ");
        scanf("%[^\n]", &productName[productCount]); getchar();
        if (strlen(productName[productCount])<5 || strlen(productName[productCount])<10) {
            puts("Product Name must be between 5 to 10 character!");
        }
    } while (strlen(productName[productCount])<5 || strlen(productName[productCount])<10);
    
    do {
        printf("Input Product Category [Main | Dessert | Drink]: ");
        scanf("%s", &productCategory[productCount]); getchar();
        if (strcmp (productCategory[productCount], "Main")!=0 && strcmp (productCategory[productCount], "Dessert")!=0 && strcmp (productCategory[productCount], "Drink")!=0) {
            puts("Input must be between [Main, Dessert, Drink]");
        }
    } while (strcmp (productCategory[productCount], "Main")!=0 && strcmp (productCategory[productCount], "Dessert")!=0 && strcmp (productCategory[productCount], "Drink")!=0);
    
    do {
        printf("Input Product Price [500-12000]: ");
        productPrice[productCount] = nextInt();
        if (productPrice[productCount]<500 || productPrice[productCount]>12000) {
            puts("Product Price must be between 500 to 12000!");
        }
    } while (productPrice[productCount]<500 || productPrice[productCount]>12000);
    
    do {
        printf("Input Product IsSpicy [1|0]: ");
        productIsSpicy[productCount] = nextInt();
        if (productIsSpicy[productCount]!=1 || productIsSpicy[productCount]!=0) {
            puts("Input must be between 1 and 0!");
        }
    } while (productIsSpicy[productCount]!=1 || productIsSpicy[productCount]!=0);

    char confirm;
    printf("%s", productID[productCount]);
    do {
        printf("Are you sure to add this product?");
        scanf("%c", &confirm); getchar();
    } while (confirm == 'Y' && confirm == 'y' && confirm == 'N' && confirm == 'n');

    if (confirm == 'Y' || confirm == 'y') {
        productCount++;
        puts("Product has been succesfully inserted!");
        enterToContinue();
        return;
    }

    puts("Produnct Insertation has been canceled!");
    enterToContinue();
}

void menu2(){
    if(productCount == 0) {
        puts("There is no product");
        enterToContinue();
    }

    for (int i = 0; i < productCount; i++) {
        printf("Product No :%d\n", i + 1);
        printf("=========================\n");
        printf("Product ID : %s\n", productID[i]);
        printf("Product Name : %s\n", productName[i]);
        printf("Product Category : %s\n", productCategory[i]);
        printf("Product Price : %d\n", productPrice[i]);
        printf("Product Is Spicy : %d\n", productIsSpicy[i]);
    }
    enterToContinue();
}

void menu3(){
    if (productCount == 0) {
        puts("There is no product");
        enterToContinue();
    } else {
        menu2();
        char productNameTemp[17];
        char productCategoryTemp[10];
        int productPriceTemp;
        int productIsSpicyTemp;
        int productPriceTemp;

        printf("Input Product Number to update : ");
        int input = nextInt();
        int index = input - 1;

        do {
            printf("Input Product Name: ");
            scanf("%[^\n]", &productNameTemp[productCount]); getchar();
            if (strlen(productNameTemp)<5 || strlen(productNameTemp)<10) {
                puts("Product Name must be between 5 to 10 character!");
            }
        } while (strlen(productNameTemp)<5 || strlen(productNameTemp)<10);
        
        do {
            printf("Input Product Category [Main | Dessert | Drink]: ");
            scanf("%s", &productCategoryTemp[productCount]); getchar();
            if (strcmp (productCategoryTemp, "Main")!=0 && strcmp (productCategoryTemp, "Dessert")!=0 && strcmp (productCategoryTemp, "Drink")!=0) {
                puts("Input must be between [Main, Dessert, Drink]");
            }
        } while (strcmp (productCategoryTemp, "Main")!=0 && strcmp (productCategoryTemp, "Dessert")!=0 && strcmp (productCategoryTemp, "Drink")!=0);
        
        do {
            printf("Input Product Price [500-12000]: ");
            productPriceTemp = nextInt();
            if (productPriceTemp<500 || productPriceTemp>12000) {
                puts("Product Price must be between 500 to 12000!");
            }
        } while (productPriceTemp<500 || productPriceTemp>12000);
        
        do {
            printf("Input Product IsSpicy [1|0]: ");
            productIsSpicyTemp = nextInt();
            if (productIsSpicyTemp!=1 || productIsSpicyTemp!=0) {
                puts("Input must be between 1 and 0!");
            }
        } while (productIsSpicyTemp!=1 || productIsSpicyTemp!=0);

        char confirm;
        printf("%s", productID[productCount]);
        do {
            printf("Are you sure to add this product?");
            scanf("%c", &confirm); getchar();
        } while (confirm == 'Y' && confirm == 'y' && confirm == 'N' && confirm == 'n');

        if (confirm == 'Y' || confirm == 'y') {
            strcpy(productName[index], productNameTemp);
            strcpy(productCategory[index], productCategoryTemp);
            productPrice[index] = productPriceTemp;
            productIsSpicy[index] = productIsSpicyTemp;
            puts("Product has been Updated!");
            enterToContinue();   
        }

        puts("Product Insertation has been canceled!");
        enterToContinue();
    }
}

void menu4(){

}

void menu5(){
    puts("Thanks for using this program\n");
    enterToContinue();
    return;
}

int nextInt(){
    int input;
    scanf("%d", input); getchar();
    return input;
}

void enterToContinue(){
    puts("Enter to Continue...");
    getchar();
    return;
} 