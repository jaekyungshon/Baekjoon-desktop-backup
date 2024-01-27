// AFC

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b;
    cin >> a >> b;

    int A=(a+b)/2;
    int B=A-b;
    if(A==B) cout << -1;
    else if(A>B) cout << A << " " << B;
    else cout << B << " " << A;
}