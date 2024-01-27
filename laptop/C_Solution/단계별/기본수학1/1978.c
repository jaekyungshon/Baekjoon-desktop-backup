// Prime Number

#include <stdio.h>
#include <math.h>

int main(){
    int n, cnt=0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int t, flag=1;
        scanf("%d", &t);
        if(t==1) continue;
        for(int j = 2; j < t; j++){
            if(t % j == 0){
                flag=0;
                break;
            }
        }
        if(flag) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}