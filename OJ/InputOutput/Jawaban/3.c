#include <stdio.h>

int main(){
	char N[105];
	int U;
	char A[10];
	scanf("%[^\n]", N);
	scanf("%s %d", &A, &U);
	printf("Name: %s\n", N);
	printf("NIS: %s\n", A);
	printf("Age: %d\n", U);
	return 0;
}
