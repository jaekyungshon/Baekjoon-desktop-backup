// Plug

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int sum=0;
    cin >> n;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        if(sum==0){
            sum+=tmp;
        }
        else if(tmp>1){
            sum+=tmp-1;
        }
    }
    cout << sum;
    return 0;
}