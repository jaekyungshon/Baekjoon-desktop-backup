// Escape to SQ

#include <stdio.h>
#define MIN(x,y) (x > y ? y : x)

int main(){
    int x,y,w,h;
    scanf("%d %d %d %d", &x,&y,&w,&h);
    printf("%d\n",MIN(MIN(x,w-x),MIN(y,h-y)));
    return 0;
}