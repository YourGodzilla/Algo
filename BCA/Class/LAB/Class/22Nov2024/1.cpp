#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    int price;
} Product;

Product products[100];
int productCount = 0;

void createProduct();
void viewProduct();
void updateProduct();
void sortByPrice();
int searchById(int id);
void saveFile(); // write file
void loadFile(); // read file



int main() {
    int choice = 0;

    do {
        printf("1. Add Product\n");
        printf("2. View Product\n");
        printf("3. Update Product\n");
        printf("4. Sort by price\n");
        printf("5. Exit\n");
        printf(">> ");

        switch(choice) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                return 0;
        }
    } while (choice != 5);
    return 0;
}

void saveFile() {
    FILE *file = fopen("products.txt", "w");

    for (int i = 0; i < productCount; i++) {
        fprintf(file, "%d#%d#%d\n", products[i].id, products[i].name, products[i].price);
    }
    
    fclose(file);
}

void loadFile() {
    FILE *file = fopen("products.txt", "r");

    productCount = 0;
    while(fscanf(file, "%d#%[^#]#%d\n", &products[productCount].id, products[productCount].name, &products[productCount].price) != EOF) {
        productCount++;
    }

    fclose(file);
}

void createProduct() {
    Product newProduct;

    printf("Enter product name: ");
    scanf("%[^\n]", newProduct.name); getchar();
    printf("Enter product price: ");
    scanf("%d", newProduct.price); getchar();

    newProduct.id = productCount + 1;

    products[productCount++] = newProduct;
    saveFile();
}