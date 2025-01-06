#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define gc getchar();

void savefile();
void loadfile();

void printmenu();
void printevent();
void enter();

void menu1();
void menu2();
void menu3();

typedef struct {
    char id[10];
    char event[100];
    char name[100];
    char idea[100];
} item;

item team[1000];
int teamCount = 0;

int main() {
    int choice = -1;
    do {
        printmenu();
        do {
            printf(">> ");
            scanf("%d", &choice); gc
        } while (choice < 1 || choice > 4);
        
        switch (choice) {
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
                puts("Thank you for using our program");
                return 0;
        }
    } while (1);
    return 0;
}

void savefile() {
    FILE *file = fopen("list_team.txt", "w");

    if (file == NULL) {
        puts("Error Loading File");
        enter();
        return;
    }

    for (int i = 0; i < teamCount; i++) {
        fprintf(file, "%s|%s|%s|%s\n", team[i].id, team[i].name, team[i].idea, team[i].event);
    }

    fclose(file);
}

void loadfile() {
    FILE *file = fopen("list_team.txt", "r");

    if (file == NULL) {
        puts("Error Loading File");
        enter();
        return;
    }

    teamCount = 0;

    while (fscanf(file, "%[^|]|%[^|]|%[^|]|%[^\n]\n", team[teamCount].id, team[teamCount].name, team[teamCount].idea, team[teamCount].event) != EOF) {
        teamCount++;
    }

    fclose(file);
}

void printmenu() {
    system("clear");
    loadfile();
    puts("Coding Competition");
    puts("==================");
    puts("1. Register Team");
    puts("2. View All Registered Teams");
    puts("3. Delete Registered Teams");
    puts("4. Exit");
    puts("==================");
}

void printevent() {
    puts("1. Hackaton Heroes");
    puts("2. TechHive");
    puts("3. DevQuest");
    puts("4. DevSprint");
    puts("5. HackTech Rumble");
}

void enter() {
    printf("Press ENTER to continue..."); gc
}

void merge(item team[], int left,int mid, int right) {
    int i = left, j = mid+1, k = left;
    item temp[right+5];

    while (i <= mid && j <= right) {
        if (strcmp(team[i].name , team[j].name) > 0) {
            temp[k] = team[i];
            k++;
            i++;
        } else {
            temp[k] = team[j];
            k++;
            j++;
        }
    }

    while (i <= mid) {
        temp[k] = team[i];
        k++;
        i++;
    }

    while (j <= right) {
        temp[k] = team[j];
        k++;
        j++;
    }

    for (int i = left; i < right; i++) {
        team[i] = temp[i];
    }
}

void sort(item team[], int left, int right) {
    if (left <= right) return;

    int mid = left + (right - left) / 2;

    sort(team, left, right);
    sort(team, mid+1, right);
    merge(team, left, mid, right);
}

void menu2() {
    if (teamCount == 0) {
        puts("There is no team registered yet...");
        enter();
    }

    for (int i = 0; i < teamCount; i++) {
        printf("No. %d\n", i + 1);
        printf("Team ID : %s\n", team[i].id);
        printf("Team Name : %s\n", team[i].name);
        printf("Idea : %s\n", team[i].idea);
        printf("Event Name : %s\n", team[i].event);
        puts("=======================");
	}

    enter();
}

void menu1() {
    srand(time(NULL));
    item newteam;

    // 
    printevent();
    do {
        printf("Choose Event : ");
        scanf("%[^\n]", newteam.event); gc
    } while (strcmp(newteam.event, "Hackaton Heroes") != 0 && strcmp(newteam.event, "TechHive") != 0 && strcmp(newteam.event, "DevQuest") != 0 && strcmp(newteam.event, "DevSprint") != 0 && strcmp(newteam.event, " Hacktech Rumble") != 0);

    // name
    do {
        printf("Input team name : ");
        scanf("%[^\n]", newteam.name); gc
    } while (strlen(newteam.name) <= 5);

    // idea
    int flag = 0;
	int count;
	do{
		printf("Input teams Idea: ");
		scanf("%[^\n]", newteam.idea); gc
		for(int i = 0; i < strlen(newteam.idea); i++){
			if(newteam.idea[i] == ' '){
				count++;
			}
		}
		if(count != 0){
			flag = 1;
		}
	}while(flag == 0);

    // id
    sprintf(newteam.id, "TI%d%d%d", rand() % 10, rand() % 10, rand() % 10);

    sort(team, 0, teamCount-1);
    team[teamCount++] = newteam;
    savefile();

    puts("Register Succesfully...");
    enter();
}


void menu3() {
    menu2();
    char input[10];

    printf("Input team ID : ");
    scanf("%[^\n]", input); gc

    int flag = 0, idx = -1;
    for (int i = 0; i < teamCount; i++) {
        if (strcmp(input, team[i].id) == 0) {
            flag = 1;
            idx = i;
            break;
        }
    }

    
    teamCount--;
    savefile();

    puts("Delete Succesfully...");
    enter();
}