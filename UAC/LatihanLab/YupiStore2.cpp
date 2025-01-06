#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define gc getchar();

typedef struct {
    char ID[10];
    char name[100];
    char category[100];
    int stock;
    int price;
} item;

item yupi[1000];
int yupiCount = 0;

void saveFile();
void loadFile();

void printMenu();
void enterToContinue();

void create();
void view();
void buy();

int main() {
    int input = -1;
    do {
        printMenu();
        do {
            printf(">> ");
            scanf("%d", &input); gc
        } while (input < 1 || input > 4);

        switch (input) {
            case 1:
                create();
                break;
            case 2:
                view();
                break;
            case 3:
                buy();
                break;
            case 4:
                printf("Thank you for using our program");
                return 0;
        }
    } while (1);

    return 0;
}

void saveFile() {
    FILE *file = fopen("candy.txt", "w");

    if (file == NULL) {
        puts("Error loading file...");
        enterToContinue();
        return;
    }

    for (int i = 0; i < yupiCount; i++) {
        fprintf(file, "%s#%s#%s#%d#%d\n", yupi[i].ID, yupi[i].name, yupi[i].category, yupi[i].stock, yupi[i].price);
    }

    fclose(file);
}

void loadFile() {
    FILE *file = fopen("candy.txt", "r");

    if (file == NULL) {
        puts("Error loading file...");
        enterToContinue();
        return;
    }

    yupiCount = 0;

    while (fscanf(file, "%[^#]#%[^#]#%[^#]#%d#%d\n", yupi[yupiCount].ID, yupi[yupiCount].name, yupi[yupiCount].category, &yupi[yupiCount].stock,&yupi[yupiCount].price)) {
        yupiCount++;
    }
}

void printMenu() {
    system("cls");
    loadFile();
    puts("YUPI STORE");
    puts("1. Create Candy");
    puts("2. View Candy");
    puts("3. Buy Candy");
    puts("4. Exit");
}

void enterToContinue() {
    puts("Enter to continue..."); gc
}

void create() {
    item newYupi;

    // name
    do {
        printf("Enter Candy Name: ");
        scanf("%[^\n]", newYupi.name); gc
    } while (strlen(newYupi.name) < 8 || strlen(newYupi.name) > 20);

    // category
    do {
        printf("Enter Candy Category: ");
        scanf("%[^\n]", newYupi.category); gc
    } while (strcmp(newYupi.category, "Choco") != 0 && strcmp(newYupi.category, "Gummy") != 0 && strcmp(newYupi.category, "Minty") != 0 && strcmp(newYupi.category, "Fruity") != 0);

    // stock
    do {
        printf("Enter Candy stock: ");
        scanf("%[^\n]", newYupi.stock); gc
    } while (newYupi.stock <= 0);

    do {
        printf("Enter Candy price: ");
        scanf("%[^\n]", newYupi.price); gc
    } while (newYupi.price <= 0);

}

void view() {

}

void buy() {

}