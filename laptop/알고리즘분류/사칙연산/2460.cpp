// Art Trail 2

#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int a=-1,k=0;
    for(int i=0; i<10; i++){
        int e,d;
        cin >> e >> d;
        k+=(d-e);
        a=max(a,k);
    }
    cout << a;
    return 0;
}