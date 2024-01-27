// Dise Game

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,P=100,Q=100;
    cin >> n;

    for(int i=0; i<n; i++){
        int p,q;
        cin >> p >> q;
        if(p>q) Q-=p;
        else if(p<q) P-=q;
    }
    cout << P << "\n" << Q;
    return 0;
}