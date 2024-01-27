// Sigma

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int a,b;
    cin >> a >> b;
    if(a>1) cout << (((b+1)*b)/2)-(((a-1)*a)/2);
    else cout << (b*(b+1))/2;
}