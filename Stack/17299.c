// 17299 in Stack - Level "Gold 3"

#include <stdio.h>
#include <stdlib.h>
#define MAX_NUMBER 1000001

typedef int element;
typedef struct StackType{
    element arr[MAX_NUMBER];
    int top;
}StackType;

StackType* create(){
    return (StackType*)malloc(sizeof(StackType));
}
void init(StackType* s){
    s->top=-1;
}
int isEmpty(StackType* s){
    return (s->top==-1);
}
int isFull(StackType* s){
    return (s->top==MAX_NUMBER-1);
}
void push(StackType* s, element item){
    if(isFull(s)) return;
    s->arr[++(s->top)]=item;
}
element pop(StackType* s){
    if(isEmpty(s)) {
        return -1;
    }
    element tmp=s->arr[(s->top)--];
    return tmp;
}
element peek(StackType* s){
    if(isEmpty(s)) return (element)-1;
    return s->arr[s->top];
}

int main(){
    int* A, *ans, n;
    int FA[MAX_NUMBER];
    StackType* stk;

    scanf("%d",&n);
    A=(int*)malloc(sizeof(int)*n);
    ans=(int*)malloc(sizeof(int)*n);
    stk=create(); init(stk);

    for(int i=0; i<n; i++){
        scanf("%d",&A[i]);
        FA[A[i]]++;
    }

    for(int i=0; i<n; i++){
        while(!isEmpty(stk) && FA[A[peek(stk)]] < FA[A[i]]){
            element tmp=pop(stk);
            ans[(int)tmp]=A[i];
        }
        push(stk,(element)i);
    }

    while(!isEmpty(stk)){
        element tmp=pop(stk);
        ans[(int)tmp]=-1;
    }

    for(int i=0; i<n; i++){
        printf("%d ",ans[i]);
    }
}