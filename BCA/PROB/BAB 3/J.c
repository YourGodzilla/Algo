#include <stdio.h>

int main(){
	long long int x,y,k, a, b;
	scanf("%lld %lld %lld", &x, &y, &k);
	a = k-x;
	if(a <= 0){
		a = x-k;
	}
	else{
		a = k-x;
	}
	b = y-k;
	if(a == b){
		printf("%lld\n", a);
	}
	else{
		int i = -1;
		printf("%d\n", i);
	}
}