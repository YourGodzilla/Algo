#include <stdio.h>

void cabang(int A[105], int N, int index, int sum) {
    int banyakCabang = 0;
    sum += A[index];
    if (index * 2 <= N) {
        cabang(A, N, index * 2, sum);
        banyakCabang++;
    }
    if (index * 2 + 1 <= N) {
        cabang(A, N, index * 2 + 1, sum);
        banyakCabang++;
    }
    if (banyakCabang == 0) printf("%d\n", sum);
}

int main() {
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++) {
        int N;
        scanf("%d", &N);

        int A[105];
        for (int i = 1; i <= N; i++) {
            scanf("%d", &A[i]);
        }
        
        int index = 1, sum = 0;
        printf("Case #%d:\n", tc);
        cabang(A, N, index, sum);
    }
    return 0;
}