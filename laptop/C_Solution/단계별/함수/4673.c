// Self Number

#include <stdio.h>
#define false 0
#define true 1

int numList[10000] = {false, };

void check(){
    for(int i = 1; i < 10000; i++){
        if(i < 10){
            numList[i*2] = true;
        }
        else if(i < 100){
            numList[i+((i/10)+(i%10))] = true;
        }
        else if(i < 1000){
            numList[i+((i/100)+((i%100)/10)+((i%100)%10))] = true;
        }
        else if(i < 10000){
            numList[i+((i/1000)+((i%1000)/100)+(((i%1000)%100)/10)+((i%1000)%100)%10)] = true;
        }
    }
}

int main(void){
    check();
    for(int i = 1; i < 10000; i++){
        if(numList[i] == false){
            printf("%d\n", i);
        }
    }
    return 0;
}