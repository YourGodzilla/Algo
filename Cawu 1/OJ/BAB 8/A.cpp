#include <stdio.h>
#include <string.h>

typedef struct {
    char singkatan[105];
    char kepanjangan[105];
} Data;


char* linearSearch(Data arr[], int n, char* find) {
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i].singkatan, find) == 0) {
            return arr[i].kepanjangan;
        }
    }
    return NULL;
}

int main() {
    FILE *file = fopen("testdata.in", "r");
    Data data[105];

    int t;
    fscanf(file, "%d\n", &t);

    for (int i = 1; i <= t; i++) {
        fscanf(file, "%[^#]#%s\n", data[i].singkatan, data[i].kepanjangan);
    }

    int tc;
    fscanf(file, "%d\n", &tc);

    for (int i = 0; i < tc; i++) {
        char kata[105];
        fscanf(file, "%[^\n]\n", kata);

        int l = strlen(kata);

        char temp[105] = "";
        int counter = 0;

        printf("Case #%d:\n", i);

        for (int j = 0; j <= l; j++) {
            if (kata[j] == ' ' || kata[j] == '\0') {
                temp[counter] = '\0';
                // linearSearch(data, t, singkatan);
            }
        }
    }
    
    return 0;
}