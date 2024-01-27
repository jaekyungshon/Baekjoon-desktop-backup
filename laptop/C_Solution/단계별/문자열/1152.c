// Count to Words

#include <stdio.h>

int main(void){
    char s[1000000];
    scanf("%[^\n]s", s);

    int flag=0, cnt=0, i=0;
    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == ' '){
            if(flag != 0){
                cnt++;
            }
        }
        else{
            flag = 1;
        }
    }
    
    if((s[i-1] >= 65 && s[i-1] <= 90) || (s[i-1] >= 97 && s[i-1] <= 122)){
        printf("%d\n", cnt+1);
    }
    else{
        printf("%d\n", cnt);
    }
    return 0;
}