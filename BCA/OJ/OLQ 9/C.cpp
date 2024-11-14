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

    // Dynamically allocate memory for n words
    char **namaPointers = (char **)malloc(n * sizeof(char *));
    if (namaPointers == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Dynamically allocate memory for each word (55 chars max per word)
    for (int i = 0; i < n; i++) {
        namaPointers[i] = (char *)malloc(55 * sizeof(char));
        if (namaPointers[i] == NULL) {
            printf("Memory allocation failed for word %d!\n", i);
            return 1;
        }
        scanf("%s", namaPointers[i]);
    }

    int order;
    scanf("%d", &order);
    ascending_order = (order == 0);

    // Sort the words
    qsort(namaPointers, n, sizeof(char *), compare);

    // Print the sorted words
    for (int i = 0; i < n; i++) {
        printf("%s\n", namaPointers[i]);
        free(namaPointers[i]);
    }

    free(namaPointers);
    return 0;
}
