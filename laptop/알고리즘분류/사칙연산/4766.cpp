// A Simple Question of Chemistry

#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cout << fixed;
    cout.precision(2);

    double t;
    cin >> t;

    while(true){
        double a;
        cin >> a;
        if(a>=999) break;
        cout << a-t << "\n";
        t=a;
    }
}