// Korea Univ. Formul Wine

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);

    int c,k,p;
    cin >> c >> k >> p;
    
    int sum=0;
    for(int i=0; i<=c; i++){
        sum+=k*i+p*i*i;
    }
    cout << sum;
}