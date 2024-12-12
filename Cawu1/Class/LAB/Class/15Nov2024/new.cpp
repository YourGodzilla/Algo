#include <stdio.h>
#include <string.h>

typedef struct {
    char name[30];
    int price;
    int stock
;} Item;

Item itemList[100];
int counter = 0;

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
    FILE *file = fopen("items.txt", "r");

    Item item;
    Item deletedItem;
    int found = 0;

    if (file == NULL) {
        printf("File not found!\n");
        return;
    }

    char toDelete[30];
    printf("Enter item to delete: ");
    scanf("%[^\n]", toDelete); getchar();

    while(fscanf(file, "%[^#]#%d#%d\n", item.name, &item.price, &item.stock) != EOF) {
        if (strcmp(item.name, toDelete) != 0 || found == 1) {
            strcpy(itemList[counter].name, item.name);
            itemList[counter].price = item.price;
            itemList[counter].stock = item.stock;
            counter++;
        } else {
            strcpy(deletedItem.name, item.name);
            deletedItem.price = item.price;
            deletedItem.stock = item.stock;
            found = 1;
        }
    }
    fclose(file);

    if (found) {
        FILE *file = fopen("items.txt", "w");

        for (int i = 0; i < counter; i++) {
            fprintf(file, "%s#%d#%d\n", itemList[i].name, itemList[i].price, itemList[i].stock);
        }
        fclose(file);
        
        printf("%s %d %d has been deleted!\n", deletedItem.name, deletedItem.price, deletedItem.stock);
    } else {
        printf("Item not found!\n");
    }

    counter = 0;
}