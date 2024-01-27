// Sum to All of Input Num

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, sum=0;
    scanf("%d", &n);
    char* l = (char*)malloc(sizeof(char)*n);
    scanf("%s", l);

    for(int i = 0; i < n; i++){
        int t = l[i] - '0';
        if(t == 0){
            continue;
        }
        sum += t;
    }
    
    printf("%d\n", sum);
    free(l);
    return 0;
}