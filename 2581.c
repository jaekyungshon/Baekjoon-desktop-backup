// Frime Number 2

#include <stdio.h>
#include <math.h>

int main(){
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);

    int sum=0, min=10001;
    for(int i = m; i <= n; i++){
        if(i == 1) continue;
        int flag = 1;
        for(int j = 2; j < (int)(sqrt((double)i)+1); j++){
            if(i%j==0){
                flag = 0;
                break;
            }
        }
        if(flag){
            sum += i;
            min = (min > i) ? i : min;
        }
    }
    if(sum == 0) printf("-1");
    else printf("%d\n%d", sum, min);
    return 0;
}