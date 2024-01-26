#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

int main(){
    while(true){
        int a, b;
        scanf("%d %d", &a, &b);
        if(a == 0) exit(0);
        printf("%d\n", a+b);
    }
    return 0;
}