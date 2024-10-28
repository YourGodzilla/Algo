#include <stdio.h>

struct student
{
    char name[50];
    int age;
};

void display(struct student s) {
    printf("\nDisplaying information\n");
    printf("Name: %s",s.name);
    printf("\nRoll: %d", s.age);
}

int main() {
    struct student s1;

    printf("Enter Name: ");
    scanf("%[^\n]%*c",s1.name);

    printf("Enter Age: ");
    scanf("%d",&s1.age);

    display(s1);

    return 0;
}

