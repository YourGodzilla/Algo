#include <stdio.h>
#include <string.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c); getchar();

    char arr[205][205];
    for (int i = 0; i < r; i++) {
        char temp[205];
        scanf("%s", temp); getchar();

        for (int j = 0; j < c; j++) {
            for (int k = 0; k < c-1; k++) {
                if (temp[k] > temp[k+1]) {
                    char sortTemp = temp[k];
                    temp[k] = temp[k+1];
                    temp[k+1] = sortTemp;
                }
            }
        }
        strcpy(arr[i], temp);
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r-1; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                char stringTemp[205];   
                strcpy(stringTemp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], stringTemp);
            }
        }
    }

    for (int i = r - 1; i >= 0; i--) {
        printf("%s\n", arr[i]);
    }
    
    return 0;
}