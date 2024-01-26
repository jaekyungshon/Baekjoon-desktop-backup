// Self Number

#include <stdio.h>
#define true 1
#define false 0

int numList[10000] = {false, };

void check(int n){
    numList[n] = true;

    if(n >= 10000) return;
    else if(n < 10){
        check(n*2);
    }
    else if(n < 100){
        check(n+((n/10)+(n%10)));

    }
    else if(n < 1000){
        check(n+((n/100)+((n%100)/10)+((n%100)%10)));
    }
    else if(n < 10000){
        check(n+((n/1000)+((n%1000)/100)+(((n%1000)%100)/10)+(((n%1000)%100)%10)));
    }
}

int main(void){
    check(1);
    int cnt = 3;
    for(int i = 1; i < 10000; i++){
        printf("%d\n", numList[i]);
    }
    return 0;
}