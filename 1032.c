// Prompt

#include <stdio.h>
#include <stdlib.h>

void print(char answer[]){
    for(int i=0; answer[i]!='\0'; i++){
        printf("%c",answer[i]);
    }
}

int main(){
    int n;
    char s[50];
    scanf("%d", &n);
    scanf("%s", s);

    if(n==1){
        print(s);
    }
    else{
        for(int i=0; i<n-1; i++){
            char tmp[50];
            scanf("%s", tmp);
            for(int j=0; tmp[j]!='\0'; j++){
                if(s[j]!=tmp[j]) s[j]='?';
            }
        }
        print(s);
    }
    return 0;
}