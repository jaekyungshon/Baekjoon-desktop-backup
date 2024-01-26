#include <stdio.h>

int binary(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    else{
        int d=binary(n/2);
        printf("%d",d);
        return n%2;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",binary(n)%2);
    return 0;
}