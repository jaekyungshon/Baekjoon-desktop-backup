// He's gone

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int l;
    cin >> l;

    cout << (l%5>0 ? l/5+1:l/5);
    return 0;
}