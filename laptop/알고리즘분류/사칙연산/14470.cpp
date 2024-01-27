// Range

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);

    int a,b,c,d,e;
    cin>>a;cin>>b;cin>>c;cin>>d;cin>>e;

    if(a<0){
        cout << c*(-a)+d+b*e;
    }
    else{
        cout << e*(b-a);
    }
}