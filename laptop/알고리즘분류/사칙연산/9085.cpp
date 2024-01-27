// Plus

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n,sum=0;
        cin >> n;
        for(int j=0; j<n; j++){
            int tmp;
            cin >> tmp;
            sum+=tmp;
        }
        cout << sum << "\n";
    }
    return 0;
}