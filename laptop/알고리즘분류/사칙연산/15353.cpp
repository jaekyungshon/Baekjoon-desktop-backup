// Big Num A+B 2

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(0);

    string a,b,c;
    cin >> a >> b;

    int lenA=a.length()-1;
    int lenB=b.length()-1;
    int apos=lenA;
    int bpos=lenB;

    int carry=0;
    while(apos>=0 && bpos>=0){
        int tmp=(a[apos]-'0')+(b[bpos]-'0');
        tmp+=carry;
        carry=(tmp/10>0 ? tmp/10:0);
        tmp%=10;
        c+=(tmp+'0');
        apos--;bpos--;
    }
    if(lenA!=lenB){
        for(int i=lenA-lenB; i>=0; i--){
            int tmp=(a[i]-'0')+carry;
            carry=(tmp/10>0 ? tmp/10:0);
            tmp%=10;
            c+=(tmp+'0');
        }
        for(int i=lenB-lenA; i>=0; i--){
            int tmp=(b[i]-'0')+carry;
            carry=(tmp/10>0 ? tmp/10:0);
            tmp%=10;
            c+=(tmp+'0');
        }
    }

    if(carry>0) cout << carry;

    for(int i=c.length()-1; i>=0; i--){
        cout << c[i];
    }
}