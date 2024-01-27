// Coupons

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed;
    cout.precision(2);

    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        double tmp;
        cin >> tmp;
        cout << "$" << tmp*0.8 << "\n";
    }
}