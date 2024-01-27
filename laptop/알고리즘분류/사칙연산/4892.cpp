// Probability One

#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int i=1;
	while(true){
		int n0,n1,n2,n3,n4;
		bool flag=false;
		cin >> n0;
		if(n0==0) break;
		
		n1=3*n0;
		if(n1%2==0){
			flag=true;
			n2=n1/2;
		}
		else{
			n2=(n1+1)/2;
		}
		n3=3*n2;
		n4=n3/9;
		cout << i++ << ". " << (flag==true ? "even ":"odd ") << n4 << "\n";
	}
}
