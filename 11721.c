// Print to String by 10

#include <stdio.h>

int main(){
    char s[100];
    scanf("%s", s);

    int cnt=1;
    for(int i = 0; s[i] != '\0'; i++){
        if(cnt % 10 == 0){
            printf("%c\n",s[i]);
        }
        else{
            printf("%c", s[i]);
        }
        cnt++;
    }
    return 0;
}