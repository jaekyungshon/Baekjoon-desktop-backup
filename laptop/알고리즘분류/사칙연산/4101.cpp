// Max?

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    while(true){
        int a,b;
        cin >> a >> b;
        if(a==0) break;
        cout << (a>b ? "Yes":"No") << "\n";
    }
    return 0;
}