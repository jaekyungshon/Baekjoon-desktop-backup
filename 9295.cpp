// Dise

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int t1,t2;
        cin >> t1 >> t2;
        cout << "Case " << i+1 << ": " << t1+t2 << "\n";
    }
}