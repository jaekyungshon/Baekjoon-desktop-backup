// °ö¼À

#include <stdio.h>

int main(void){
	int a, b;
	int bList[3] = {-1, };
	
	scanf("%d", &a);
	char c = getchar();
	scanf("%d", &b);
	
	bList[0] = (b % 100) % 10;
	bList[1] = (b % 100) / 10;
	bList[2] = (b / 100);
	
	for(int i = 0; i < 3; i++){
		printf("%d\n", a * bList[i]);
	}
	printf("%d", a*b);
	return 0;
} 
