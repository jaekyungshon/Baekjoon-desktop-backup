// Cal to Score

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,sum=0,tmp=0,k=0;
    cin >> n;
    for(int i=0; i<n; i++){
        int j;
        cin >> j;
        if(j){
            tmp+=++k;
        }
        else{
            sum+=tmp;k=tmp=0;
        }
    }
    cout << sum+tmp;
    return 0;
}