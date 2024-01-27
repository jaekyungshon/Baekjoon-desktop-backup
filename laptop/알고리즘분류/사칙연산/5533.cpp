// Unique

#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int n;
	cin >> n;
	int list[200][3];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<3; j++){
			cin >> list[i][j];
		}
	}
	
	for(int i=0; i<n; i++){
		int sum=0;
		for(int k=0; k<3; k++){
			int tmp=list[i][k];
			bool flag=true;
			for(int j=0; j<n; j++){
				if(i==j) continue;
				else if(tmp==list[j][k]){
					flag=false;
					break;
				}
			}
			if(flag) sum+=tmp;
		}
		cout << sum << "\n";
	}
}
