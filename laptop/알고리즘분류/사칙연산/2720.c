// Quick Change

#include <stdio.h>

int main(){
    int n;
    int c[4]={25,10,5,1};
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        int tmp;
        scanf("%d",&tmp);
        for(int i=0; i<4; i++){
            if(tmp==0) printf("0 ");
            else printf("%d ",tmp/c[i]);
            if(tmp>0) tmp%=c[i];
        }
        puts("");
    }
    return 0;
}