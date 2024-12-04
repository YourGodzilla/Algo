#include <stdio.h>
#include <string.h>

typedef struct {
    char num[260];
    char name[260];
} Data;

char* linearSearch(Data arr[], int n, char* find) {
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i].num, find) == 0) {
            return arr[i].name;
        }
    }
    return NULL;
}

int main() {
    Data data[260];

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%s %[^\n]", data[i].num, data[i].name); getchar();
    }

    char numCaller[260];
    scanf("%[^\n]", numCaller); getchar();

    char numDesti[260];
    scanf("%[^\n]", numDesti); getchar();

    char* caller = linearSearch(data, t, numCaller);
    char* desti = linearSearch(data, t, numDesti);

    printf("%s is calling %s\n", caller, desti);
    return 0;
}