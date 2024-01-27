// 알람
#include <stdio.h>

int h, m;

void setting() {
	if(m >= 45){
		m -= 45;
	}
	else{
		m += 15;
		if(h == 0){
			h = 23;
		}
		else{
			h--;
		}
	}
}

int main(void){	
	scanf("%d %d", &h, &m);
	setting();
	printf("%d %d", h, m);
	return 0;
}

