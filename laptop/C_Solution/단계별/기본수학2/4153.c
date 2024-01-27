// Pitaghoras

#include <stdio.h>
#define MIN(x,y) (x <= y ? x : y)
#define MAX(x,y) (x >= y ? x : y)

int main(){
    while(1){
        int a,b,c,x,y,z;
        scanf("%d %d %d", &a, &b, &c);
        if(a==0) break;

        x = MIN(MIN(a,b),MIN(b,c));
        z = MAX(MAX(a,b),MAX(b,c));
        y = (a+b+c)-(x+z);
        
        if(x*x+y*y==z*z) printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}