#include <stdio.h>

// GLOBAL VARIABELES
int A;
int B;

// return_type function_name(parameter, ...) {body}

int menu(); // membantu biar int main diatas
void handleMenu(int input);

void menu_arithmatical();
void menu_bitwise();

// Utilities -> Mengurangi Coding berulang-ulang
int nextInt(); 

int main () {
    int inp;
    do{
        inp = menu();
        handleMenu(inp);
    } while (inp!=4);

    printf("Bye Bye, terimakasih telah menggunakan program semoga lulus cawu 1\n");
    return 0;
}


void handleMenu(int input){
    switch (input)  {
        case 1: // menu insert value
            printf("A = ");
            A = nextInt();

            printf("B = ");
            B = nextInt();

            printf("Hasil A = %d dan Hasil B = %d\n", A, B);
            break;
        case 2: // menu arithmatic
            menu_arithmatical();

            break;
        case 3: // menu bitwise Operation
            menu_bitwise();

            break;
        default:
            break;
    }
}


int menu () {
    int inp;

    do {
        printf("1. Insert Values\n");
        printf("2. Arithmatical Operator\n");
        printf("3. Bitwise Operator\n");
        printf("4. Exit Program\n");
        printf(">> ");
        inp = nextInt();
    } while (!(inp>0 && inp<5)); //validasi input diluar menu
// ketika input benar, keluar dari loop input.
    return inp;
}

void menu_arithmatical(){
    int inp;

    do{
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Modulus\n");
        printf(">> ");
        inp = nextInt();

    } while (inp <= 0 || inp >= 6); // menggunakan OR ||

    switch (inp) {
        case 1:
            printf("%d + %d = %d\n", A, B ,A+B);
            break;
        case 2:
            printf("%d - %d = %d\n", A, B ,A-B);
            break;
        case 3:
            printf("%d / %d = %d\n", A, B ,A/B);
            break;
        case 4:
            printf("%d * %d = %d\n", A, B ,A*B);
            break;
        case 5:
            printf("%d % %d = %d\n", A, B ,A%B);
            break;
        
        default:
            break;
    }
}

void menu_bitwise(){

}

// Utilities
int nextInt () {
    int input;
    scanf("%d\n", &input);
    getchar();

    return input;
}