// Fibonachi

#include <stdio.h>

int n;

int Fibonachi(int a, int b, int cnt){
    if(n==0) return a;
    else if(n==1 || cnt==n) return b;
    else Fibonachi(b,a+b,cnt+1);
}

int main(){
    scanf("%d", &n);
    printf("%d", Fibonachi(0,1,1));
    return 0;
}