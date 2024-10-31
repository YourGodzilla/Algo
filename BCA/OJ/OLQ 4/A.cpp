// #include <stdio.h>

// int main () {
//     unsigned long long n;
//     int t;

//     scanf("%d", &t);
//     for (int i = 1; i <= t; i++) {
//         scanf("%u", &n);
//         if (n%11==0) {
//             printf("Case #%d: Yeah\n", i);
//         } else if (n%11!=0) {
//             printf("Case #%d: Nah\n", i);
//         }
//     }
    
// }

#include <stdio.h>

int main () {
    char n[100005];
    int t;

    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        scanf("%s", n);
        int temp = 0;
        for (int j = 0; n[j] != '\0'; j++) {
            temp = (temp * 10 + (n[j] - '0')) % 11;
        }
        if (temp==0) {
            printf("Case #%d: Yeah\n", i);
        } else {
            printf("Case #%d: Nah\n", i);
        }
    }
    
}

// cara Dosen
#include <stdio.h>
#include <string.h>

char n[100005];

int main () {
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        scanf("%s", n);
        int num = 0;
        int l = strlen(n);
        for (int i = 0; i < l; i++)
        {
            num += n[i] - '0';
            num %= 11;
            num * 10; // untuk menggeser ke kiri
        }
        if (num==0) {
            printf("Case #%d: Yeah\n", tc+1);
        } else {
            printf("Case #%d: Nah\n", tc+1);
        }
    }
    

    return 0;
}