// Bee Home

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, cnt=1, x=6;
    scanf("%d", &n);

    if(n == 1){
        printf("%d\n", 1);
        exit(0);
    }
    while(1){
        cnt += x;
        if(cnt >= n){
            printf("%d\n", x/6+1);
            break;
        }
        x += 6;
    }
    return 0;
}