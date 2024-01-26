// Print to star -8

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("*");
        }
        for(int j=0; j<2*(n-i)-2; j++){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            printf("*");
        }
        puts("");
    }

    for(int i=n-1; i>=0; i--){
        for(int j=i; j>0; j--){
            printf("*");
        }
        for(int j=0; j<=2*(n-i)-1; j++){
            printf(" ");
        }
        for(int j=i; j>0; j--){
            printf("*");
        }
        puts("");
    }
    return 0;
}