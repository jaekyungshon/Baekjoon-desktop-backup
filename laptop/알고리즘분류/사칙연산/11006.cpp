// Chicken Leg

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n,m;
        cin >> n >> m;
        cout << (m*2==n ? 0:m*2-n) << " " << (m*2==n ? m:m-(m*2-n)) << "\n";
    }
}