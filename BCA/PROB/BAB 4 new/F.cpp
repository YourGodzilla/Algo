#include <stdio.h>

int main(){
	int N, K;
	scanf("%d %d", &N, &K); 
	// case 1
	for (int i=0; i<N; i++){ //baris
		for (int j=0; j<N; j++){ // kolom
			printf("#");
		} printf("\n");
	}
	printf("\n");
	
	for (int i=0; i<N; i++){
		if ((i+1)% K==0){
			for(int j=0; j<N; j++){
				printf("#");
			}
		}
		else{
			for(int j=0; j<=N-1; j++){
				printf(".");
			} 
		}
		printf("\n");
	}
	printf("\n");
	
	for (int i=0; i <= N-1; i++){
		for (int j = 0; j<=N-1; j++){
			if ((j+1)%K==0){
				printf("#");
			}
			else{
				printf("."); 
			}
		} printf("\n");
	} 
	return 0;
}