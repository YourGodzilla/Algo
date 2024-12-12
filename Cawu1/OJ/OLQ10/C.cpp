#include <stdio.h>
#include <string.h>

int binarySearch(char arr[][100], int n, char *x) {
    int left  = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;

        int compare = strcmp(arr[mid], x);

        if (compare == 0) return 1; 
        else if (compare < 0) left = mid + 1;
        else right = mid - 1;
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    char hero[n][100];
    for (int i = 0; i < n; i++) {
        scanf("%s", hero[i]);
    }

    char x[100];
    scanf("%s", x);

    if (binarySearch(hero, n, x)) printf("Found\n");
    else printf("Not Found\n");
    
    return 0;
}