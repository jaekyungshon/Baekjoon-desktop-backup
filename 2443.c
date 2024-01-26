// Print to star-6

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int k=1;
    for(int i=n; i>0; i--){
        for(int j=0; j<n-i; j++){
            printf(" ");
        }
        for(int j=2*n-k; j>0; j--){
            printf("*");
        }
        puts("");
        k+=2;
    }
    return 0;
}