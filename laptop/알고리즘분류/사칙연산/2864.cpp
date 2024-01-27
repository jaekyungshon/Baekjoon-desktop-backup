// Diff to 5 and 6

#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string a,b;
    int Max=0,Min=0;

    cin >> a >> b;
    int aLen=a.length();
    int bLen=b.length();

    // Min
    for(int i=0; i<a.size(); i++){
        if(a[i]=='6') a[i]='5';
    }
    for(int i=0; i<b.size(); i++){
        if(b[i]=='6') b[i]='5';
    }

    int tmp=(aLen>bLen? bLen:aLen);
    int plus=0,m=1;
    for(int i=tmp-1; i>=0; i--){
        int k=(a[i]-'0')+(b[i]-'0')+plus;
        plus=0;
        Min+=m*(k%10);
        m*=10;
        plus+=k/10;
    }

    //Max
    for(int i=0; i<a.size(); i++){
        if(a[i]=='5') a[i]='6';
    }
    for(int i=0; i<b.size(); i++){
        if(b[i]=='5') b[i]='6';
    }

    plus=0,m=1;
    for(int i=tmp-1; i>=0; i--){
        int k=(a[i]-'0')+(b[i]-'0')+plus;
        plus=0;
        Max+=m*(k%10);
        m*=10;
        plus+=k/10;
    }

    if(aLen>bLen){
        for(int i=aLen-tmp-1; i>=0; i--){
            
        }
    }
    cout << Min << " " << Max;
    return 0;
}