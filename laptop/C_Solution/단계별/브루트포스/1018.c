// Repaint to Chess

#include <stdio.h>
#include <stdlib.h>
#define MIN(x,y) (x>y ? x:y)

int main(){
    int n,m,min=1000000;
    scanf("%d %d", &n, &m);

    char** b = (char**)malloc(sizeof(char*)*n);
    for(int i=0; i<n; i++){
        b[i] = (char*)malloc(sizeof(char)*m);
        scanf("%s", b[i]);
    }

    char** tmp =(char**)malloc(sizeof(char*)*8);
    for(int i=0; i<8; i++){
        tmp[i] = (char*)malloc(sizeof(char)*8);
    }

    int i=0,j=0;
    for(i; i<n-7; i++){
        for(j; j<m-7; j++){
            
        }
    }
    return 0;
}