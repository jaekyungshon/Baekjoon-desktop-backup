// Im happy

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);

    int t=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(t==k) {
                printf("%d %d",i,j);
                return 0;
            }
            t++;
        }
    }
}