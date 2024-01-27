// Rats

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);

    double n1,n2,n12;
    cin >> n1 >> n2 >> n12;
    cout << (int)floor((n1+1)*(n2+1)/(n12+1)-1);
}