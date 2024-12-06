#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char ID[25];
    char name[105];
    char category[105];
    int stock;
    int price;
} Bakmie;

void createMenu();
void viewMenu();
void buyMenu();

int nextInt();

// in case kalau di soal ngga pake file
Bakmie bakmies[200];
int count = 0;

int main() {
    srand(time(NULL));
    // menu
    int choice;
    do {
        printf("Bakmie RG\n");
        printf("1. Create Bakmie\n");
        printf("2. View Bakmie\n");
        printf("3. Buy Bakmie\n");
        printf("4. Exit\n");
        printf(">> ");
        choice = nextInt();

        switch(choice){
            case 1:
                createMenu();
                break;
            case 2:
                viewMenu();
                break;
            case 3:
                buyMenu();
                break;
            case 4:
                printf("Tengkyu bang\n");
                return 0;
        }
    } while (choice < 1 || choice > 4);

    return 0;
}

int nextInt() {
    int n;
    scanf("%d", &n); getchar();
    return n;
}

void insertToFile(char ID[105], char name[105], char category[105], int stock, int price) {
    FILE *file = fopen("bakmie.txt", "a");
    fprintf(file, "%s#%s#%s#%d#%d", ID, name, category, stock, price);
    fclose(file);
}


void mergeSort(int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        mergeSort(left, mid);
        mergeSort(mid+1, right);
    }
}

void createMenu() {
    char ID[25];
    char name[105];
    char category[105];
    int stock;
    int price;

    // input nama
    do {
        printf("Input Bakmie Name: ");
        scanf("%[^\n]", name); getchar();
    } while(strlen(name) <= 3);

    // input category
    do {
        printf("Input Bakmie Category: ");
        scanf("%[^\n]", category); getchar();
    } while(strcmp(category, "Lebar") != 0 && strcmp(category, "Kecil") != 0 && strcmp(category, "Keriting") != 0);

    // input stock
    do {
        printf("Input Bakmie Stock: ");
        stock = nextInt();
    } while(stock <= 0);
    
    do {
        printf("Input Bakmie Price: ");
        price = nextInt();
    } while(price <= 10000);

    sprintf(ID, "%c%c%d%d%d", name[0], name[1], rand() % 10, rand() % 10, rand() % 10);

    insertToFile(ID, name, category, stock, price);

    Bakmie bakmie;
    strcpy(bakmie.ID, ID);
    strcpy(bakmie.name, name);
    strcpy(bakmie.category, category);
    bakmie.stock = stock;
    bakmie.price = price;
    bakmies[count] = bakmie;
    count++;

    printf("Bakmie has been created!\n");
}

void viewMenu() {
    if(count == 0) {
        printf("There is no data\n"); getchar();
        return;
    }

    mergeSort(0, count-1);
}

void buyMenu() {

}