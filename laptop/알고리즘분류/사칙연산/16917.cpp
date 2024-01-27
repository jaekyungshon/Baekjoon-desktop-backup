// Chicken

#include <iostream>
#define MIN(x,y) (x>y?y:x)
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	unsigned long long a,b,c,x,y;
	cin >> a >> b >> c >> x >> y;
	unsigned long long ta,tb,tc;
	ta=a*x;tb=b*y;
	if(x==y){
		tc=c*x*2;
	}
	else if(x>y){
		tc=MIN((c*y*2)+(a*(x-y)), c*x*2);
	}
	else{
		tc=MIN((c*x*2)+(b*(y-x)), c*y*2);
	}
	unsigned long long result=MIN(ta+tb,tc);
	cout << result;
}
