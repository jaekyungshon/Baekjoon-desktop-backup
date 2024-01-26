// Recursion: 23250

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cnt=0;

void hanoi_tower(int n, int from, int tmp, int to, int k){
    if(n==1){
        printf("%d %d\n",from,to);
    }
    else{
        hanoi_tower(n-1,from,to,tmp,k);
        printf("%d %d\n",from,to);
        hanoi_tower(n-1,tmp,from,to,k);
    }
}

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    hanoi_tower(n,1,2,3,k);
    printf("%d\n",(long long int)pow(2,60)-1);
}