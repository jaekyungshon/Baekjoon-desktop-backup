// Break-Even Point

#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", b>=c ? -1 : a/(c-b)+1);
    return 0;
}