// 0=not cute /1=cute

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,one=0,zero=0;

    cin >> t;
    for(int i=0; i<t; i++){
        int check;
        cin >> check;
        if(check) one++;
        else zero++;
    }

    cout << (one>zero ? "Junhee is cute!":"Junhee is not cute!");
    return 0;
}