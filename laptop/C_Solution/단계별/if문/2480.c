// Random 3

#include <stdio.h>
#define MAX(x,y) (x>=y ? x:y)
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && a==c){
        printf("%d",10000+a*1000);
    }
    else if(a==b && a!=c){
        printf("%d",1000+a*100);
    }
    else if(b==c && a!=b){
        printf("%d",1000+b*100);
    }
    else if(a==c && a!=b){
        printf("%d",1000+a*100);
    }
    else{
        int max=MAX(a,b);
        max=MAX(max,c);
        printf("%d",max*100);
    }
    return 0;
}