// Oven Clock

#include <stdio.h>

int main(){
    int h,m,c;
    scanf("%d %d",&h,&m);
    scanf("%d",&c);

    int mu=m+c;
    int M=mu%60;
    int H=h+(int)(mu/60);
    return 0;
}