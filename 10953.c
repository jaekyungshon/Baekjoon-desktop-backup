// A+B-6

#include <stdio.h>

int main(){
    int loop;
    scanf("%d", &loop);

    for(int i=0; i<loop; i++){
        int a,b;
        scanf("%d,%d", &a,&b);
        printf("%d\n",a+b);
    }
    return 0;
}