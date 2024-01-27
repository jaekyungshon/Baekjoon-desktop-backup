// A/B

#include <stdio.h>

typedef struct NumGroup {
	double a;
	double b;
}NumGroup;

int main(void){
	NumGroup g;
	scanf("%lf %lf", &g.a, &g.b);
	printf("%.16lf", g.a/g.b);
	return 0;
}
