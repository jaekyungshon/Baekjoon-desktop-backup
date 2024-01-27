// Bottle Return

#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int s=0,t=0;
    for(int i=0; i<6; i++){
        cin >> t;
        s+=t*5;
    }
    cout << s;
}