// Hallowin

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int c,v;
        cin >> c >> v;
        cout << "You get " << c/v << " piece(s) and your dad gets " << c%v << " piece(s)." << "\n";
    }
}