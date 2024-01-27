// Summer Vacation Homework

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int l,a,b,c,d;
    cin >> l; cin >> a; cin >> b; cin >> c; cin >> d;

    int k=(a%c>0 ? a/c+1:a/c);
    int m=(b%d>0 ? b/d+1:b/d);
    cout << l-(k>m ? k:m);
    return 0;
}