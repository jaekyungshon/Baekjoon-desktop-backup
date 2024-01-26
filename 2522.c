// º°Âï±â -12

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++){
            printf(" ");
        }
        for(int j=0; j<i; j++){
            printf("*");
        }
        puts("");
    }

    for(int i=n-1; i>0; i--){
        for(int j=n-1-i; j>=0; j--){
            printf(" ");
        }
        for(int j=0; j<i; j++){
            printf("*");
        }
        puts("");
    }
    return 0;
}