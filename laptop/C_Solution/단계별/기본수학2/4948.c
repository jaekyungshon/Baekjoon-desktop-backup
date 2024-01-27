#include <stdio.h>
#include <math.h>

int list[246913]={0, };

void Init(){
    for(int i=2; i<(int)(sqrt((double)246913)+1); i++){
        for(int j=i*i; j<246913; j+=i){
            list[j]=1;
        }
    }
}

int Check(int c){
    int cnt=0;
    for(int i=2; i<=246913; i++){
        if(list[i]==0 && i>c && i<=2*c) cnt++;
        else if(i>2*c) break;
    }
    return cnt;
}

int main(){
    Init();
    while(1){
        int n;
        scanf("%d", &n);
        if(n==0)break;
        printf("%d\n",Check(n));
    }
    return 0;
}