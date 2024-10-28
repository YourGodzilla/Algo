#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

// attributes 
char playerName [1001][1001];
int playerAge[1001];
int playerRate[1001];
char playerCountry[1001][1001];
int playerPrice[1001];
char playerID[1001][1001];

int playerCount = 0;

// fungsi 
int nextInt();
void printMenu();
void enterToCont();

void menu1(); // create
void menu2(); //delete
void menu3(); // update

void view();


int main(){
	int choice=-1;
	do{
		view();
		printMenu();
		do{
			printf(">> ");
			choice = nextInt();
			if(choice < 1 || choice > 4){
				printf("Please input the correct choice\n");
			}
		} while(choice < 1 || choice > 4);
		
		switch (choice){
			case 1 :
				menu1();
				break;
			case 2:
				menu2();
				break;
			case 3:
				menu3();
				break;
			case 4:
				printf("Thank you for using this app\n");
				enterToCont();
				return 0;
		}
	}while(1);
}

void printMenu(){
	puts("Transfer Market");
	puts("===============");
	puts("1. Add player");
	puts("2. Delete player");
	puts("2. Update player");
	puts("4. Exit");
}

int nextInt(){
	int choice;
	scanf("%d", &choice); getchar();
	return choice;
}

void enterToCont(){
	printf("Press enter to continue......");
	getchar();
}

void menu1(){
	srand(time(NULL));
	char special[] = "!@#$&";
	for(int i = 0; i < 15; i++){
		char upper = rand()%26 + 'A';
		char lower = rand()%26 + 'a';
		char specialchar = special[rand()%5];
		char final[] = {upper, lower, specialchar};
		playerID[playerCount][i] = final[rand()%3];
	}
	
	do{
		printf("Player Name [More than 5 characters] : ");
		scanf("%[^\n]", playerName[playerCount]); getchar();
	}while(strlen(playerName[playerCount])<=5);
	
	do{
		printf("Player Age [more than or equel 18 or less than 50] : ");
		playerAge[playerCount] = nextInt();
	}while(playerAge[playerCount]<18 || playerAge[playerCount]>=50);

	do{
		printf("Player rating [more than or equel 1 or less than 100] : ");
		playerRate[playerCount] = nextInt();
	}while(playerRate[playerCount]<1 || playerRate[playerCount]>=100);

	do{
		printf("Player country [Spain | Argentina | England] : ");
		scanf("%s", playerCountry[playerCount]); getchar();
	}while(strcmp(playerCountry[playerCount], "Spain")!= 0 && strcmp(playerCountry[playerCount], "Argentina")!= 0
	&& strcmp(playerCountry[playerCount], "England")!= 0);		
	
	playerPrice[playerCount] = playerRate[playerCount] * rand()%1000 * 120;
	
	printf("New Player Information\n");
	printf("======================\n");
	printf("Id\t\t:\t%s\n", playerID[playerCount]);
	printf("Name\t\t:\t%s\n", playerName[playerCount]);
	printf("Age\t\t:\t%d\n", playerAge[playerCount]);
	printf("Rating\t\t:\t%d\n", playerRate[playerCount]);
	printf("Country\t\t:\t%s\n", playerCountry[playerCount]);
	printf("Market Price\t\t:\tRp. %d\n", playerPrice[playerCount]);
	
	char conf;
	do{
		printf("Are you sure want to add this data [y|n]: ");
		scanf("%c", &conf); getchar();
		if(conf != 'y' && conf != 'n'){
			printf("Input the correct choice\n");
		}
	}while(conf != 'y' && conf != 'n');
	
	if (conf == 'y'){
		playerCount++;
		printf("Player has been succesfuly add\n");
		enterToCont();
		return;
	}
	
	printf("Cancelled add player\n");
	enterToCont();
}

