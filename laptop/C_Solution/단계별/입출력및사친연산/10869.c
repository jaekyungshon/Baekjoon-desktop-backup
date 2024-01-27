// 사칙연산

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5
#define False -1

typedef struct NumGroup {
	int a;
	int b;
	int numList[MAX_SIZE];
}NumGroup;

void init(NumGroup* L){
	for(int i=0; i < MAX_SIZE; i++){
		if(i == 0){
			L->numList[i] = (L->a + L->b);
		}
		else if(i == 1){
			L->numList[i] = (L->a - L->b);
		}
		else if(i == 2){
			L->numList[i] = (L->a * L->b);
		}
		else if(i == 3){
			L->numList[i] = (L->a / L->b);
		}
		else{
			L->numList[i] = (L->a % L->b);
		}
	}
}

void print(NumGroup* L){
	for(int i = 0; i < MAX_SIZE; i++){
		printf("%d\n", L->numList[i]);
	}
}

int main(void){
	NumGroup* g = (NumGroup*)malloc(sizeof(NumGroup));
	
	scanf("%d %d", &g->a, &g->b);
	init(g);
	print(g);
	
	free(g);
	return 0;
} 
