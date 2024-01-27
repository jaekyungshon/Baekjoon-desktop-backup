// Quick A+B

#include <stdio.h>

int main(void){
	int n;
	scanf("%d", &n);
	
	//char c = getchar();
	for(int i = 0; i < n; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", a+b);
	}
	return 0;
}
