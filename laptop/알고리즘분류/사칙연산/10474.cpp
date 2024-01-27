// Do you like Fractions?

#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	while(true){
		long long a,b;
		cin >> a >> b;
		if(a==0 && b==0) break;
		cout << a/b << " " << a%b << " / " << b << "\n";
	}
}
