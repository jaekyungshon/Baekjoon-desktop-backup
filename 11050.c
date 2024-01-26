// Combination

#include <stdio.h>

int main(){
    int n,k;
    scanf("%d %d", &n, &k);

    int u=1,d=1;
    for(int i=1; i<=n; i++){
        u*=i;
    }
    for(int i=1; i<=k; i++){
        d*=i;
    }
    for(int i=1; i<=n-k; i++){
        d*=i;
    }
    printf("%d", (int)(u/d));
    return 0;
}