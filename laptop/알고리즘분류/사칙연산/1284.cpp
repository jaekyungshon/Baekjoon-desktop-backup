// Home Address

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);

    while(true){
        string t;
        cin >> t;
        if(stoi(t)==0) break;

        int a=2;
        a+=t.length()-1;
        for(int i=0; i<t.length(); i++){
            if(t[i]=='1') a+=2;
            else if(t[i]=='0') a+=4;
            else a+=3;
        }
        cout << a << "\n";
    }
}







