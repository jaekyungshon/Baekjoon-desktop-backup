// Errand

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=0;
    for(int i=0; i<4; i++){
        int tmp;
        cin >> tmp;
        t+=tmp;
    }

    cout << t/60 << "\n" << t%60;
    return 0;
}