void menu2(){
	if(playerCount == 0){
		printf("There is no player to be deleted\n");
	}
	else{
		view();
		int choice;
		do{
			printf("Please enter number to be deleted [1 - %d] : ", playerCount);
			choice = nextInt();
		}while(choice < 1 || choice > playerCount+1);
		int index = choice-1;
		
		for(int i = index; i < playerCount; i++){
			strcpy(playerID[i], playerID[i+1]);
			playerAge[i]=playerAge[i+1];
			strcpy(playerName[i], playerName[i+1]);
			playerRate[i]=playerRate[i+1];
			strcpy(playerCountry[i], playerCountry[i+1]);
			playerPrice[i]=playerPrice[i+1];
		}
		
		playerCount--;
	}
}

void menu3(){
	if (playerCount == 0){
		printf("There is no player to be updated\n");
		enterToCont();
	}
	else{
		view();
		int choice;
		do{
			printf("Please enter number to be deleted [1 - %d] : ", playerCount);
			choice = nextInt();
		}while(choice < 1 || choice > playerCount+1);
		int index = choice-1;
		
		char nameTemp[1001];
		int ageTemp;
		int rateTemp;
		char countryTemp[1001];
		int priceTemp;	
		
	do{
		printf("Player Name [More than 5 characters] : ");
		scanf("%[^\n]", nameTemp); getchar();
	}while(strlen(nameTemp)<=5);
	
	do{
		printf("Player Age [more than or equel 18 or less than 50] : ");
		ageTemp = nextInt();
	}while(ageTemp<18 || ageTemp>=50);

	do{
		printf("Player rating [more than or equel 1 or less than 100] : ");
		rateTemp = nextInt();
	}while(rateTemp<1 || rateTemp>=100);

	do{
		printf("Player country [Spain | Argentina | England] : ");
		scanf("%s", countryTemp); getchar();
	}while(strcmp(countryTemp, "Spain")!= 0 && strcmp(countryTemp, "Argentina")!= 0
	&& strcmp(countryTemp, "England")!= 0);		
	
	priceTemp = rateTemp * rand()%1000 * 120;
	
	printf("New Player Information\n");
	printf("======================\n");
	printf("Id\t\t:\t%s\n", playerID);
	printf("Name\t\t:\t%s\n", nameTemp);
	printf("Age\t\t:\t%d\n", ageTemp);
	printf("Rating\t\t:\t%d\n", rateTemp);
	printf("Country\t\t:\t%s\n", countryTemp);
	printf("Market Price\t\t:\tRp. %d\n", priceTemp);
	
	char conf;
	do{
		printf("Are you sure want to add this data [y|n]: ");
		scanf("%c", &conf); getchar();
		if(conf != 'y' && conf != 'n'){
			printf("Input the correct choice\n");
		}
	}while(conf != 'y' && conf != 'n');
	
	if (conf == 'y'){
		strcpy(playerName[index], nameTemp);
		strcpy(playerCountry[index], countryTemp);
		playerAge[index] = ageTemp;
		playerRate[index] = rateTemp;
		playerPrice[index] = priceTemp;
		
		printf("Player have been succesfully been updated\n");
		enterToCont();
		return;
	}
	
	printf("Cancelled update player\n");
	enterToCont();
	}
}

void view(){
	if(playerCount == 0){
		printf("No player exist\n");
		printf("\n");
	}
	else{
		if (playerCount > 9){			
			for(int i = playerCount - 10; i < playerCount; i++){
				printf("| %d\t| %s\t| %s\t\t| %d\t| %d\t| %s\t| %d\t\t|\n", i+1, playerID[i], playerName[i], playerAge[i], playerRate[i], playerCountry[i], playerPrice[i]);
			}
			printf("\n");
		}
		else{
			for(int i = 0; i < playerCount; i++){
				printf("| %d\t| %s\t| %s\t\t| %d\t| %d\t| %s\t| %d\t\t|\n", i+1, playerID[i], playerName[i], playerAge[i], playerRate[i], playerCountry[i], playerPrice[i]);
			}
			printf("\n");			
		}
	}
}
