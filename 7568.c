// Dungchi

#include <stdio.h>
#include <stdlib.h>

typedef struct NumType{
    int x;
    int y;
}NumType;

NumType* init(NumType* l, int n){
    for(int i=0; i<n; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        l[i].x = a;
        l[i].y = b;
    }
    return l;
}

int* check(NumType* l, int n){
    int* rank = (int*)malloc(sizeof(int)*n);
    for(int i = 0; i < n; i++){
        rank[i] = 1;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((l[i].x != l[j].x) && (l[i].y != l[j].y)){
                if((l[i].x > l[j].x) && (l[i].y > l[j].y)){
                    rank[j]++;
                }
            }
        }
    }
    return rank;
}

int main(){
    int testCase;
    scanf("%d", &testCase);

    NumType* list = (NumType*)malloc(sizeof(NumType)*testCase);
    list = init(list, testCase);
    int* r = check(list, testCase);

    for(int i = 0; i < testCase; i++){
        printf("%d ", r[i]);
    }
    free(r);
    free(list);
    return 0;
}