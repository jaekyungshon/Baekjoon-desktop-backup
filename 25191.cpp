#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    double a,b;
    cin >> a >> b;
    double tmp=a*((100-b)/100);
    if(tmp>=100) cout << 0;
    else cout << 1;
}