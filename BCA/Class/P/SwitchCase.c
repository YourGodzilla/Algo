#include <stdio.h>

int main () {
    char menu;
    printf("PPTI Library\n");
    printf("A. Insert new book\n");
    printf("B. Delete book\n");
    printf("C. Exit\n");
    printf("Insert Menu: ");
    scanf("%c", &menu);

    switch (menu)
    {
    case 'A':
        //tampilkan halaman insert
        printf("Insert book\n");
        break;
    case 'B':
        //tampilkan menu delete
        printf("Delete book\n");
        break;
    case 'C':
        //tampilkan exit
        printf("Exit\n");
        break;
    }
}