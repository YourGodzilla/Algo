#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N; 
        scanf("%d", &N);

        int arr[N];
        long long tot = 0; 

        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
            tot += arr[i];
        }

        if (tot % 2 != 0) {
            printf("Case #%d: No\n", t);
        } else {
            long long tengah = 0;
            int temp = 0;

            for (int i = 0; i < N; i++) {
                tengah += arr[i];
                if (tengah == tot / 2) {
                    temp = 1;
                    break;
                }
            }

            if (temp) {
                printf("Case #%d: Yes\n", t);
            } else {
                printf("Case #%d: No\n", t);
            }
        }
    }

    return 0;
}