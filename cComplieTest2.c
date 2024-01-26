#include <stdio.h>
#define true 1
#define false 0

int main(){
    while(true){
        int a, b;
        scanf("%d %d", &a, &b);
        if(a == 0) exit(1);
        printf("%d\n", a+b);
    }
    return 0;
}