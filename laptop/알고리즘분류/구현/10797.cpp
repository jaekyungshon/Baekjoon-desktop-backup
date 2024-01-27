// Car

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,k=0;
    cin >> n;
    for(int i=0; i<5; i++){
        int tmp;
        cin >> tmp;
        if(tmp==n) k++;
    }
    cout << k;
    return 0;
}