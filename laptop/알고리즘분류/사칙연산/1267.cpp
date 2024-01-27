// Phone Fee

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int a[10000];
    int n;
    int y=0,m=0;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        y+=10*(a[i]/30+1);
        m+=15*(a[i]/60+1);
    }

    if(y==m){
        cout << "Y M " << y;
    }
    else if(y>m){
        cout << "M " << m;
    }
    else{
        cout << "Y " << y;
    }
    return 0;
}