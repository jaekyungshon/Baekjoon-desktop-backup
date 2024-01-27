// Group Words

#include <stdio.h>

int main(){
    int n, cnt=0;
    scanf("%d", &n);
    char c = getchar();

    for(int i = 0; i < n; i++){
        char s[101];
        int num[123] = {0, };
        int flag = 1;
        scanf("%s", s);

        for(int j = 0; s[j] != '\0'; j++){
            if(num[(int)s[j]] > 0){
                if(s[j-1] != s[j]){
                    flag = 0;
                    break;
                }
            }
            else{
                num[(int)s[j]]++;
            }
        }
        if(flag == 1) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}