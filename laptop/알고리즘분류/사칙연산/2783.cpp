// Min Gimbob

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    double x,y;
    cin >> x >> y;
    double m=x*(1000/y);
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        double tx,ty;
        cin >> tx >> ty;
        if(m>tx*(1000/ty)) m=tx*(1000/ty);
    }

    cout<<fixed;
    cout.precision(2);
    cout << m;
}