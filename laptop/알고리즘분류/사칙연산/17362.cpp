// Math is Physical

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    if(t<=5) cout << t;
    else{
        int n=(t-1)/4;
        int a=4*n+1;
        if(n%2==0){
            cout << 1+(t-a);
        }
        else{
            cout << 5-(t-a);
        }
    }
}