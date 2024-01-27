// Water Fee

#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b,c,d,p;
    cin >> a >> b >> c >> d >> p;
    
    int A = p*a;
    int B = (p<=c ? b:b+(p-c)*d);
    cout << (A<B ? A:B);
    return 0;
}