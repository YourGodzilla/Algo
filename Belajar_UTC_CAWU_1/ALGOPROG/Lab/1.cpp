#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

char playerName[100][50];
int playerAge[100];
int playerRating[100];
char playerCountry[100][10];
int playerPrice[100];

int counter = 0;

void printMenu();
void menu1();
void menu2();
void menu3();
void menu4();

void view();

int nextInt();
void enterToContinue();

int main () {
    int input  = -1;
    do {
        system("clear");
        printMenu();
        printf(">> ");
        input = nextInt();

        switch (input) {
            case 1:
                menu1();
                break;
            case 2:
                menu2();
                break;
            case 3:
                menu3();
                break;
            case 4:
                menu4();
                return 0;
        }
    } while (1);
}

void printMenu() {
    puts("==================================");
    view();
    puts("tranferMrkLt");
    puts("==================================");
    puts("1. Create Profile");
    puts("2. Delete Profile");
    puts("3. Update Player");
    puts("4. Exit");
}

void menu1() {
    // Input name
    do {
        printf("Player Name [More than 5 Character] : ");
        scanf("%[^\n]", playerName[counter]); getchar();
    } while (strlen(playerName[counter])<=5);

    // Input Age
    do {
        printf("Player Age [More than or equals 18 years old and less than 50 years old] : ");
        playerAge[counter] = nextInt();
    } while (playerAge[counter]<18 || playerAge[counter]>=50);

    // Player Market Rating
    do {
        printf("Player market rating [1 - 100] : ");
        playerRating[counter] = nextInt();
    } while (playerRating[counter]<1 || playerRating[counter]>=100);

    // Player Country
    do {
        printf("Player Country [Must be 'Spain', 'England', 'Argentina'] : ");
        scanf("%s", playerCountry[counter]); getchar();
    } while (strcmp(playerCountry[counter], "Spain")!=0 && strcmp(playerCountry[counter], "England")!=0 && strcmp(playerCountry[counter], "Argentina")!=0);

    // Player Price
    srand(time(NULL));
    playerPrice[counter] = playerRating[counter] * (rand() % 1000) * 120;

    // Output
    printf("new Player Information\n");
    printf("==================================\n");
    printf("Name : %s\n", playerName[counter]);
    printf("Age : %d\n", playerAge[counter]);
    printf("Rating : %d\n", playerRating[counter]);
    printf("Country : %s\n", playerCountry[counter]);
    printf("Market Price : Rp %d\n", playerPrice[counter]);

    counter++;
    puts("Successfully Created a New Player");
    enterToContinue();
}

void menu2() {
    view();

    int choice = 0;
    do {
        printf("Please enter number index to be deleted 1 - %d : ", counter);
        choice = nextInt();
    } while (choice < 1 || choice == counter+1);
    int index = choice - 1;

    for (int i = index;i < counter;i++) {
        strcpy(playerName[i], playerName[i+1]);
        playerAge[i] = playerAge[i+1];
        playerRating[i] = playerRating[i+1];
        strcpy(playerCountry[i], playerCountry[i+1]);
        playerPrice[i] = playerPrice[i+1];
    }
    counter--;
    puts("Successfully Deleted a Player");
    enterToContinue();
}

void menu3() {
    view();

    int choice = 0;
    do {
        printf("Please enter number index to be update 1 - %d : ", counter);
        choice = nextInt();
    } while (choice < 1 || choice == counter+1);
    int index = choice - 1;

    char tempName[20];
    int tempAge;
    int tempRating;
    char tempCountry[100];
    int tempPrice;

    // Input name
    do {
        printf("Player Name [More than 5 Character] : ");
        scanf("%[^\n]", tempName); getchar();
    } while (strlen(tempName)<=5);

    // Input Age
    do {
        printf("Player Age [More than or equals 18 years old and less than 50 years old] : ");
        tempAge = nextInt();
    } while (tempAge<18 || tempAge>=50);

    // Player Market Rating
    do {
        printf("Player market rating [1 - 100] : ");
        tempRating = nextInt();
    } while (tempRating<1 || tempRating>=100);

    // Player Country
    do {
        printf("Player Country [Must be 'Spain', 'England', 'Argentina'] : ");
        scanf("%s", tempCountry); getchar();
    } while (strcmp(tempCountry, "Spain")!=0 && strcmp(tempCountry, "England")!=0 && strcmp(tempCountry, "Argentina")!=0);

    // Player Price
    srand(time(NULL));
    tempPrice = tempRating * (rand() % 1000) * 120;

    // Output
    printf("new Player Information\n");
    printf("==================================\n");
    printf("Name : %s\n", tempName);
    printf("Age : %d\n", tempAge);
    printf("Rating : %d\n", tempRating);
    printf("Country : %s\n", tempCountry);
    printf("Market Price : Rp %d\n", tempPrice);

    strcpy(playerName[index], tempName);
    playerAge[index] = tempAge;
    playerRating[index] = tempRating;
    strcpy(playerCountry[index], tempCountry);
    playerPrice[index] = tempPrice;

    puts("Successfully Updated a Player");
    enterToContinue();
}

void menu4() {
    puts("Thank you for Using Our Program");
    enterToContinue();
}

void view() {
    if(counter==0) {
        puts("No Player Infomation Available...");
        puts("==================================");
    }

    for (int i = 0; i < counter; i++) {
        printf("Player Number %d\n", i+1);
        printf("Name : %s\n", playerName[i]);
        printf("Age : %d\n", playerAge[i]);
        printf("Rating : %d\n", playerRating[i]);
        printf("Country : %s\n", playerCountry[i]);
        printf("Market Price : Rp %d\n", playerPrice[i]);
        printf("==================================\n");
    }
}

int nextInt() {
    int input;
    scanf("%d", &input);
    getchar();
    return input;
}

void enterToContinue() {
    puts("Enter to Continue...");
    getchar();
    return;
}