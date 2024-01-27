// Time Card

#include <stdio.h>

typedef struct time{
    int data[6];
    int Apos;
    int Bpos;
}time;

int main(){
    time t[3];

    for(int i=0; i<3; i++){
        for(int j=0; j<6; j++){
            scanf("%d",&t[i].data[j]);
        }
        t[i].Apos=2;
        t[i].Bpos=5;
    }

    for(int i=0; i<3; i++){
        int ans[3];
        int idx=2;
        for(int j=0; j<3; j++){
            if(t[i].data[t[i].Bpos]<t[i].data[t[i].Apos]){
                t[i].data[t[i].Bpos-1]--;
                ans[idx]=60-(t[i].data[t[i].Apos]-t[i].data[t[i].Bpos]);
                t[i].Apos--;t[i].Bpos--;
            }
            else{
                ans[idx]=t[i].data[t[i].Bpos]-t[i].data[t[i].Apos];
                t[i].Apos--;t[i].Bpos--;
            }
            idx--;
        }
        
        for(int j=0; j<3; j++){
            printf("%d ",ans[j]);
        }
        puts("");
    }
    return 0;
}