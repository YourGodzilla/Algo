#include<stdio.h>

int main(){
    double a,b,c,d;
    int n;
    scanf(" %i",&n);
    for(int i=0; i<n; i++){
        scanf(" %lf %lf %lf %lf", &a,&b,&c,&d);
        double res=2*(a+(2*(b/2))+(2*(c/3))+d/4);
        printf("%.2lf\n", res);
    }
}