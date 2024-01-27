// TABLICA

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    double l[4];
    int cnt=0;
    cin >> l[0] >> l[3];
    cin >> l[1] >> l[2];

    double m=l[0]/l[1]+l[3]/l[2];
    for(int i=0; i<3; i++){
        double tmp=l[0];
        for(int j=1; j<4; j++){
            l[j-1]=l[j];
        }
        l[3]=tmp;

        double a=l[0]/l[1]+l[3]/l[2];
        if(a>m){
            m=a; cnt=i+1;
        }
    }
    cout << cnt;
}