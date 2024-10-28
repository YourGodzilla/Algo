#include <stdio.h>

int main () {
    int utsC,uasC,asgC,utsL,uasL,asgL;
    int cl,lab,fin;

    printf("Input your class UTS UAS and Assignment scores: ");
    scanf("%d %d %d", &utsC, &uasC, &asgC);
    printf("Input your lab UTS UAS and Assignment scores: ");
    scanf("%d %d %d", &utsL, &uasL, &asgL);

    cl = (50*uasC/100)+(30*utsC/100)+(20*asgC/100);
    lab = (40*uasL/100)+(30*utsL/100)+(30*asgL/100);
    fin = (80*cl/100)+(20*lab/100);

    printf("your final score is %d\n",fin);


    printf("Your final grade is ");
    if (fin>=85 && fin<=100) 
        printf("A\n");
    else if (fin>=75 && fin<=84)
        printf("B\n");
    else if (fin>=65 && fin<=74)
        printf("C\n");
    else if (fin>=50 && fin<=64)
        printf("D\n");
    else 
        printf("E\n");

    return 0;
}