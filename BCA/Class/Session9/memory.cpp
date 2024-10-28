#include <stdio.h>
#include <stdlib.h>

// yang sering digunakan
// malloc
// calloc
// realloc
// free

int main () {
    getchar();
    int* angka = (int*)malloc(sizeof(int)); // sizeof untuk size dari int
    *angka = 10;
    printf("%d\n", *angka);
    getchar();
    printf("baca: ");
    int n;
    scanf("%d", &n); getchar();
    printf("%d\n", n);
    long long* arr = (long long*)malloc(sizeof(long long)*n);
    int* arr = (int*)malloc(sizeof(int) * 1000000);
    for (int i = 0; i < 1000000; i++) {
        arr[i] = i;
        if (i < 1000) {
            printf("%d, ", arr[i]);
        }
    }
    printf("\n");
    getchar();
    printf("realloc\n");
    arr = (long long*)realloc(arr, 1000000);
    printf("free\n");
    free(arr);
    getchar();
    arr = (long long*)malloc(sizeof(long long) * n);
    return 0;
}