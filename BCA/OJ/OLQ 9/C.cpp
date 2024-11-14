#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ascending_order;

int compare(const void *a, const void *b) {
    const char *strA = *(const char **)a;
    const char *strB = *(const char **)b;
    return ascending_order ? strcmp(strA, strB) : strcmp(strB, strA);
}

int main() {
    int n;
    scanf("%d", &n);
    
    char nama[n][55];
    char *namaPointers[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%s", nama[i]);
        namaPointers[i] = nama[i];
    }
    
    int order;
    scanf("%d", &order);
    ascending_order = (order == 0);

    qsort(namaPointers, n, sizeof(char *), compare);

    for (int i = 0; i < n; i++) {
        printf("%s\n", namaPointers[i]);
    }

    return 0;
}
