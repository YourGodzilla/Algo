#include <stdio.h>

int main(){
    int T, panjangArray, A[1001], B[1001], total; //  Declare variable
    scanf("%d", &T); // minta input tc
    for(int tc = 0; tc < T; tc++){ // tc bakal ngeloop sebanyak t - 1
        scanf("%d", &panjangArray);
        for (int i = 0; i < panjangArray; i++){
            scanf("%d", &A[i]);
        }
        for(int i = 0; i < panjangArray; i++){
            scanf("%d", &B[i]);
        }
        printf("Case #%d: ", tc+1);
        for(int i = 0; i < panjangArray; i++){
            total = A[i] - B[i];
            if(i == panjangArray - 1){
                printf("%d\n", total);
            } else {
                printf("%d ", total);
            }
        }  
    }
    return 0;
}