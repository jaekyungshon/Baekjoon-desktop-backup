// Movie Director

#include <stdio.h>
#include <math.h>
#define True 1
#define False 0

int check(int num){
    for(int i = 0; i < 10; i++){
        if(num / (int)pow(10, i) % 1000 == 666){
            return True;
        }
    }
    return False;
}

int main(){
    int n,num=666,cnt=1;
    scanf("%d", &n);

    while(True){
        int flag = check(num);
        if(flag == True){
            if(cnt==n) break;
            else cnt++;
        }
        num++;
    }
    printf("%d", num);
    return 0;
}