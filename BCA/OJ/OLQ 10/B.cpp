#include <stdio.h>
#include <string.h>

int binarySearch(char arr[][100], int n, char *x) {
    int left  = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;

        int compare = strcmp(arr[mid], x);

        if (compare == 0) return mid; 
        else if (compare < 0) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int n, x;
    scanf("%d %d", &n, &x);

    char kamus[n][100];
    for (int i = 0; i < n; i++) {
        scanf("%s", kamus[i]);
    }

    char findKata[100];
    scanf("%s", findKata);

    int index = binarySearch(kamus, n, findKata);

    int page;
    if (index == -1) page = 0;
    else page = (index / x) + 1;

    printf("%d\n", page);
    
    return 0;
}