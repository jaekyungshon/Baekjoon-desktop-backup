// Find to EvenNum

#include <bits/stdc++.h>
#define min(x,y) (x<y ? x:y)

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int sum=0,mi=200;
        for(int j=0; j<7; j++){
            int tmp;
            cin >> tmp;
            if(tmp%2==0) {
                sum+=tmp;
                mi=min(mi,tmp);
            }
        }
        cout << sum << " " << mi << "\n";
    }
    
    return 0;
}