#include <stdio.h>
#include <string.h>

int main () {
    int t;
    char s[100001];

    scanf("%d", &t);

    for (int tc = 1; tc <= t; tc++) {
        scanf("%s", s);
        int l = strlen(s);
        int flag[27] ={0};
        int counter = 0;
        for (int i = 0; i < l; i++) {
            if(flag[s[i]-'a'] == 0) {
                flag[s[i]-'a'] = 1;
            }
        }
    
        for(int i = 0; i < l; i++){
            if (flag[i]==1){
                counter++;
            }
        }
        if (counter%  2 != 0) {
            printf("Case #%d: Ewwww\n", tc);
        } else {
            printf("Case #%d: Yay\n", tc);
        }
    }
}