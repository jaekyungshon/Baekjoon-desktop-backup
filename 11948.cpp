// Select Subject

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int mA=200,sum=0;
    int cnt=0;
    int a[4];
    int b[2];

    for(int i=0; i<4; i++){
        cin >> a[i];
        if(a[i] < mA) mA=a[i];
    }
    for(int j=0; j<2; j++){
        cin >> b[j];
    }

    for(int i=0; i<4; i++){
        if(a[i]!=mA){
            sum+=a[i];
            cnt++;
        }
    }
    if(cnt!=3) sum+=mA;
    sum+=(b[0]>b[1] ? b[0]:b[1]);

    cout << sum;
}