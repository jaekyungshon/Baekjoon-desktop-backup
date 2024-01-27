// BlackJack

#include <stdio.h>
#include <stdlib.h>
#define MAX(x,y)(x > y ? x : y)

int main(){
    int n,m,max=-1;
    scanf("%d %d", &n, &m);

    int* l = (int*)malloc(sizeof(int)*n);
    for(int i = 0; i < n; i++){
        int tmp;
        scanf("%d", &tmp);
        l[i] = tmp;
    }

    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k < n; k++){
                int tmp = l[i]+l[j]+l[k];
                if(tmp <= m){
                    max = MAX(tmp,max);
                }
            }
        }
    }
    printf("%d", max);
    free(l);
    return 0;
}
