// Good Words

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100001

typedef char element;
typedef struct StackType{
    element data[MAX_SIZE];
    int top;
}StackType;

void init_stack(StackType* stk){
    stk->top=-1;
}

int is_empty(StackType* stk){
    return stk->top==-1;
}

int is_full(StackType* stk){
    return stk->top==MAX_SIZE-1;
}

void push(StackType* stk, element item){
    if(is_full(stk)) exit(1);
    stk->data[++(stk->top)]=item;
}

element pop(StackType* stk){
    if(is_empty(stk)) exit(1);
    return stk->data[(stk->top)--];
}

element peek(StackType* stk){
    if(is_empty(stk)) exit(1);
    return stk->data[stk->top];
}

int main(){
    int n,sum=0;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        StackType stk;
        char c[MAX_SIZE];
        
        init_stack(&stk);
        scanf("%s",c);

        for(int j=0; c[j]!='\0'; j++){
            if(is_empty(&stk)) push(&stk,c[j]);
            else if(peek(&stk)==c[j]) pop(&stk); // AA or BB
            else push(&stk,c[j]); // AB or BA
        }

        if(is_empty(&stk)) sum++; // ABBABB(AB->A->''->B->'')
    }
    printf("%d",sum);
}