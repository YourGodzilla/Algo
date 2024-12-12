#include<stdio.h>

int main(){
    int n;
    scanf(" %i", &n);
    for(int i=0; i<n; i++){
        int x;
        long int sum=0;
        scanf(" %i", &x);
        for(int j=0; j<x; j++){
            long int b;
            scanf(" %li", &b);
            sum+=b;
        }printf("Case #%i: %li\n", i+1,sum);
    }
}