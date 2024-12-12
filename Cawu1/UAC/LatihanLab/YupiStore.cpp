#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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
    do {
        int input = -1;
        printMenu();
        do
        {
            printf(">> ");
            scanf("%d", &input); getchar();
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
                puts("Thank You For Using The Program");
                return 0;
        }
    } while (1);
    return 0;
}

void saveFile() {
    FILE *file = fopen("candy.txt", "w");

    if (file == NULL) {
        puts("Error Loading File...");
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
        puts("Error Loading File...");
        enterToContinue();
        return;
    }

    while (fscanf(file, "%[^#]#%[^#]#%[^#]#%d#%d\n", yupi[yupiCount].ID, yupi[yupiCount].name, yupi[yupiCount].category, &yupi[yupiCount].stock, &yupi[yupiCount].price) != EOF)
        yupiCount++;

    fclose(file);
}

void printMenu() {
    system("cls");
    puts("YUPI STORE");
    loadFile();
    puts("1. Create Candy");
    puts("2. View Candy");
    puts("3. Buy Candy");   
    puts("4. Exit");
}

void enterToContinue() {
    puts("Enter To Continue..."); getchar();
}

void create() {
    item newYupi;
    
    // name
    do {
        printf("Input Candy Name: ");
        scanf("%[^\n]", newYupi.name); getchar();
        if (strlen(newYupi.name) < 8 || strlen(newYupi.name) > 20) {
            puts("Name must be between 8 to 20 characters!");
        }
    } while (strlen(newYupi.name) < 8 || strlen(newYupi.name) > 20);
    
    // category
    do {
        printf("Input Candy Category [Choco | Gummy | Minty | Fruity]: ");
        scanf("%[^\n]", newYupi.category); getchar();
        if (strcmp(newYupi.category, "Choco") != 0 && strcmp(newYupi.category, "Gummy") != 0 && strcmp(newYupi.category, "Minty") != 0 && strcmp(newYupi.category, "Fruity") != 0) {
            puts("Input must be Choco / Gummy / Minty / Fruity !");
        }
    } while (strcmp(newYupi.category, "Choco") != 0 && strcmp(newYupi.category, "Gummy") != 0 && strcmp(newYupi.category, "Minty") != 0 && strcmp(newYupi.category, "Fruity") != 0);
    
    // stock
    do {
        printf("Input Candy Stock: ");
        scanf("%d", &newYupi.stock); getchar();
        if (newYupi.stock <= 0) {
            puts("Input must be more than 0!");
        }
    } while (newYupi.stock <= 0);
    
    // price
    do {
        printf("Input Candy Price: ");
        scanf("%d", &newYupi.price); getchar();
        if (newYupi.price <= 0) {
            puts("Input must be more than 0!");
        }
    } while (newYupi.price <= 0);
    
    // ID
    sprintf(newYupi.ID, "%c%c%03d", newYupi.name[0], newYupi.name[1], yupiCount + 1);

    if (newYupi.ID[0] > 'Z') newYupi.ID[0] = newYupi.ID[0] - 'a' + 'A';
    if (newYupi.ID[1] > 'Z') newYupi.ID[1] = newYupi.ID[1] - 'a' + 'A';

    printf("ID : %s\n", newYupi.ID);
    printf("Name : %s\n", newYupi.name);
    printf("Category : %s\n", newYupi.category);
    printf("Stock : %d\n", newYupi.stock);
    printf("Price : %d\n", newYupi.price);

    char confirm[10];
    printf("Are you sure want to add this candy? [yes / no] : ");

    do {
        scanf("%s", confirm); getchar();
        if (strcmp(confirm, "Yes") != 0 && strcmp(confirm, "yes") != 0 && strcmp(confirm, "No") != 0 && strcmp(confirm, "no") != 0) {
            puts("Input must be between [yes / no]!");
        }
    } while (strcmp(confirm, "Yes") != 0 && strcmp(confirm, "yes") != 0 && strcmp(confirm, "No") != 0 && strcmp(confirm, "no") != 0);

    if (strcmp(confirm, "Yes") || strcmp(confirm, "yes")) {
        yupi[yupiCount++] = newYupi;
        saveFile();
        puts("Candy succesfully created!");
    } else puts("Candy has been cancelled!");

    enterToContinue();
}

void merge(item yupi[], int left, int mid, int right) {
    int i = left, j = mid+1, k = left;
    item temp[right+5];

    while (i <= mid && j <= right) {
        if (strcmp(yupi[i].name, yupi[j].name) > 0) {
            temp[k] = yupi[i];
            k++;
            i++;
        } else {
            temp[k] = yupi[j];
            k++;
            j++;
        }
    }

    while (i <= mid) {
        temp[k] = yupi[i];
            k++;
            i++;
    }
    
    while (j <= mid) {
        temp[k] = yupi[j];
            k++;
            j++;
    }

    for (i = left; i <= right; i++) {
        yupi[i] = temp[i];
    }
}

void mergesort(item yupi[], int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;

    mergesort(yupi, left, right);
    mergesort(yupi, mid+1, right);
    merge(yupi, left, mid, right);
}

void view() {
    if (yupiCount == 0) {
        puts("There is no candy!");
        enterToContinue();
        return;
    }

    // validation
    char confirm[100];
    printf("Choose View Mode [All / Choco / Gummy / Minty / Fruity]! : ");
    
    do {
        scanf("%s", confirm); getchar();

        if (strcmp(confirm, "All") != 0 && strcmp(confirm, "Choco") != 0 && strcmp(confirm, "Gummy") != 0 && strcmp(confirm, "Minty") != 0 && strcmp(confirm, "Fruity") != 0) {
            puts("Input must be All / Choco / Gummy / Minty / Fruity!");
        }
    } while (strcmp(confirm, "All") != 0 && strcmp(confirm, "Choco") != 0 && strcmp(confirm, "Gummy") != 0 && strcmp(confirm, "Minty") != 0 && strcmp(confirm, "Fruity") != 0);

    if (strcmp(confirm, "All") == 0) {
        mergesort(yupi, 0, yupiCount-1);
        for (int i = 0; i < yupiCount; i++) {
            printf("No : %d\n", i + 1);
            printf("ID : %s\n", yupi[i].ID);
            printf("Name : %s\n", yupi[i].name);
            printf("Category : %s\n", yupi[i].category);
            printf("Stock : %d\n", yupi[i].stock);
            printf("Price : %d\n", yupi[i].price);
            puts("====================================");
        }
    } else {
        int counter = 1, flag = 0;
        for (int i = 0; i < yupiCount; i++) {
            if (strcmp(yupi[i].category, confirm) == 0) {
                flag = 1;
                printf("No : %d\n", i + 1);
                printf("ID : %s\n", yupi[i].ID);
                printf("Name : %s\n", yupi[i].name);
                printf("Category : %s\n", yupi[i].category);
                printf("Stock : %d\n", yupi[i].stock);
                printf("Price : %d\n", yupi[i].price);
                puts("====================================");
                counter++;
            }
        }
        
        if (!flag) puts("There is no product in that category");
    }
    enterToContinue();
}

void buy() {

}