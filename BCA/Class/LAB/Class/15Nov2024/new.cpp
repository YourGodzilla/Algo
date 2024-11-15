#include <stdio.h>
#include <string.h>

typedef struct {
    char name[30];
    int price;
    int stock
;} Item;

Item itemList[100];

void createItem();
void viewItem();
void deleteItem();

int main() {
    int choice = -1;
    do {
        printf("1. Create Item\n");
        printf("2. View Item\n");
        printf("3. Delete Item\n");
        printf("4. Exit Item\n");
        printf(">> ");
        scanf("%d", &choice); getchar();

        switch(choice) {
            case 1:
                createItem();
                break;
            case 2:
                viewItem();
                break;
            case 3:
                deleteItem();
                break;
        }
    } while (choice != 4);

    return 0;
}

// "w" untuk write file
// "a" untuk append file
// "r" untuk read file

void createItem() {
    FILE *file = fopen("items.txt", "a");

    if (file == NULL) {
        printf("File not found!\n");
        return;
    }

    Item newItem;
    printf("Enter item name: ");
    scanf("%[^\n]", newItem.name); getchar();
    printf("Enter item price: ");
    scanf("%d", &newItem.price); getchar();
    printf("Enter item stock: ");
    scanf("%D", &newItem.stock); getchar();

    fprintf(file, "%s#%d#%d\n", newItem.name, newItem.price, newItem.stock);

    fclose(file);
}

void viewItem() {
    FILE *file = fopen("items.txt", "r");

    Item item;

    if (file == NULL) {
        printf("File not found!\n");
        return;
    }

    while (fscanf(file, "%[^#]#%d#%d\n", item.name, &item.price, &item.stock) != EOF) {
        printf("name: %s, price: %d, stock: %d\n", item.name, item.price, item.stock);
    }

    fclose(file);
}

void deleteItem() {

}