#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
    char ID[25];
    char name[25];
    char category[25];
    int stock;
    int price;
} Candy;

Candy candies[200];
int counter = 0;

void printMenu();

int nextInt();

void createMenu();
void viewMenu();
void buyMenu();


int main() {
    srand(time(NULL));

    int choice = 0;
    do {
        printMenu();
        printf(">> ");
        choice = nextInt();

        switch(choice) {
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
                puts("Tengkyu ya bang");
                return 0;
        }
    } while (choice < 1 || choice > 4);
    return 0;
}

void printMenu() {
    puts("YupI Store");
    puts("1. Create Candy");
    puts("2. View Candy");
    puts("3. Buy Candy");
    puts("4. Exit");
}

int nextInt() {
    int n;
    scanf("%d", &n); getchar();
    return n;
}

void save(char ID[25], char name[25], char category[25], int stock, int price) {
    FILE *file = fopen("candy.txt", "a");
    fprintf(file, "%s#%s#%s#%d#d", ID, name, category, stock, price);
    fclose(file);
}

void merge(int left, int mid, int right) {
    int len1 = mid - left + 1;
    int len2 = right - mid;

    Candy arr1[len1];
    Candy arr2[len2];

    for (int i = 0; i < len1; i++) {
        arr1[i] = candies[left+i];
    }

    for (int j = 0; j < len2; j++) {
        arr2[j] = candies[mid+1+j];
    }

    int idx1 = 0;
    int idx2 = 0;
    int idx = left;

    while (idx1 < len1 && idx2 < len2) {
        if (strcmp(arr1[idx1].name, arr2[idx2].name) > 0) {
            candies[idx] = arr1[idx1];
            idx1++;
        } else {
            candies[idx] = arr2[idx2];
            idx2++;
        }
        idx++;

        while (idx1 < len1) {
            candies[idx] = arr1[idx1];
            idx1++;
            idx++;
        }

        while (idx2 < len2) {
            candies[idx] = arr2[idx2];
            idx2++;
            idx++;
        }
    }
}

void mergeSort(int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        mergeSort(left, mid);
        mergeSort(mid+1, right);

        merge(left, mid, right);
    }
}

void createMenu() {
    char ID[25];
    char name[25];
    char category[25];
    int stock;
    int price;

    do {
        printf("Input Candy Name: ");
        scanf("%[^\n]", name); getchar();
    } while (strlen(name) < 8 || strlen(name) > 20);

    do {
        printf("Input Candy Category: ");
        scanf("%[^\n]", category); getchar();
    } while (strcmp(category, "Choco") != 0 && strcmp(category, "Gummy") != 0 && strcmp(category, "Minty") != 0 && strcmp(category, "Fruity") != 0);

    do {
        printf("Input Candy Stock: ");
        stock = nextInt();
    } while (stock <= 0);

    do {
        printf("Input Candy Price: ");
        price = nextInt();
    } while (stock <= 0 );
}

void viewMenu() {

}

void buyMenu() {

}