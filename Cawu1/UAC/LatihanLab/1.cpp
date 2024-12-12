#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

Bakmie bakmies[200];
int count = 0;

int main() {
    srand(time(NULL));

    int choice;
    do {
        printf("Bakmie RG\n");
        printf("1. Create Bakmie\n");
        printf("2. View Bakmie\n");
        printf("3. Buy Bakmie\n");
        printf("4. Exit Bakmie\n");
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

void merge(int left, int mid, int right) {
    int len1 = mid - left + 1;
    int len2 = right - mid;

    Bakmie arr1[len1];
    Bakmie arr2[len2];

    for (int i = 0; i < len1; i++) {
        arr1[i] = bakmies[left+i];
    }
    
    for (int j = 0; j < len2; j++) {
        arr2[j] = bakmies[mid+1+j];
    }
    
    int idx1 = 0;
    int idx2 = 0;
    int idx = left;
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
    char name[105];
    char categry(105);
    int stock;
    int price;

    do {
    printf("Input Bakmie Name :");
    } while (strlen(name) <= 3);
}

void viewMenu() {

}

void buyMenu() {

}