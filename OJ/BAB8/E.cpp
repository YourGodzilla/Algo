#include <stdio.h>

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int A[], int low, int high) {
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (A[j] <= A[high]) {
            i++;
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[i+1], &A[high]);
    return i + 1;
}

void quickSort(int A[], int low, int high) {
    if (low < high) {
        int pivot = partition(A, low, high);
        quickSort(A, low, pivot - 1);
        quickSort(A, pivot + 1, high);
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for (int tc = 1; tc <= t; tc++) {
        int n;
        scanf("%d", &n);

        int m[1005];
        for (int i = 0; i < n; i++) {
            scanf("%d", &m[i]);
        }

        quickSort(m, 0, n - 1);

        int search;
        scanf("%d", &search);

        int index = 0;
        int search1 = -1;
        int flagHighest = 0;
        for (int i = 0; i < n; i++) {
            if (m[i] == search) {
                search1 = search;
                index = i;
                if (i == n - 1) {
                    flagHighest = 1;
                    m[i] = -1;
                }
                
            }
        }

        int search2 = -1;
        if (flagHighest) search2 = m[n - 2];

        if (!flagHighest && search1 != -1) {
            search2 = m[index+1];
        }

        printf("CASE #%d: ", tc);
        if (search1 > search2) printf("%d %d\n", search2, search1);
        else printf("%d %d\n", search1, search2);
    }
    return 0;
}