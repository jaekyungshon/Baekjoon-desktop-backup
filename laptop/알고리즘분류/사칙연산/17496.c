// StarHruche

#include <stdio.h>

int main(){
    int n,t,c,p;
    scanf("%d %d %d %d",&n,&t,&c,&p);
    printf("%d",(n%t>0 ? (n/t)*c*p:(n/t-1)*c*p));
    return 0;
}