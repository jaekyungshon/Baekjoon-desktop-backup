// Plus Cycle

#include <stdio.h>
#include <math.h>

int main(void){
    int tmp, n, cnt=0;
    scanf("%d", &tmp);
    n = tmp;
    do{
        tmp = ((tmp % 10) * 10 + ((((tmp / 10)+(tmp % 10)) % 10)));
        cnt++;
    }while(n != tmp);
    printf("%d", cnt);
    return 0;
}