// Card Game

#include <stdio.h>

int main(){
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	
	int max=0;
	if(m>k){
		max+=k;
	}
	else if(m<k && m!=0){
		max+=m;
	}
	else if(m!=0){
		max+=k;
	}
	
	if(n-m > n-k){
		max+=n-k;
	}
	else if(n-m < n-k && n-m!=0){
		max+=(n-m);
	}
	else if(n-m!=0){
		max+=(n-k);
	}
	
	printf("%d",max);
}
