// Domitory Floor

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);

    int r,b,l,w;
    cin >> r >> b;
    for(int i=1; i<(int)sqrt(double(r+b))+1; i++){
        if((r+b)%i==0 && i>=3){
            if(((r+b)/i-2)*(i-2)==b){
                l=(r+b)/i; w=i; break;
            }            
        }
    }
    cout << l << " " << w;
}