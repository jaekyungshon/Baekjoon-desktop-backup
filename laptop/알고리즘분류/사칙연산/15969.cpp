// Happy

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int b=-1,s=10000;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        b=max(b,tmp);
        s=min(s,tmp);
    }

    cout << b-s;
    return 0;
}