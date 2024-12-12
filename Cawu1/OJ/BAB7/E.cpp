#include <stdio.h>
#include <string.h>

void swap(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

void swapChar(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void swapString(char a[], char b[]) {
    char temp[1005] = "";
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

int partition(double A[], char B[][1005], char C[], double D[], int low, int high) {
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (A[j] <= A[high]) {
            i++;
            swap(&A[i], &A[j]);
            swap(&D[i], &D[j]);
            swapString(B[i], B[j]);
            swapChar(&C[i], &C[j]);
        }
    }
    swap(&A[i+1], &A[high]);
    swap(&D[i+1], &D[high]);
    swapString(B[i+1], B[high]);
    swapChar(&C[i+1], &C[high]);
    return i + 1;
}

void quickSort(double A[], char B[][1005], char C[], double D[], int low, int high) {
    if (low < high) {
        int pivot = partition(A, B, C, D, low, high);
        quickSort(A, B, C, D, low, pivot - 1);
        quickSort(A, B, C, D, pivot + 1, high);
    }
}

int main() {
    FILE *file;
    file = fopen("testdata.in", "r");

    char nama[105][1005], kode[105];
    double derajat[105];

    int index = 0;
    while(!feof(file)) {
        fscanf(file, "%[^#]#%lf#%c\n", nama[index], &derajat[index], &kode[index]);
        index++;
    }

    double derajat2[105];
    for (int i = 0; i < index; i++) { // konversi suhu ke celcius
        if (kode[i] == 'C') {
            derajat2[i] = derajat[i];
        } else {
            derajat2[i] = (derajat[i] - 32) * 5 / 9;
        }
    }

    quickSort(derajat2, nama, kode, derajat, 0, index - 1);

    for (int i = 0; i < index; i++) { // urut suhu jika terdapat nama yang sama
        for (int j = 0; j < index - 1; j++) {
            if (derajat[j] == derajat[j+1]) {
                if (strcmp(nama[j], nama[j+1]) > 0) {
                    char temp[1005];
                    strcpy(temp, nama[j]);
                    strcpy(nama[j], nama[j+1]);
                    strcpy(nama[j+1], temp);
                }
            }
        }
    }

    for (int i = 0; i < index; i++) {
        printf("%s is %.2lf%c\n", nama[i], derajat[i], kode[i]);
    }

    fclose(file);
    return 0;
}