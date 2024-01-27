// Stick

#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100000

typedef int element;
typedef struct {
    element stack[MAX_STACK_SIZE];
    int top;
}StackType;

void init_stack(StackType* s){
    s->top=-1;
}
int is_empty(StackType* s){
    return s->top==-1;
}
int is_full(StackType* s){
    return s->top==MAX_STACK_SIZE-1;
}
void push(StackType* s, element item){
    if(is_full(s)) return;
    s->stack[++(s->top)]=item;
}
element pop(StackType* s){
    if(is_empty(s)) exit(1);
    return s->stack[(s->top)--];
}
element peek(StackType* s){
    if(is_empty(s)) exit(1);
    return s->stack[(s->top)];
}

int main(){
    StackType s;
    int n,tmp,cnt=1; // Be albe to look to first stick.
    init_stack(&s);
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&tmp);
        push(&s,(element)tmp);
    }

    element max_stick=pop(&s);
    element cur_stick;
    while(!is_empty(&s)){
        cur_stick=pop(&s);
        if(cur_stick>max_stick){
            cnt++;
            max_stick=cur_stick;
        }
    }
    printf("%d",cnt);
}