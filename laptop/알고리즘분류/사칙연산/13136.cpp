// Do not touch anything

#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	long long int r,c,n;
	cin >> r >> c >> n;
	long long int row=r/n+(r%n ? 1:0);
	long long int col=c/n+(c%n ? 1:0);
	long long result=row*col*1LL;
	cout << result;
}
