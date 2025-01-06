#include <stdio.h>

int main(){
	int tc, n, arr[105];
	scanf("%d", &tc);
	for(int i = 1;  i<=tc; i++){
		scanf("%d", &n);
		for(int a = 0; a<n; a++){
			scanf("%d", &arr[a]);
		}
		int count = 0; // untuk 3 ON
		for(int a = 0; a<n; a++){
			for(int b = a+1; b<n; b++){
				int res = arr[a] ^ arr[b];
				int x = 0;
				while(res > 0){
					if(res % 2 == 1){
						x++;
						if(x == 3){
							count++;
							break;
						}
					}
					res >>=1;
				}
			}
		}
		printf("Case #%d: %d %d\n", i, count, (n*(n - 1) / 2) - count);
	}
	return 0;
}