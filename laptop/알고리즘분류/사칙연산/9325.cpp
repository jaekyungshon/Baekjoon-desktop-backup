// How much?

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int s,n;
        cin >> s;
        cin >> n;
        for(int i=0; i<n; i++){
            int q,p;
            cin >> q >> p;
            s+=q*p;
        }
        cout << s << "\n";
    }
    return 0;
}