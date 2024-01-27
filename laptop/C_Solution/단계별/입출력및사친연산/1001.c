// A-B

#include <stdio.h>

typedef struct NumGroup{
	int a;
	int b;
}NumGroup;

int main(void){
	NumGroup g;
	scanf("%d %d", &g.a, &g.b);
	printf("%d", g.a-g.b);
	return 0;
}
