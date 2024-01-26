// Mini Fantasy War

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int a[8];
        int start=0,end=4;
        for(int j=0; j<8; j++){
            cin >> a[j];
        }

        int ans=0;
        if(a[start]+a[end]<1) ans+=1;
        else ans+=1*(a[start]+a[end]);
        start++;end++;

        if(a[start]+a[end]<1) ans+=5;
        else ans+=5*(a[start]+a[end]);
        start++;end++;

        if(a[start]+a[end]<0) ans+=0;
        else ans+=2*(a[start]+a[end]);
        start++;end++;

        ans+=2*(a[start]+a[end]);

        cout << ans << "\n";
    }
}