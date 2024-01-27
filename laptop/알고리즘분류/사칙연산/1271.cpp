// Amazing Richman

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n,m;
    cin >> n >> m;
    
    long long k,a;
    k=n/m;
    a=n%m;
    while(a>=m && a>0){
        k+=a/m;
        a%=m;
    }
    cout << k << "\n" << a;
    return 0;
}
