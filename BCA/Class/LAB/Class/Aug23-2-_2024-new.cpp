#include <stdio.h>
#include <string.h>

int main () {
    // //data_type variable_name[size];
    // //indexing  0  1  2  3  4
    // int n[5] = {1, 2, 3, 4, 5};
    // // printf("%d", n[2]);

    // for (int i = 0; i < 5; i++) {
    //     printf("%d\n", n[i]);
    // }
    
    // return 0;

    //string -> array of char
    //Array of string ->
    //size kiri -> kebawah
    // size kanan -> kesamping
    char stringArr[100][25];
    // stringArr[0] = "hello";


    // strcpy(destination, source);
    strcpy(stringArr[0],  "hello");
    printf("%c\n", stringArr[0][0]);
    strcpy(stringArr[1],  "world");
    strcpy(stringArr[2],  "aku");
    strcpy(stringArr[3],  "buffalo");

    for (int i = 0; i < 4; i++) {
        printf("%s\n", stringArr[i]);
    }
    


}