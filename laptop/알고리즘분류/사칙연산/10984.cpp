// Please get my score

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        double sum=0.;
        double total=0.;
        cin >> n;
        for(int j=0; j<n; j++){
            double c,g;
            cin >> c >> g;
            total+=c;
            sum+=c*g;
        }
        cout<<fixed;
        cout.precision(1);
        cout << (int)total << " " << sum/total << "\n";
    }
    return 0;
}