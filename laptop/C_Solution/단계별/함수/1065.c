// Hansu

#include <stdio.h>

int check(int a1, int a2, int a3){
    // Hansu Feature : 'Use to 'AP Gneral-Term' 
    if(a3 == a1+2*(a2-a1)) return 1;
    else return 0;
}

int checkHansu(int loop) {
    if(loop <= 99){
        return loop;
    }
    else{
        int cnt = 99;
        for(int i = 100; i <= loop; i++){
            // first, second, third
            int a1=i/100, a2=(i%100)/10, a3=(i%100)%10;
            if(i == 1000) break;
            else{
                int flag = check(a1, a2, a3);
                if(flag == 1) cnt++;
            }
        }
        return cnt;
    }
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d\n", checkHansu(n));
    return 0;
}