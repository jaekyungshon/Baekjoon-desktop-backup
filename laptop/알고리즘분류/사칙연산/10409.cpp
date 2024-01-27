// Server

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);

    int n,t,s=0,c=0;
    cin >> n >> t;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        s+=tmp;
        if(s<=t) c++;
    }
    cout << c;
}