#include <stdio.h>

int main(){
	int N, K;
	scanf("%d %d", &N, &K); 
	// case 1
	for (int j=0; j<N; j++){ //baris
		for (int k=0; k<N; k++){ // kolom
			printf("#");
		} printf("\n");
	}
	printf("\n");
	
	for (int j=0; j<N; j++){
		if ((j+1)% K==0){
			for(int k=0; k<N; k++){
				printf("#");
			}
		}
		else{
			for(int k=0; k<=N-1; k++){
				printf(".");
			} 
		}
		printf("\n");
	}
	printf("\n");
	
	for (int j=0; j <= N-1; j++){
		for (int k = 0; k<=N-1; k++){
			if ((k+1)%K==0){
				printf("#");
			}
			else{
				printf("."); 
			}
		} printf("\n");
	} 
	return 0;
}