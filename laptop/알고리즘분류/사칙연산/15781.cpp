// Battle Ground Game

#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int n,m;
	cin >> n >> m;
	
	unsigned long long hs=0,as=0;
	for(int i=0; i<n; i++){
		unsigned long long h;
		cin >> h;
		if(h>hs) hs=h;
	}
	for(int i=0; i<m; i++){
		unsigned long long a;
		cin >> a;
		if(a>as) as=a;
	}
	
	cout << hs+as;
}
