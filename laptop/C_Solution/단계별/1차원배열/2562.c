// Max Index

#include <stdio.h>

int main(void){
    int nMax=-1, idx=-1;
    for(int i = 0; i < 9; i++){
        int n;
        scanf("%d", &n);
        if(n > nMax){
            nMax = n;
            idx = i;
        }
    }
    printf("%d\n%d", nMax, ++idx);
    return 0;
}