// Chid like candy

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n,k,s=0;
        cin >> n >> k;
        for(int j=0; j<n; j++){
            int tmp;
            cin >> tmp;
            s+=tmp/k;
        }
        cout << s << "\n";
    }
}