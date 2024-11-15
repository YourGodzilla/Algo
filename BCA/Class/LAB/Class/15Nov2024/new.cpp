#include <stdio.h>
#include <string.h>

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
}

// "w" untuk write file
// "a" untuk append file
// "r" untuk read file

void createItem() {
    FILE *file = fopen("items.txt", "w");
}

void viewItem() {

}

void deleteItem() {

}