// Length to words

#include <stdio.h>

int main(){
    char l[100];
    int n=0;
    scanf("%s", l);

    for(int i=0; l[i]!='\0'; i++){
        n++;
    }
    printf("%d", n);
    return 0;
}