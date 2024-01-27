// Rest

#include <stdio.h>
#define true 1
#define false 0

int main(void){
    int cnt[1000] = {false, };
    int answer = 0;

    for(int i = 0; i < 10; i++){
        int n;
        scanf("%d", &n);
        int tmp = n % 42;
        if(cnt[tmp] == true){
            continue;
        }
        else{
            cnt[tmp] = true;
            answer++;
        }
    }
    printf("%d\n", answer);
    return 0;
}