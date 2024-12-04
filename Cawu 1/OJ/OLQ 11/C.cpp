#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	
	int arr[1005];
	arr[0] = 0;
	arr[1] = 1;
	
	if(t == 1){
		printf("%d\n", arr[0]);
		return 0;
	}
    
    if(t == 2){
		printf("%d %d\n", arr[0], arr[1]);
		return 0;
	}
	
	for (int i = 2; i < t; i++) {
        if (i % 3 == 0) arr[i] = 10;
        else arr[i] = arr[i - 1] + arr[i - 2];
    }
    
    for (int i = 0; i < t; i++) {
        if (i == t - 1) printf("%d", arr[i]);
        else printf("%d ", arr[i]);
    }
	printf("\n");
	
	return 0;
}